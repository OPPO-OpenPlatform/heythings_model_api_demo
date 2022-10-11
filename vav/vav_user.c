#include "schema/vav/vav_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of vav service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t vav_properties_write_cb(size_t count, uint32_t *enumerate, struct vav_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case VAV_PROPERTY_PRESSUREDIFFSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pressure Diff Sta = %s", properties->pressurediffsta ? "true" : "false");
            break;
        case VAV_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case VAV_PROPERTY_CO2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "co2 = %d", properties->co2);
            break;
        case VAV_PROPERTY_AIRFLOWRATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "airflow Rate = %d", properties->airflowrate);
            break;
        case VAV_PROPERTY_MAXAIRFLOWRATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "max Airflow Rate = %d", properties->maxairflowrate);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return vav_properties_update(count, enumerate, properties);
}
