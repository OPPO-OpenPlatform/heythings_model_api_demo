#include "schema/waterSensor/water_sensor_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of water sensor service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t water_sensor_properties_write_cb(size_t count, uint32_t *enumerate, struct water_sensor_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case WATER_SENSOR_PROPERTY_ALARMSTATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "alarm State = %s", properties->alarmstate ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return water_sensor_properties_update(count, enumerate, properties);
}

/**
 * @brief water detected notify result callback of water sensor service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void water_sensor_water_detected_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief no water notify result callback of water sensor service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void water_sensor_no_water_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
