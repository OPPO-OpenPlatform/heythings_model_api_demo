/**
 * Copyright (c) 2008-2022, OPPO Mobile Comm Corp., Ltd
 * VENDOR_EDIT
 * @file schema.h
 * @brief 设备抽象模型操作接口
 * @version 0.1
 * @date 2021-01-27
 * @author WatWu
 */

#ifndef HEY_SCHEMA_H
#define HEY_SCHEMA_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "types.h"

/**
 * @brief 设备属性被动操作回调函数列表
 */
struct hey_properties_callbacks {
    /**
    * @brief 对端对设备属性进行写入
    * @param cb_data    [服务注册的回调数据]
    * @param n_iid      [属性id数量]
    * @param iids       [属性id列表]
    * @param len        [写入属性的数据长度]
    * @param value      [写入属性的原始数据]
    * @return int32_t   [回调处理结果]
    */
    int32_t (*write)(void *cb_data, size_t n_iid, uint32_t *iids,
                     size_t len, uint8_t *value);

    /**
    * @brief 对端对设备属性数组添加元素
    * @param cb_data    [服务注册的回调数据]
    * @param iid        [被添加元素的数组属性id]
    * @param len        [添加的属性元素数据长度]
    * @param value      [添加的属性元素原始数据]
    * @return int32_t   [添加的元素在数组中的id，负值为错误码]
    */
    int32_t (*array_add)(void *cb_data, uint32_t iid,
                         size_t len, uint8_t *value);

    /**
    * @brief 对端对设备属性数组删除元素
    * @param cb_data    [服务注册的回调数据]
    * @param iid        [被删除元素的数组属性id]
    * @param n_id       [被删除元素数量]
    * @param ids        [被删除元素在数组中的id列表]
    * @return int32_t   [回调处理结果]
    */
    int32_t (*array_del)(void *cb_data, uint32_t iid, size_t n_id, uint32_t *ids);

    /**
    * @brief 对端对设备属性数组更新元素
    * @param cb_data    [服务注册的回调数据]
    * @param iid        [被更新元素的数组属性id]
    * @param id         [被更新元素在数组中的id]
    * @param len        [更新的属性元素数据长度]
    * @param value      [更新的属性元素原始数据]
    * @return int32_t   [回调处理结果]
    */
    int32_t (*array_replace)(void *cb_data, uint32_t iid, uint32_t id,
                             size_t len, uint8_t *value);
};

/**
 * @brief 动作类型定义
 */
enum hey_action_type {
    HEY_ACTION_ONCE = 0,
    HEY_ACTION_IN_ONCE_OUT_STREAM = 1,
    HEY_ACTION_IN_STREAM_OUT_ONCE = 2,
    HEY_ACTION_IN_STREAM_OUT_STREAM = 3
};

/**
 * 流式动作上下文回调函数列表
 */
struct hey_action_ctx_callbacks {
    /**
    * @brief 对端对设备发起动作交互
    * @param cb_data        [服务注册的回调数据]
    * @param ctx            [动作的上下文，SDK生成，应用层负责保存及释放]
    * @param len            [动作数据长度]
    * @param value          [动作原始数据]
    * @param user_context   [自定义上下文，SDK回调时带回，应用层生成及负责释放]
    * @return int32_t       [回调处理结果]
    */
    int32_t (*start)(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value,
                     void **user_context);

    /**
    * @brief 流式动作交互的消息接收回调
    * @param cb_data        [服务注册的回调数据]
    * @param user_context   [start回调中传入的上下文]
    * @param len            [动作数据长度]
    * @param value          [动作原始数据]
    * @return int32_t       [回调处理结果]
    */
    int32_t (*message)(void *cb_data, void *user_context, size_t len, uint8_t *value);

    /**
    * @brief 对端对设备停止动作交互
    * @param cb_data        [服务注册的回调数据]
    * @param user_context   [start回调中传入的上下文]
    */
    void (*stop)(void *cb_data, void *user_context);
};

/**
 * @brief 设备抽象动作定义入口
 */
struct hey_action_entry {
    uint32_t iid;
    enum hey_action_type type;
    const struct hey_action_ctx_callbacks *cbs; // 函数表应使用静态变量定义
};

