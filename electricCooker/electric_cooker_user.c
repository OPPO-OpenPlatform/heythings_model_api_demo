#include "schema/electricCooker/electric_cooker_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of electric cooker service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t electric_cooker_properties_write_cb(size_t count, uint32_t *enumerate, struct electric_cooker_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case ELECTRIC_COOKER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case ELECTRIC_COOKER_PROPERTY_ELECTRICCOOKERMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "electric Cooker Mode = %d", properties->electriccookermode);
            break;
        case ELECTRIC_COOKER_PROPERTY_REMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remain Time = %d", properties->remaintime);
            break;
        case ELECTRIC_COOKER_PROPERTY_PRESERVINGHEATDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "preserving Heat Duration = %d", properties->preservingheatduration);
            break;
        case ELECTRIC_COOKER_PROPERTY_HEATPRESERVATIONTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heat Preservation Time = %d", properties->heatpreservationtime);
            break;
        case ELECTRIC_COOKER_PROPERTY_TASTE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "taste = %d", properties->taste);
            break;
        case ELECTRIC_COOKER_PROPERTY_RICE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "rice = %d", properties->rice);
            break;
        case ELECTRIC_COOKER_PROPERTY_EXTRATIMEFORCOOKING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "extra Time For Cooking = %d", properties->extratimeforcooking);
            break;
        case ELECTRIC_COOKER_PROPERTY_COOKEROPERATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cooker Operation Mode = %d", properties->cookeroperationmode);
            break;
        case ELECTRIC_COOKER_PROPERTY_APPOINTMENTTASKCOMPLETED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.status = %d", properties->appointmenttaskcompleted->status);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.name = %d", properties->appointmenttaskcompleted->name);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.hour = %d", properties->appointmenttaskcompleted->hour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.min = %d", properties->appointmenttaskcompleted->min);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointmentTaskCompleted.sec = %d", properties->appointmenttaskcompleted->sec);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return electric_cooker_properties_update(count, enumerate, properties);
}

/**
 * @brief open alarm notify result callback of electric cooker service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void electric_cooker_open_alarm_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief cooking end notify result callback of electric cooker service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void electric_cooker_cooking_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief dry braised notify result callback of electric cooker service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void electric_cooker_dry_braised_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
