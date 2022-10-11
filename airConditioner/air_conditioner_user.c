#include "schema/airConditioner/air_conditioner_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of air conditioner service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t air_conditioner_properties_write_cb(size_t count, uint32_t *enumerate, struct air_conditioner_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case AIR_CONDITIONER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case AIR_CONDITIONER_PROPERTY_ACMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ac Mode = %d", properties->acmode);
            break;
        case AIR_CONDITIONER_PROPERTY_ECO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eco = %s", properties->eco ? "true" : "false");
            break;
        case AIR_CONDITIONER_PROPERTY_SLEEP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sleep = %d", properties->sleep);
            break;
        case AIR_CONDITIONER_PROPERTY_RAPIDMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "rapid Mode = %s", properties->rapidmode ? "true" : "false");
            break;
        case AIR_CONDITIONER_PROPERTY_ELECTRICHEATING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "electric Heating = %s", properties->electricheating ? "true" : "false");
            break;
        case AIR_CONDITIONER_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case AIR_CONDITIONER_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case AIR_CONDITIONER_PROPERTY_OUTDOORTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "outdoor Temperature = %d", properties->outdoortemperature);
            break;
        case AIR_CONDITIONER_PROPERTY_DISPLAYINGTEMPUNIT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "displaying Temp Unit = %d", properties->displayingtempunit);
            break;
        case AIR_CONDITIONER_PROPERTY_SPEECHCONTROLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "speech Control Enabled = %s", properties->speechcontrolenabled ? "true" : "false");
            break;
        case AIR_CONDITIONER_PROPERTY_SCREENDISPLAYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "screen Display Enabled = %s", properties->screendisplayenabled ? "true" : "false");
            break;
        case AIR_CONDITIONER_PROPERTY_PREVENTSUPERCOOL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "prevent Super Cool = %s", properties->preventsupercool ? "true" : "false");
            break;
        case AIR_CONDITIONER_PROPERTY_APPOINTMENTPOWERON:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power On = %d", properties->appointmentpoweron);
            break;
        case AIR_CONDITIONER_PROPERTY_AIRDRY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "air Dry = %s", properties->airdry ? "true" : "false");
            break;
        case AIR_CONDITIONER_PROPERTY_APPOINTMENTPOWEROFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power Off = %d", properties->appointmentpoweroff);
            break;
        case AIR_CONDITIONER_PROPERTY_MUTE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mute = %s", properties->mute ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return air_conditioner_properties_update(count, enumerate, properties);
}