/**
 * @brief 动作交互的消息发送接口
 * @param ctx       [动作的上下文]
 * @param len       [动作数据长度]
 * @param value     [动作原始数据]
 * @return int32_t  [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_action_msg_send(struct hey_action_ctx *ctx,
                            size_t len, uint8_t *value);

/**
 * @brief 主动停止动作交互
 * @param ctx       [动作的上下文]
 * @return int32_t  [操作结果]
 */
int32_t hey_action_stop(struct hey_action_ctx *ctx);

/**
 * @brief 主动开始一个动作
 * @param sock                      [连接套接字]
 * @param user_context              [回调数据]
 * @param siid                      [动作的服务ID]
 * @param act_entry                 [动作定义]
 * @param len                       [动作数据长度]
 * @param value                     [动作原始数据]
 * @return struct hey_action_ctx*   [动作的上下文]
 */
struct hey_action_ctx *hey_action_start(struct hey_socket *sock, void *user_context, uint32_t siid,
                                        struct hey_action_entry *act_entry, size_t len, uint8_t *value);

enum hey_property_type {
    HEY_PROPERTY_TYPE_GENERIC = 0,
    HEY_PROPERTY_TYPE_ARRAY = 1,
};

struct hey_schema_property {
    uint32_t iid;
    enum hey_property_type type;
};

/**
 * @brief 设备抽象属性
 */
struct hey_schema_properties {
    size_t n_iid;                               // 属性ID数量
    struct hey_schema_property *iids;           // 属性ID列表
    const struct hey_properties_callbacks *cbs; // 函数表应使用静态变量定义
    size_t len;                                 // 属性数据长度
    uint8_t *value;                             // 属性数据内容
};

/**
 * @brief 设备抽象动作
 */
struct hey_schema_actions {
    size_t n_iid;                  // 动作ID数量
    struct hey_action_entry *iids; // 动作结构列表
};

/**
 * @brief 设备抽象事件
 */
struct hey_schema_events {
    size_t n_iid;   // 事件ID数量
    uint32_t *iids; // 事件ID列表
};

/**
 * @brief 设备抽象服务，包含属性、动作、事件
 */
struct hey_schema_service {
    struct hey_schema_properties properties;
    struct hey_schema_actions actions;
    struct hey_schema_events events;
};

/**
 * @brief initialize hey schema service
 * @param service [schema service]
 */
void hey_schema_service_init(struct hey_schema_service *service);

/**
 * @brief 向SDK注册一个设备抽象服务，由SDK负责服务属性等的内部交互管理
 * @param siid          [待注册的服务编号]
 * @param service       [待注册的抽象服务]
 * @param cb_data       [注册回调数据]
 * @return hey_service  [已注册的服务对象，NULL则为注册失败]
 */
struct hey_service *hey_service_register(uint32_t siid, struct hey_schema_service *service,
                                         void *cb_data);

/**
 * @brief 属性更新的内容
 */
struct hey_properties_content {
    size_t n_iid;
    uint32_t *iids;
    size_t len;
    uint8_t *value;
};

/**
 * @brief 设备属性改变更新到SDK
 * @param service   [服务对象]
 * @param content   [属性更新内容]
 * @return int32_t  [更新到SDK的结果]
 */
int32_t hey_properties_update(struct hey_service *service,
                              struct hey_properties_content *content);

/**
 * @brief 写入属性结果回调
 * @param ctx       [这次操作的上下文，由写函数传入]
 * @param errcode   [操作结果]
 */
typedef void (*properties_write_result_cb)(struct hey_job_ctx *ctx, int32_t errcode);

/**
 * @brief 写入对方属性
 * @param sock          [属性写操作端连接句柄]
 * @param siid          [写服务id]
 * @param properties    [写属性值]
 * @param cb            [写结果回调函数]
 * @param ctx           [属性写操作上下文，供回调中使用]
 * @return int32_t      [接口调用结果，表示数据是否成功交付到SDK中] 
 * @note 当用户不传入struct hey_job_ctx值时，该函数内部数据结构销毁在调用其结果回调后销毁
 *       ctx由用户产生，用户需要保证每次操作的唯一性，否则当用户主动结束任务时，会导致一次取消所有的job
 */
int32_t hey_properties_write(struct hey_socket *sock, uint32_t siid, struct hey_properties_content *properties,
                             properties_write_result_cb cb, struct hey_job_ctx *ctx);

/**
 * @brief 读取对方属性回调函数
 * @param ctx       [操作的上下文，由读函数传入]
 * @param errcode   [操作的结果]
 * @param len       [属性读取的数据长度]
 * @param value     [属性读取的数据]
 */
