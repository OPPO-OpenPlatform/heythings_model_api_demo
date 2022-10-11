#include "schema/deviceError/device_error_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of device error service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t device_error_properties_write_cb(size_t count, uint32_t *enumerate, struct device_error_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case DEVICE_ERROR_PROPERTY_ERRORNO:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case DEVICE_ERROR_PROPERTY_CURRENTERRORNO:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return device_error_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of device error service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t device_error_errorno_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of device error service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t device_error_errorno_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of device error service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t device_error_errorno_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of device error service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t device_error_currenterrorno_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of device error service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t device_error_currenterrorno_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of device error service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t device_error_currenterrorno_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief device fault notify result callback of device error service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void device_error_device_fault_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief device message notify result callback of device error service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void device_error_device_message_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief device alert notify result callback of device error service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void device_error_device_alert_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
