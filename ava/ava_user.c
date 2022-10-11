#include "schema/ava/ava_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of ava service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t ava_properties_write_cb(size_t count, uint32_t *enumerate, struct ava_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case AVA_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case AVA_PROPERTY_ALARMSTATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "alarm State = %s", properties->alarmstate ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return ava_properties_update(count, enumerate, properties);
}

/**
 * @brief start ava action start callback of ava service
 * @param ctx          [action context]
 * @param action       [start ava action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t ava_start_ava_start_cb(struct hey_action_ctx *ctx, struct ava_start_ava_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "ava start_ava action in");
    return -1;
}

/**
 * @brief start ava action stop callback of ava service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void ava_start_ava_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: ava_start_ava_stop(ctx);
     */
}

/**
 * @brief stop ava action start callback of ava service
 * @param ctx          [action context]
 * @param action       [stop ava action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t ava_stop_ava_start_cb(struct hey_action_ctx *ctx, struct ava_stop_ava_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "ava stop_ava action in");
    return -1;
}

/**
 * @brief stop ava action stop callback of ava service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void ava_stop_ava_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: ava_stop_ava_stop(ctx);
     */
}