typedef void (*properties_read_resp_cb)(struct hey_job_ctx *ctx, int32_t errcode, size_t len, uint8_t *value);

/**
 * @brief 读取对方属性
 * @param sock      [属性操作端连接句柄]
 * @param siid      [属性读服务id]
 * @param n_iid     [属性读服务属性个数，为0表示获取整个服务属性]
 * @param iids      [属性读服务属性id]
 * @param cb        [属性读回复回调]
 * @param ctx       [属性读操作上下文，供回调中使用]
 * @return int32_t  [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_properties_read(struct hey_socket *sock, uint32_t siid, size_t n_iid, uint32_t *iids,
                            properties_read_resp_cb cb, struct hey_job_ctx *ctx);

/**
 * @brief 属性通知变化数据
 */
struct hey_schema_properties_change {
    uint32_t siid;
    struct hey_properties_content properties;
};

/**
 * @brief 属性订阅回调
 */
struct hey_schema_observe_cbs {
    void (*notify)(struct hey_job_ctx *ctx, size_t n_changes, struct hey_schema_properties_change *changes);
    void (*observe_end)(struct hey_job_ctx *ctx, int32_t errcode);
};

/**
 * @brief 订阅对方属性
 * @param sock      [属性操作端连接句柄]
 * @param siid      [属性订阅服务id]
 * @param n_iid     [属性订阅服务属性个数，为0表示订阅所有属性]
 * @param iids      [属性订阅服务属性id]
 * @param cbs       [属性订阅回调函数]
 * @param ctx       [属性订阅操作上下文，供回调中使用]
 * @return int32_t  [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_properites_observe(struct hey_socket *sock, uint32_t siid,
                               size_t n_iid, uint32_t *iids,
                               struct hey_schema_observe_cbs *cbs, struct hey_job_ctx *ctx);

/**
 * @brief 数组属性数据
 */
struct hey_schema_array_data {
    uint32_t iid;
    uint32_t id;
    size_t len;     // 属性数据长度
    uint8_t *value; // 属性数据内容
};

/**
 * @brief 数组添加元素回调函数
 * @param ctx       [数组操作上下文]
 * @param errcode   [数组操作结果]
 * @param id        [数据添加成功id]
 */
typedef void (*hey_schema_array_add_cb)(struct hey_job_ctx *ctx, int32_t errcode, uint32_t id);

/**
 * @brief 往对方数组添加元素
 * @param sock      [数组操作端连接句柄]
 * @param siid      [数组服务id]
 * @param data      [数组属性数据]
 * @param cb        [数组添加回调函数]
 * @param ctx       [数组操作上下文，供回调函数使用]
 * @return int32_t  [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_array_add(struct hey_socket *sock, uint32_t siid,
                      const struct hey_schema_array_data *data,
                      hey_schema_array_add_cb cb, struct hey_job_ctx *ctx);

/**
 * @brief 获取对方数组数据回调
 * @param ctx       [操作上下文]
 * @param errcode   [操作结果]
 * @param len       [获取数据长度]
 * @param value     [获取数据]
 */
typedef void (*hey_schema_array_get_cb)(struct hey_job_ctx *ctx, int32_t errcode, size_t len, uint8_t *value);

/**
 * @brief 获取对方数组元素数据
 * @param sock      [数组操作端连接句柄]
 * @param siid      [数组获取操作服务id]
 * @param iid       [数组获取操作属性id]
 * @param id        [服务属性数组id]
 * @param cb        [数组获取回调]
 * @param ctx       [数组操作上下文，供回调函数使用]
 * @return int32_t  [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_array_get(struct hey_socket *sock, uint32_t siid, uint32_t iid, uint32_t id,
                      hey_schema_array_get_cb cb, struct hey_job_ctx *ctx);

/**
 * @brief 列出对方数组回调
 * @param ctx       [操作上下文]
 * @param errcode   [操作结果]
 * @param n_id      [列出id个数]
 * @param ids       [列出id值]
 */
typedef void (*hey_schema_array_list_cb)(struct hey_job_ctx *ctx, int32_t errcode, size_t n_id, uint32_t *ids);

