#include "schema/mfa/mfa_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of mfa service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t mfa_properties_write_cb(size_t count, uint32_t *enumerate, struct mfa_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case MFA_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case MFA_PROPERTY_ALARMSTATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "alarm State = %s", properties->alarmstate ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return mfa_properties_update(count, enumerate, properties);
}

/**
 * @brief reset action start callback of mfa service
 * @param ctx          [action context]
 * @param action       [reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t mfa_reset_start_cb(struct hey_action_ctx *ctx, struct mfa_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "mfa reset action in");
    return -1;
}

/**
 * @brief reset action stop callback of mfa service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void mfa_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: mfa_reset_stop(ctx);
     */
}

/**
 * @brief start mfa notify result callback of mfa service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void mfa_start_mfa_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
