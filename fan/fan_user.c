#include "schema/fan/fan_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of fan service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t fan_properties_write_cb(size_t count, uint32_t *enumerate, struct fan_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case FAN_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case FAN_PROPERTY_FANMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fan Mode = %d", properties->fanmode);
            break;
        case FAN_PROPERTY_WINDSPEED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wind Speed = %d", properties->windspeed);
            break;
        case FAN_PROPERTY_HORIZONTALDIRECTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "horizontal Direction = %d", properties->horizontaldirection);
            break;
        case FAN_PROPERTY_VERTICALDIRECTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vertical Direction = %d", properties->verticaldirection);
            break;
        case FAN_PROPERTY_SWINGDIRECTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "swing Direction = %d", properties->swingdirection);
            break;
        case FAN_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_PREVENTSTRAIGHTWIND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "prevent Straight Wind = %s", properties->preventstraightwind ? "true" : "false");
            break;
        case FAN_PROPERTY_CHILDPREVENTCOLDWIND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Prevent Cold Wind = %s", properties->childpreventcoldwind ? "true" : "false");
            break;
        case FAN_PROPERTY_UPSWINGWIND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "up Swing Wind = %s", properties->upswingwind ? "true" : "false");
            break;
        case FAN_PROPERTY_DOWNSWINGWIND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "down Swing Wind = %s", properties->downswingwind ? "true" : "false");
            break;
        case FAN_PROPERTY_UPNOSENSEWIND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "up No Sense Wind = %s", properties->upnosensewind ? "true" : "false");
            break;
        case FAN_PROPERTY_DOWNNOSENSEWIND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "down No Sense Wind = %s", properties->downnosensewind ? "true" : "false");
            break;
        case FAN_PROPERTY_NOSENSEWIND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "no Sense Wind = %s", properties->nosensewind ? "true" : "false");
            break;
        case FAN_PROPERTY_TEMPWINDENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "temp Wind Enabled = %s", properties->tempwindenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_SCREENDISPLAYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "screen Display Enabled = %s", properties->screendisplayenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_APPOINTMENTPOWERON:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power On = %d", properties->appointmentpoweron);
            break;
        case FAN_PROPERTY_MUTE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mute = %s", properties->mute ? "true" : "false");
            break;
        case FAN_PROPERTY_AUTOWINDENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Wind Enabled = %s", properties->autowindenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_POWERSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power Status = %s", properties->powerstatus ? "true" : "false");
            break;
        case FAN_PROPERTY_SWINGANGLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "swing Angle = %d", properties->swingangle);
            break;
        case FAN_PROPERTY_SWINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "swing Enabled = %s", properties->swingenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_LRDIYSWINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lr Diy Swing Enabled = %s", properties->lrdiyswingenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_LRDIYUPPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lr Diy Up Percent = %d", properties->lrdiyuppercent);
            break;
        case FAN_PROPERTY_LRDIYDOWNPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lr Diy Down Percent = %d", properties->lrdiydownpercent);
            break;
        case FAN_PROPERTY_UDDIYSWINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ud Diy Swing Enabled = %s", properties->uddiyswingenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_UDDIYUPPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ud Diy Up Percent = %d", properties->uddiyuppercent);
            break;
        case FAN_PROPERTY_UDDIYDOWNPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ud Diy Down Percent = %d", properties->uddiydownpercent);
            break;
        case FAN_PROPERTY_AIRDRY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "air Dry = %s", properties->airdry ? "true" : "false");
            break;
        case FAN_PROPERTY_ANIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "anion Enabled = %s", properties->anionenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_WATERIONSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "waterions Enabled = %s", properties->waterionsenabled ? "true" : "false");
            break;
        case FAN_PROPERTY_APPOINTMENTPOWEROFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power Off = %d", properties->appointmentpoweroff);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return fan_properties_update(count, enumerate, properties);
}
