# 设备模型生成代码介绍
## 1 简述

* HeyThings 设备模型抽象

> **HeyThings** 将设备模型抽象成N个**服务**，每个服务包含**属性**、**方法**、**事件**，所有设备端提供的可互联互通功能都通过模型定义来描述
>
>* 属性：设备的状态，操作， 读/写/订阅 的权限，如灯的开关
>* 方法：有**主动**与**被动**，当前模型生成代码生成的都是**被动**接口
被动：设备被操作，被控制的方法，设备提供能力的方法，比如app触发扫描
主动：设备主动调用，主动发起的方法，比如地图上传云端，主动方法会提供参考示例代码
方法与属性写操作的主要区别是：这个操作存在异常的情况，属性操作一般都是能成功的
>* 事件： 设备主动上报某一件事，如门锁打开

* 模型描述
>* 使用 [Protocol Buffers](https://github.com/protocolbuffers/protobuf) (简称PB)描述设备模型，PB 有优秀的多语言、序列化、反序列化能力

* 模型自动代码生成
>* 将开发者从繁琐的 PB 序列化，反序列化中释放出来，将重心放在关注业务的功能代码实现，即 **user.c** 函数体填空的实现，极大提升开发者接入效率
>* 本仓库代码是面向设备端开发，生成C语言版本
>* 生成代码并**不是必须**的，在 flash 资源有限，或开发者能熟练使用 PB 的时候，可以减少这层接口套用，开发者参考生成代码也能更好理解 HeyThings SDK 模型接口的使用
## 2 模型生成文件介绍

> 每个设备模型会有5个文件，如升级服务**softwareUpdate**
>
>* software_update_user.c
>* software_update_service.c
>* software_update_service.h
>* softwareUpdate.pb-c.c
>* softwareUpdate.pb-c.h
>* softwareUpdate.proto

* user.c 中已生成函数体，需要开发者填充，其中生成了属性写回调，方法的开始回调、停止回调，事件的发送结果回调等

* service.c 是相关实现，开发者无需编辑，可以查看相关代码了解PB的序列化，反序列化

* service.h 是相关接口供开发者调用，属性注册、更新，方法发送，事件发送等

* pb-c.c pb-c.h 是 [protobuf-c](https://github.com/protobuf-c/protobuf-c) 自动生成的，开发者无需关心

* .proto 文件是模型描述，不参与实际编译，可直观了解设备模型，用于查阅

## 3 模型层生成代码接口

### 3.1 服务注册

以升级服务为例

```c
int software_update_service_init(const struct software_update_properties *properties);
```

服务注册的同时会带上初始设备属性，按结构体填充参数，返回值 0 代表SDK接管成功，SDK将会对属性的订阅者进行上报

```c
struct software_update_properties soft_update_props = { 0 }; // 重要，初始化为0
soft_update_props.currentsoftwarevername = FIRMWARE_VERSION_NAME;
soft_update_props.currentsoftwarevercode = FIRMWARE_VERSION_CODE;
soft_update_props.updatestate = SOFTWARE_UPDATE_UPDATE_STATE_IDLE;

int ret = software_update_service_init(&soft_update_props);
if (ret != 0) {
    // do somethings
}
```

### 3.2 属性更新

```c
int software_update_properties_update(size_t count, unsigned int *enumerate,
                                      struct software_update_properties *properties);
```

* count 为要更新属性数量，>= 1
* enumerate 为更新属性的iid枚举列表，属性枚举值在 enum SOFTWARE_UPDATE_PROPERTY 定义
* properties 只需要填充要修改的属性
* 返回值为 0 代表 SDK 接管成功

```c

struct software_update_properties props = { 0 };
props.currentsoftwarevername = version_name;
props.updateprogress = progress;
props.updatestate = state;

uint32_t iids[3] = { SOFTWARE_UPDATE_PROPERTY_CURRENTSOFTWAREVERNAME,
                     SOFTWARE_UPDATE_PROPERTY_UPDATEPROGRESS,
                     SOFTWARE_UPDATE_PROPERTY_UPDATESTATE};
software_update_properties_update(3, iids, &props);
```

### 3.3 属性写回调

* 在属性写回调中通过 switch case 的方法可以方便处理，处理完后需要调用一次**属性更新**，属性写回调是其他端对设备的操作，调用属性更新接口，才能同步更新到云端设备影子

* 属性更新**不要求**在写回调中调用

* 业务处理中，一个属性写操作，可能有多个属性需要同步更新（需要修改关联属性）

* 以扫地机模型举例

```c
在 robot_cleaner_user.c 中
在 robot_cleaner_properties_write_cb 函数体内

int robot_cleaner_properties_write_cb(size_t count, unsigned int *enumerate,
                                      struct robot_cleaner_properties *properties)
{
    // This is handled by the application layer
    for (int i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case ROBOT_CLEANER_PROPERTY_POWER:
        break;
        case ROBOT_CLEANER_PROPERTY_MACHINESTATUS:
        break;
        case ROBOT_CLEANER_PROPERTY_ROBOTMODE:
        //get properties
        //properties->robotmode
        break;
        case ROBOT_CLEANER_PROPERTY_REPEATMODE:
        break;
        case ROBOT_CLEANER_PROPERTY_TURBOMODE:
        break;
        case ROBOT_CLEANER_PROPERTY_PROCESSINGPERCENTAGE:
        break;
        //...
        default:
        break;
        }
    }

    /**
    * please pay attention !!!
    * atfer properties setting is complete,
    * call properties update function to sync shadow
    */
    robot_cleaner_properties_update(count, enumerate, properties); //重要，需要调用属性更新

    return 0;
}
```

### 3.4 被动方法使用

#### 3.4.1 公共接口说明

* 对端发起，SDK触发 [action]_start_cb

* 调用 [action]_send() 发送应答

* 调用 [action]_stop() 结束该方法，SDK 将处理好资源释放

* [action]_stop_cb()，发生在断连，对端主动停止时，需要调用一次 [action]_stop() 释放资源

* 以扫地机回充方法举例，在 start_cb 内调用一次 send， 再调用一次 stop，send 结构体参数为空
  也要发送一次，作为收到该方法的应答

```c
在 robot_cleaner_user.c 中
在 robot_cleaner_robot_homing_start_cb 函数体内
int robot_cleaner_robot_homing_start_cb(struct hey_action_ctx *ctx,
                                       struct robot_cleaner_robot_homing_in *action,
                                       void **user_context)
{
    // This is handled by the application layer
    // 执行action
    struct robot_cleaner_robot_homing_out out = { 0 };
    robot_cleaner_robot_homing_send(ctx, &out);
    robot_cleaner_robot_homing_stop(ctx);
    return 0;
}
```

* start_cb 回调的 struct hey_action_ctx ***ctx**， 开发者可以保存后异步 stop

* *user_context 可以挂 user callback data， 在 stop_cb 或 message_cb 中传回

```c
void robot_cleaner_robot_homing_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_robot_homing_stop(ctx);
     */
    robot_cleaner_robot_homing_stop(ctx);
}
```

#### 3.4.2 流式方法

* 流式输入，增加 [action]_message_cb()

* 流式的意思是这个方法对端发送数据包次数大于 1

```c
在 software_update_user.c 中
/**
 * @brief start update file action message receive callback of software update service
 * @param user_context [callback data which form action start callback function]
 * @param action       [start update file action in]
 * @return int         [action message callback handle result, 0 means success]
 */
int software_update_start_update_file_message_cb(void *user_context,
        struct software_update_start_update_file_in *action)
{
    // This is handled by the application layer
    // user_context is assigned to the SDK in the *_start_cb function
    // 保存升级文件
    struct software_update_start_update_file_out out;
    out.code = 0; // 仅举例用，以实际业务为准
    int ret = software_update_start_update_file_send(
                (struct hey_action_ctx *)user_context->ctx, &out);
    if (ret != 0) {
        //debug
    }
    return 0;
}
```

* 流式输出， 多次调用 [action]_send() 即可

### 3.5 事件使用

* 每个事件对应两个接口，一个 **通知**， 一个 **通知结果回调**

* 事件有多个订阅者，云端，或局域网设备，订阅**成功与否**是根据上报云端是否成功

* 对于事件上报云端产生记录的需求，设备需要保证事件上报成功，例如事件上报成功标记一下，未标记事件在设备具备上报条件后重新上报，**注意**事件上报填充的时间为事件产生的时间

* 应用层主动调用notify发送事件，以扫地机事件举例

#### 3.5.1 通知

```c
#include "robot_cleaner_service.h"

struct robot_cleaner_event_dust_box_full event = { 0 };
struct event_notify_attr attr;
attr.importance = 0;
attr.ref_uuid = 0;
attr.timestamp = 0; //unix 时间，单位s
attr.ctx = NULL; //可以通过ctx携带 user_data

int64_t ret = robot_cleaner_dust_box_full_notify(&event, &attr);
if (ret < 0)
{
    //debug error code = errno;
}
```

* robot_cleaner_dust_box_full_notify 返回值大于 0 为本次事件uuid

* event 参数为具体事件的参数

* attr.importance 事件重要程度，越大越重要，当前仅SDK管理事件池使用，在事件堆积时，
  低优先级事件将被移除，回调应用层通知该事件失败，默认填 0 即可

* attr.ref_uuid 参考 uuid，在事件关联中使用，如模型没特殊说明，不需要关联，默认填 0

* attr.ctx 可以通过 ctx 携带 user_data， 在事件通知结果回调中返回

#### 3.5.2 通知结果回调

```c
在 robot_cleaner_user.c 中

/**
 * @brief dust box full notify result callback of robot cleaner service
 * @param ctx     [registered callback context by user]
 * @param result  [the result of notify, 0 means success]
 * @return none
*/
void robot_cleaner_dust_box_full_notify_result_cb(struct hey_job_ctx *ctx, int result)
{
    // This is handled by the application layer
    if (result == 0) {
        //notify success
    }
}
```

### 3.6 数组属性

数组属性是一种特殊属性，HeyThings 为数组属性提供的更多的操作方法，除了基本的属性写，还有数组的添加、删除、替换

* PB 中带有 repeated ArrayNode 就是数组属性，如 light 服务中：

```shell
 message Properties {
    repeated ArrayNode sceneCttBrightness = 12;
 }
```

* user.c 中对应增加三个回调函数，需要开发者填充

```c
/**
 * @brief arrayNode properties add callback of light service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t light_scenecttbrightness_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of light service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t light_scenecttbrightness_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of light service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t light_scenecttbrightness_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}
```

* 数组操作中的数据为 PB 序列化后的数据，生成代码同时为该数组属性的数据打包、解包提供四个函数，在 service.h 中

```c
/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
struct light_scene_ctt_brightness *light_scene_ctt_brightness_unpack(const uint8_t *data, size_t len);

void light_scene_ctt_brightness_free_unpacked(struct light_scene_ctt_brightness *data);

// less than 0 means failure
int32_t light_scene_ctt_brightness_get_packed_size(const struct light_scene_ctt_brightness *data);

// less than 0 means failure
int32_t light_scene_ctt_brightness_pack(const struct light_scene_ctt_brightness *data, uint8_t *out);

```

#### 3.6.1 打包、解包函数说明

* light_scene_ctt_brightness_unpack
将 PB 数据解包，存放到 struct light_scene_ctt_brightness * 结构体指针返回

* light_scene_ctt_brightness_free_unpacked
必须调用该函数对 light_scene_ctt_brightness_unpack 返回的资源做释放

* light_scene_ctt_brightness_get_packed_size
提前获取打包后的数据长度，好申请足够的内存空间，非必须，开发者确保内存足够

* light_scene_ctt_brightness_pack
对 struct light_scene_ctt_brightness * 结构体进行打包，输出到 out 中，需要确保 out 指向空间有足够内存
