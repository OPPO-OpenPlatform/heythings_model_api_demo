#include "schema/steamOven/steam_oven_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of steam oven service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t steam_oven_properties_write_cb(size_t count, uint32_t *enumerate, struct steam_oven_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case STEAM_OVEN_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case STEAM_OVEN_PROPERTY_OPERATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Mode = %d", properties->operationmode);
            break;
        case STEAM_OVEN_PROPERTY_OPERATIONTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Time = %d", properties->operationtime);
            break;
        case STEAM_OVEN_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case STEAM_OVEN_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case STEAM_OVEN_PROPERTY_OVENMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oven Mode = %d", properties->ovenmode);
            break;
        case STEAM_OVEN_PROPERTY_PREHEATENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "preheat Enabled = %s", properties->preheatenabled ? "true" : "false");
            break;
        case STEAM_OVEN_PROPERTY_PREHEATSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "preheat Status = %d", properties->preheatstatus);
            break;
        case STEAM_OVEN_PROPERTY_OVENWORKMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oven Work Mode = %d", properties->ovenworkmode);
            break;
        case STEAM_OVEN_PROPERTY_APPOINTMENTTASKCOMPLETED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.status = %d", properties->appointmenttaskcompleted->status);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.name = %d", properties->appointmenttaskcompleted->name);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.hour = %d", properties->appointmenttaskcompleted->hour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.min = %d", properties->appointmenttaskcompleted->min);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.sec = %d", properties->appointmenttaskcompleted->sec);
            break;
        case STEAM_OVEN_PROPERTY_JOBSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "job Status = %d", properties->jobstatus);
            break;
        case STEAM_OVEN_PROPERTY_REMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remain Time = %d", properties->remaintime);
            break;
        case STEAM_OVEN_PROPERTY_MACHINESTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "machine Status = %d", properties->machinestatus);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return steam_oven_properties_update(count, enumerate, properties);
}

/**
 * @brief open alarm notify result callback of steam oven service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void steam_oven_open_alarm_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
