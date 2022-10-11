#include "schema/gasCooker/gas_cooker_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of gas cooker service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t gas_cooker_properties_write_cb(size_t count, uint32_t *enumerate, struct gas_cooker_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case GAS_COOKER_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return gas_cooker_properties_update(count, enumerate, properties);
}

/**
 * @brief turn off fire action start callback of gas cooker service
 * @param ctx          [action context]
 * @param action       [turn off fire action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t gas_cooker_turn_off_fire_start_cb(struct hey_action_ctx *ctx, struct gas_cooker_turn_off_fire_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "gas_cooker turn_off_fire action in");
    return -1;
}

/**
 * @brief turn off fire action stop callback of gas cooker service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void gas_cooker_turn_off_fire_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: gas_cooker_turn_off_fire_stop(ctx);
     */
}
