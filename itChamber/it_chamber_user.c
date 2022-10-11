#include "schema/itChamber/it_chamber_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of it chamber service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t it_chamber_properties_write_cb(size_t count, uint32_t *enumerate, struct it_chamber_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case IT_CHAMBER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case IT_CHAMBER_PROPERTY_DEVLABLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dev Lable = %s", properties->devlable);
            break;
        case IT_CHAMBER_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case IT_CHAMBER_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case IT_CHAMBER_PROPERTY_ITCHAMBERLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "it Chamber Level = %d", properties->itchamberlevel);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return it_chamber_properties_update(count, enumerate, properties);
}
