#include "schema/battery/battery_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of battery service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t battery_properties_write_cb(size_t count, uint32_t *enumerate, struct battery_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case BATTERY_PROPERTY_BATTERYLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "battery Level = %d", properties->batterylevel);
            break;
        case BATTERY_PROPERTY_BATTERYCHARGING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "battery Charging = %s", properties->batterycharging ? "true" : "false");
            break;
        case BATTERY_PROPERTY_CHARGETIMEREMAINING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "charge Time Remaining = %d", properties->chargetimeremaining);
            break;
        case BATTERY_PROPERTY_BATTERYTHRESHOLD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "battery Threshold = %d", properties->batterythreshold);
            break;
        case BATTERY_PROPERTY_BATTERYINFO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "batteryInfo.capacity = %d", properties->batteryinfo->capacity);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "batteryInfo.voltage = %d", properties->batteryinfo->voltage);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "batteryInfo.electricengergy = %d", properties->batteryinfo->electricengergy);
            break;
        case BATTERY_PROPERTY_STOPCHARGINGTHRESHOLD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "stop Charging Threshold = %d", properties->stopchargingthreshold);
            break;
        case BATTERY_PROPERTY_LOWBATTERYSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "low Battery Status = %s", properties->lowbatterystatus ? "true" : "false");
            break;
        case BATTERY_PROPERTY_READYTOCHARGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ready To Charge = %s", properties->readytocharge ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return battery_properties_update(count, enumerate, properties);
}

/**
 * @brief start charge action start callback of battery service
 * @param ctx          [action context]
 * @param action       [start charge action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t battery_start_charge_start_cb(struct hey_action_ctx *ctx, struct battery_start_charge_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "battery start_charge action in");
    return -1;
}

/**
 * @brief start charge action stop callback of battery service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void battery_start_charge_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: battery_start_charge_stop(ctx);
     */
}

/**
 * @brief stop charge action start callback of battery service
 * @param ctx          [action context]
 * @param action       [stop charge action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t battery_stop_charge_start_cb(struct hey_action_ctx *ctx, struct battery_stop_charge_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "battery stop_charge action in");
    return -1;
}

/**
 * @brief stop charge action stop callback of battery service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void battery_stop_charge_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: battery_stop_charge_stop(ctx);
     */
}

/**
 * @brief low battery notify result callback of battery service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void battery_low_battery_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief charging end notify result callback of battery service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void battery_charging_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief charging start notify result callback of battery service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void battery_charging_start_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
