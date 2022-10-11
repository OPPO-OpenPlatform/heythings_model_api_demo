#include "schema/devDiagnosis/dev_diagnosis_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of dev diagnosis service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t dev_diagnosis_properties_write_cb(size_t count, uint32_t *enumerate, struct dev_diagnosis_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case DEV_DIAGNOSIS_PROPERTY_ENABLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "enable = %s", properties->enable ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return dev_diagnosis_properties_update(count, enumerate, properties);
}

/**
 * @brief upload log cmd action start callback of dev diagnosis service
 * @param ctx          [action context]
 * @param action       [upload log cmd action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t dev_diagnosis_upload_log_cmd_start_cb(struct hey_action_ctx *ctx, struct dev_diagnosis_upload_log_cmd_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "dev_diagnosis upload_log_cmd action in");
    return -1;
}

/**
 * @brief upload log cmd action stop callback of dev diagnosis service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void dev_diagnosis_upload_log_cmd_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: dev_diagnosis_upload_log_cmd_stop(ctx);
     */
}

/**
 * @brief get log data action start callback of dev diagnosis service
 * @param ctx          [action context]
 * @param action       [get log data action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t dev_diagnosis_get_log_data_start_cb(struct hey_action_ctx *ctx, struct dev_diagnosis_get_log_data_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "dev_diagnosis get_log_data action in");
    return -1;
}

/**
 * @brief get log data action stop callback of dev diagnosis service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void dev_diagnosis_get_log_data_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: dev_diagnosis_get_log_data_stop(ctx);
     */
}
