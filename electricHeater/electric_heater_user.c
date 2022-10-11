#include "schema/electricHeater/electric_heater_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of electric heater service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t electric_heater_properties_write_cb(size_t count, uint32_t *enumerate, struct electric_heater_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case ELECTRIC_HEATER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case ELECTRIC_HEATER_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case ELECTRIC_HEATER_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case ELECTRIC_HEATER_PROPERTY_ELECTRICHEATERMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "electric Heater Mode = %d", properties->electricheatermode);
            break;
        case ELECTRIC_HEATER_PROPERTY_ELECTRICHEATERLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "electric Heater Level = %d", properties->electricheaterlevel);
            break;
        case ELECTRIC_HEATER_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        case ELECTRIC_HEATER_PROPERTY_SCREENDISPLAYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "screen Display Enabled = %s", properties->screendisplayenabled ? "true" : "false");
            break;
        case ELECTRIC_HEATER_PROPERTY_RUNNINGDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Duration = %d", properties->runningduration);
            break;
        case ELECTRIC_HEATER_PROPERTY_POWERCONSUMPTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power Consumption = %d", properties->powerconsumption);
            break;
        case ELECTRIC_HEATER_PROPERTY_APPOINTMENTPOWERON:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power On = %d", properties->appointmentpoweron);
            break;
        case ELECTRIC_HEATER_PROPERTY_NOCONTROLTEMPENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "no Control Temp Enabled = %s", properties->nocontroltempenabled ? "true" : "false");
            break;
        case ELECTRIC_HEATER_PROPERTY_APPOINTMENTPOWEROFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power Off = %d", properties->appointmentpoweroff);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return electric_heater_properties_update(count, enumerate, properties);
}