/**
 * @brief 列出对方数组元素
 * @param sock      [数组列出操作端连接句柄]
 * @param siid      [数组列出操作服务id]
 * @param iid       [数组列出操作属性id]
 * @param cb        [数组列出回调函数]
 * @param ctx       [数组列出操作上下文，供回调使用]
 * @return int32_t  [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_array_list(struct hey_socket *sock, uint32_t siid, uint32_t iid,
                       hey_schema_array_list_cb cb, struct hey_job_ctx *ctx);

/**
 * @brief 删除对方数组元素回调
 * @param ctx       [操作上下文]
 * @param errcode   [操作结果]
 */
typedef void (*hey_schema_array_remove_cb)(struct hey_job_ctx *ctx, int32_t errcdoe);

/**
 * @brief 删除对方数组元素
 * @param sock      [数组删除操作端连接句柄]
 * @param siid      [数组操作服务id]
 * @param iid       [数组操作属性id]
 * @param id        [数组操作数组id]
 * @param cb        [结果回调]
 * @param ctx       [数组操作上下文，供回调使用]
 * @return int32_t  [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_array_remove(struct hey_socket *sock, uint32_t siid, uint32_t iid, uint32_t id,
                         hey_schema_array_remove_cb cb, struct hey_job_ctx *ctx);

/**
 * @brief 替换对方数组元素回调
 */
typedef void (*hey_schema_array_replace_cb)(struct hey_job_ctx *ctx, int32_t errcode);

/**
 * @brief 替换对方数组元素
 * @param sock      [数组替换操作端连接句柄]
 * @param siid      [数组操作服务id]
 * @param data      [数组操作数据]
 * @param cb        [结果回调]
 * @param ctx       [数组操作上下文，供回调使用]
 * @return int32_t  [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_array_replace(struct hey_socket *sock, uint32_t siid, struct hey_schema_array_data *data,
                          hey_schema_array_replace_cb cb, struct hey_job_ctx *ctx);

struct hey_schema_event_reported {
    uint32_t siid;
    uint32_t iid;
    size_t len;
    uint8_t *value;
    uint32_t seq;
    uint32_t lost;
    uint32_t importance;
    uint64_t notifyid;
    uint64_t refnotify_id;
    uint64_t timestamp;
};

struct hey_schema_event_identifier {
    uint32_t siid;
    uint32_t iid;
};

/**
 * @brief 事件订阅回调函数表
 */
struct hey_schema_events_subscribe_cbs {
    void (*subscibe_resp)(struct hey_job_ctx *ctx, uint32_t seq);
    void (*notify)(struct hey_job_ctx *ctx, struct hey_schema_event_reported *event);
    void (*subscribe_end)(struct hey_job_ctx *ctx, int32_t errcode);
};

/**
 * @brief 订阅对方事件
 * @param sock          [连接句柄]
 * @param n_identifier  [事件个数]
 * @param identifier    [事件结构]
 * @param cbs           [回调函数表]
 * @param ctx           [操作上下文]
 * @return int32_t      [接口调用结果，表示数据是否成功交付到SDK中]
 */
int32_t hey_event_subscribe(struct hey_socket *sock,
                            size_t n_identifier, struct hey_schema_event_identifier *identifier,
                            struct hey_schema_events_subscribe_cbs *cbs, struct hey_job_ctx *ctx);

struct hey_event_notify_content {
    uint32_t iid;        // 事件ID
    uint32_t importance; // 事件优先级
    uint64_t uuid;       // 事件uuid，新事件填0，重发事件填上一次调用产生的uuid
    uint64_t ref_uuid;   // 事件通知关联的UUID
    uint64_t timestamp;
    size_t len;
    uint8_t *value;
};

/**
 * @brief 事件通知结果回调
 * @param ctx       [用户调用上下文]
 * @param errcode   [0成功，其他失败]
 */
typedef void (*hey_schema_event_notify_cb)(struct hey_job_ctx *ctx, int32_t errcode);

/**
 * @brief 主动事件通知
 * @param service   [服务对象]
 * @param content   [实际通知的内容]
 * @param cb        [事件通知回调]
 * @param ctx       [操作上下文]
 * @return int64_t  [事件通知uuid，负值为错误码]
 */
int64_t hey_event_notify(struct hey_service *service, struct hey_event_notify_content *content,
                         hey_schema_event_notify_cb cb, struct hey_job_ctx *ctx);

/**
 * @brief 用户主动结束job函数, SDK将不会回调该上下文
 * @param ctx       [用户需要结束的job上下文]
 * @return int32_t  [接口调用结果]
 */
int32_t hey_cancel_job(struct hey_job_ctx *ctx);

#endif
