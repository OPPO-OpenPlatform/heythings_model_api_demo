#include "schema/iceStorageTank/ice_storage_tank_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of ice storage tank service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t ice_storage_tank_properties_write_cb(size_t count, uint32_t *enumerate, struct ice_storage_tank_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case ICE_STORAGE_TANK_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case ICE_STORAGE_TANK_PROPERTY_ICESTORAGERATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ice Storage Rate = %d", properties->icestoragerate);
            break;
        case ICE_STORAGE_TANK_PROPERTY_ICETHICKNESS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ice Thickness = %d", properties->icethickness);
            break;
        case ICE_STORAGE_TANK_PROPERTY_ICESTORAGECAPACITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ice Storage Capacity = %d", properties->icestoragecapacity);
            break;
        case ICE_STORAGE_TANK_PROPERTY_SUPPLYWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "supply Water Temp = %d", properties->supplywatertemp);
            break;
        case ICE_STORAGE_TANK_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case ICE_STORAGE_TANK_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case ICE_STORAGE_TANK_PROPERTY_CURRENTPRES1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Pres1 = %d", properties->currentpres1);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return ice_storage_tank_properties_update(count, enumerate, properties);
}
