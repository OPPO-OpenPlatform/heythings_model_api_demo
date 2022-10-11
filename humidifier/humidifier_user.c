#include "schema/humidifier/humidifier_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of humidifier service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t humidifier_properties_write_cb(size_t count, uint32_t *enumerate, struct humidifier_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case HUMIDIFIER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case HUMIDIFIER_PROPERTY_HUMIDIFIERMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "humidifier Mode = %d", properties->humidifiermode);
            break;
        case HUMIDIFIER_PROPERTY_CURRENTHUMIDITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Humidity = %d", properties->currenthumidity);
            break;
        case HUMIDIFIER_PROPERTY_TARGETHUMIDITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Humidity = %d", properties->targethumidity);
            break;
        case HUMIDIFIER_PROPERTY_FOGVOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fog Volume = %d", properties->fogvolume);
            break;
        case HUMIDIFIER_PROPERTY_APPOINTMENTPOWERON:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power On = %d", properties->appointmentpoweron);
            break;
        case HUMIDIFIER_PROPERTY_STERILIZATIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Enabled = %s", properties->sterilizationenabled ? "true" : "false");
            break;
        case HUMIDIFIER_PROPERTY_STERILIZATIONPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Percent = %d", properties->sterilizationpercent);
            break;
        case HUMIDIFIER_PROPERTY_LIGHTMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "light Mode = %d", properties->lightmode);
            break;
        case HUMIDIFIER_PROPERTY_APPOINTMENTPOWEROFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power Off = %d", properties->appointmentpoweroff);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return humidifier_properties_update(count, enumerate, properties);
}
