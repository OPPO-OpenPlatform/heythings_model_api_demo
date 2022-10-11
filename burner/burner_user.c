#include "schema/burner/burner_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of burner service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t burner_properties_write_cb(size_t count, uint32_t *enumerate, struct burner_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case BURNER_PROPERTY_HEATINGLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heating Level = %d", properties->heatinglevel);
            break;
        case BURNER_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case BURNER_PROPERTY_MENUMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "menu Mode = %d", properties->menumode);
            break;
        case BURNER_PROPERTY_WEIGHT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "weight = %d", properties->weight);
            break;
        case BURNER_PROPERTY_THICKNESS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "thickness = %d", properties->thickness);
            break;
        case BURNER_PROPERTY_STEAKLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "steak Level = %d", properties->steaklevel);
            break;
        case BURNER_PROPERTY_CONCENTRATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "concentration = %d", properties->concentration);
            break;
        case BURNER_PROPERTY_OPERATIONTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Time = %d", properties->operationtime);
            break;
        case BURNER_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case BURNER_PROPERTY_MACHINESTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "machine Status = %d", properties->machinestatus);
            break;
        case BURNER_PROPERTY_CONSTANTTEMPENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "constant Temp Enabled = %s", properties->constanttempenabled ? "true" : "false");
            break;
        case BURNER_PROPERTY_APPOINTMENTPOWEROFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power Off = %d", properties->appointmentpoweroff);
            break;
        case BURNER_PROPERTY_FIRESTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fire Status = %s", properties->firestatus ? "true" : "false");
            break;
        case BURNER_PROPERTY_RUNNINGDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Duration = %d", properties->runningduration);
            break;
        case BURNER_PROPERTY_REMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remain Time = %d", properties->remaintime);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return burner_properties_update(count, enumerate, properties);
}

/**
 * @brief turn off fire action start callback of burner service
 * @param ctx          [action context]
 * @param action       [turn off fire action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t burner_turn_off_fire_start_cb(struct hey_action_ctx *ctx, struct burner_turn_off_fire_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "burner turn_off_fire action in");
    return -1;
}

/**
 * @brief turn off fire action stop callback of burner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void burner_turn_off_fire_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: burner_turn_off_fire_stop(ctx);
     */
}

/**
 * @brief dry braised notify result callback of burner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void burner_dry_braised_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief gas detected notify result callback of burner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void burner_gas_detected_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief burner event information notify result callback of burner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void burner_burner_event_information_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
