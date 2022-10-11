#include "schema/airPurifier/air_purifier_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of air purifier service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t air_purifier_properties_write_cb(size_t count, uint32_t *enumerate, struct air_purifier_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case AIR_PURIFIER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case AIR_PURIFIER_PROPERTY_APMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ap Mode = %d", properties->apmode);
            break;
        case AIR_PURIFIER_PROPERTY_STERILIZATIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Enabled = %s", properties->sterilizationenabled ? "true" : "false");
            break;
        case AIR_PURIFIER_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        case AIR_PURIFIER_PROPERTY_HOSTING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hosting = %s", properties->hosting ? "true" : "false");
            break;
        case AIR_PURIFIER_PROPERTY_PM2OUT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pm2 Out = %d", properties->pm2out);
            break;
        case AIR_PURIFIER_PROPERTY_PM2UPPER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pm2 Upper = %d", properties->pm2upper);
            break;
        case AIR_PURIFIER_PROPERTY_PM2LOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pm2 Lower = %d", properties->pm2lower);
            break;
        case AIR_PURIFIER_PROPERTY_APPOINTMENTPOWERON:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power On = %d", properties->appointmentpoweron);
            break;
        case AIR_PURIFIER_PROPERTY_ANIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "anion Enabled = %s", properties->anionenabled ? "true" : "false");
            break;
        case AIR_PURIFIER_PROPERTY_BRIGHTNESS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "brightness = %d", properties->brightness);
            break;
        case AIR_PURIFIER_PROPERTY_MUTE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mute = %s", properties->mute ? "true" : "false");
            break;
        case AIR_PURIFIER_PROPERTY_DETECTPM2P5:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "detect Pm2p5 = %s", properties->detectpm2p5 ? "true" : "false");
            break;
        case AIR_PURIFIER_PROPERTY_DETECTHCHO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "detect Hcho = %s", properties->detecthcho ? "true" : "false");
            break;
        case AIR_PURIFIER_PROPERTY_APPOINTMENTPOWEROFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power Off = %d", properties->appointmentpoweroff);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return air_purifier_properties_update(count, enumerate, properties);
}
