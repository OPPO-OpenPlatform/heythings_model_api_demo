#include "schema/washingMachine/washing_machine_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of washing machine service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t washing_machine_properties_write_cb(size_t count, uint32_t *enumerate, struct washing_machine_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case WASHING_MACHINE_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_WASHERRUNNINGSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "washer Running Status = %d", properties->washerrunningstatus);
            break;
        case WASHING_MACHINE_PROPERTY_WASHINGMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "washing Mode = %d", properties->washingmode);
            break;
        case WASHING_MACHINE_PROPERTY_WATERLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Level = %d", properties->waterlevel);
            break;
        case WASHING_MACHINE_PROPERTY_WASHCYCLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wash Cycle = %d", properties->washcycle);
            break;
        case WASHING_MACHINE_PROPERTY_OPERATIONTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Time = %d", properties->operationtime);
            break;
        case WASHING_MACHINE_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case WASHING_MACHINE_PROPERTY_SPINSPEED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "spin Speed = %d", properties->spinspeed);
            break;
        case WASHING_MACHINE_PROPERTY_SPINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "spin Time = %d", properties->spintime);
            break;
        case WASHING_MACHINE_PROPERTY_OPERATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Mode = %d", properties->operationmode);
            break;
        case WASHING_MACHINE_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_RINSEWATERLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "rinse Water Level = %d", properties->rinsewaterlevel);
            break;
        case WASHING_MACHINE_PROPERTY_WASHSTRENGTH:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wash Strength = %d", properties->washstrength);
            break;
        case WASHING_MACHINE_PROPERTY_DEWATERINGSTRENGTH:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dewatering Strength = %d", properties->dewateringstrength);
            break;
        case WASHING_MACHINE_PROPERTY_DETERGENTLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "detergent Level = %d", properties->detergentlevel);
            break;
        case WASHING_MACHINE_PROPERTY_SOFTENERLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "softener Level = %d", properties->softenerlevel);
            break;
        case WASHING_MACHINE_PROPERTY_AUTOWEIGHTINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Weighting Enabled = %s", properties->autoweightingenabled ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_SOAKWATERLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "soak Water Level = %d", properties->soakwaterlevel);
            break;
        case WASHING_MACHINE_PROPERTY_SOAKTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "soak Time = %d", properties->soaktime);
            break;
        case WASHING_MACHINE_PROPERTY_REMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remain Time = %d", properties->remaintime);
            break;
        case WASHING_MACHINE_PROPERTY_AIRDRY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "air Dry = %s", properties->airdry ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_KEEPWATER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "keep Water = %s", properties->keepwater ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_FCSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fcs Enabled = %s", properties->fcsenabled ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_INTENSEWASHENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "intense Wash Enabled = %s", properties->intensewashenabled ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_OFFCENTERWASHENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "offcenter Wash Enabled = %s", properties->offcenterwashenabled ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_CLEANNOTIFICATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "clean Notification = %s", properties->cleannotification ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_WATERCONSUMPTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Consumption = %d", properties->waterconsumption);
            break;
        case WASHING_MACHINE_PROPERTY_POWERCONSUMPTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power Consumption = %d", properties->powerconsumption);
            break;
        case WASHING_MACHINE_PROPERTY_DRYLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dry Level = %d", properties->drylevel);
            break;
        case WASHING_MACHINE_PROPERTY_EASYIRONINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "easy Ironing Enabled = %s", properties->easyironingenabled ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_WASHATNIGHT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wash At Night = %s", properties->washatnight ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_SPEEDYWASH:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "speedy Wash = %s", properties->speedywash ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_SPRAYWASH:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "spray Wash = %s", properties->spraywash ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_STEAMWASH:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "steam Wash = %s", properties->steamwash ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_SMARTRINSE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "smart Rinse = %s", properties->smartrinse ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_CLEANRINSE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "clean Rinse = %s", properties->cleanrinse ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_STAINWASH:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "stain Wash = %d", properties->stainwash);
            break;
        case WASHING_MACHINE_PROPERTY_DISINFECTANT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "disinfectant = %s", properties->disinfectant ? "true" : "false");
            break;
        case WASHING_MACHINE_PROPERTY_RINSECYCLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "rinse Cycle = %d", properties->rinsecycle);
            break;
        case WASHING_MACHINE_PROPERTY_APPOINTMENTTASKCOMPLETED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.status = %d", properties->appointmenttaskcompleted->status);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.name = %d", properties->appointmenttaskcompleted->name);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.hour = %d", properties->appointmenttaskcompleted->hour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.min = %d", properties->appointmenttaskcompleted->min);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.sec = %d", properties->appointmenttaskcompleted->sec);
            break;
        case WASHING_MACHINE_PROPERTY_APPOINTMENTREMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Remain Time = %d", properties->appointmentremaintime);
            break;
        case WASHING_MACHINE_PROPERTY_APPOINTMENTTASKSTART:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskStart.status = %d", properties->appointmenttaskstart->status);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskStart.name = %d", properties->appointmenttaskstart->name);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskStart.hour = %d", properties->appointmenttaskstart->hour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskStart.min = %d", properties->appointmenttaskstart->min);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskStart.sec = %d", properties->appointmenttaskstart->sec);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return washing_machine_properties_update(count, enumerate, properties);
}

/**
 * @brief self cleaning action start callback of washing machine service
 * @param ctx          [action context]
 * @param action       [self cleaning action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t washing_machine_self_cleaning_start_cb(struct hey_action_ctx *ctx, struct washing_machine_self_cleaning_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "washing_machine self_cleaning action in");
    return -1;
}

/**
 * @brief self cleaning action stop callback of washing machine service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void washing_machine_self_cleaning_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: washing_machine_self_cleaning_stop(ctx);
     */
}

/**
 * @brief clean reminder notify result callback of washing machine service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void washing_machine_clean_reminder_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief add detergent reminder notify result callback of washing machine service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void washing_machine_add_detergent_reminder_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief add softener reminder notify result callback of washing machine service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void washing_machine_add_softener_reminder_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief inflow error notify result callback of washing machine service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void washing_machine_inflow_error_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
