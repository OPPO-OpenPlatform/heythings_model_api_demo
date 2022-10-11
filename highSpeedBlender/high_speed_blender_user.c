#include "schema/highSpeedBlender/high_speed_blender_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of high speed blender service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t high_speed_blender_properties_write_cb(size_t count, uint32_t *enumerate, struct high_speed_blender_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case HIGH_SPEED_BLENDER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_HIGHSPEEDBLENDERMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "high Speed Blender Mode = %d", properties->highspeedblendermode);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_PROCESSINGSPEED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "processing Speed = %d", properties->processingspeed);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_VACUUMSTORAGEENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vacuum Storage Enabled = %s", properties->vacuumstorageenabled ? "true" : "false");
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_VACUUMGRINDENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vacuum Grind Enabled = %s", properties->vacuumgrindenabled ? "true" : "false");
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_VACUUMFRUITENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vacuum Fruit Enabled = %s", properties->vacuumfruitenabled ? "true" : "false");
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_MACHINESTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "machine Status = %d", properties->machinestatus);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_BLENDEROPERATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "blender Operation Mode = %d", properties->blenderoperationmode);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_HIGHSPEEDBLENDERJOBSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "high Speed Blender Job Status = %d", properties->highspeedblenderjobstatus);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_HEATPRESERVATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heat Preservation Mode = %s", properties->heatpreservationmode ? "true" : "false");
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_APPOINTMENTTASKCOMPLETED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.status = %d", properties->appointmenttaskcompleted->status);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.name = %d", properties->appointmenttaskcompleted->name);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.hour = %d", properties->appointmenttaskcompleted->hour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.min = %d", properties->appointmenttaskcompleted->min);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.sec = %d", properties->appointmenttaskcompleted->sec);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_OPERATIONTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Time = %d", properties->operationtime);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_HEATPRESERVATIONTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heat Preservation Time = %d", properties->heatpreservationtime);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_REMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remain Time = %d", properties->remaintime);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_HIGHSPEEDBLENDERSTEPSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "high Speed Blender Step Status = %d", properties->highspeedblenderstepstatus);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_CONTACTSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "contact Status = %s", properties->contactstatus ? "true" : "false");
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_PRESERVINGHEATDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "preserving Heat Duration = %d", properties->preservingheatduration);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_APPOINTMENTREMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Remain Time = %d", properties->appointmentremaintime);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_RUNNINGDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Duration = %d", properties->runningduration);
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_TIMEDISPLAY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "time Display = %s", properties->timedisplay ? "true" : "false");
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_HORSERACELAMPDISPLAY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "horse Race Lamp Display = %s", properties->horseracelampdisplay ? "true" : "false");
            break;
        case HIGH_SPEED_BLENDER_PROPERTY_CUPTYPE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cup Type = %d", properties->cuptype);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return high_speed_blender_properties_update(count, enumerate, properties);
}

/**
 * @brief self cleaning action start callback of high speed blender service
 * @param ctx          [action context]
 * @param action       [self cleaning action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t high_speed_blender_self_cleaning_start_cb(struct hey_action_ctx *ctx, struct high_speed_blender_self_cleaning_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "high_speed_blender self_cleaning action in");
    return -1;
}

/**
 * @brief self cleaning action stop callback of high speed blender service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void high_speed_blender_self_cleaning_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: high_speed_blender_self_cleaning_stop(ctx);
     */
}
