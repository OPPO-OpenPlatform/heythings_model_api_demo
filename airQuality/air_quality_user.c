#include "schema/airQuality/air_quality_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of air quality service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t air_quality_properties_write_cb(size_t count, uint32_t *enumerate, struct air_quality_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case AIR_QUALITY_PROPERTY_PM1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pm1 = %d", properties->pm1);
            break;
        case AIR_QUALITY_PROPERTY_PM2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pm2 = %d", properties->pm2);
            break;
        case AIR_QUALITY_PROPERTY_PM10:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pm10 = %d", properties->pm10);
            break;
        case AIR_QUALITY_PROPERTY_CO2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "co2 = %d", properties->co2);
            break;
        case AIR_QUALITY_PROPERTY_CO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "co = %d", properties->co);
            break;
        case AIR_QUALITY_PROPERTY_CH20:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ch20 = %d", properties->ch20);
            break;
        case AIR_QUALITY_PROPERTY_VOC:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "voc = %d", properties->voc);
            break;
        case AIR_QUALITY_PROPERTY_CURRENTHUMIDITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Humidity = %d", properties->currenthumidity);
            break;
        case AIR_QUALITY_PROPERTY_ASHTVOC:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ash Tvoc = %d", properties->ashtvoc);
            break;
        case AIR_QUALITY_PROPERTY_SMELLTVOC:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "smell Tvoc = %d", properties->smelltvoc);
            break;
        case AIR_QUALITY_PROPERTY_MONITORINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "monitoring Enabled = %s", properties->monitoringenabled ? "true" : "false");
            break;
        case AIR_QUALITY_PROPERTY_AIRQUALITYLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "air Quality Level = %d", properties->airqualitylevel);
            break;
        default:
            break;
        }
    }
    // ??????????????????????????? update ??????????????????????????????????????????, ????????????????????????
    // ????????????????????????????????????????????????????????????????????????????????????update??????????????????????????????????????????
    return air_quality_properties_update(count, enumerate, properties);
}
