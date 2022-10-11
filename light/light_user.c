#include "schema/light/light_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of light service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t light_properties_write_cb(size_t count, uint32_t *enumerate, struct light_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case LIGHT_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case LIGHT_PROPERTY_BRIGHTNESS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "brightness = %d", properties->brightness);
            break;
        case LIGHT_PROPERTY_CCT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cct = %d", properties->cct);
            break;
        case LIGHT_PROPERTY_LIGHTMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "light Mode = %d", properties->lightmode);
            break;
        case LIGHT_PROPERTY_AUTOCOLORTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Color Temperature = %s", properties->autocolortemperature ? "true" : "false");
            break;
        case LIGHT_PROPERTY_COLORRGB:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "colorRGB.r = %d", properties->colorrgb->r);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "colorRGB.g = %d", properties->colorrgb->g);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "colorRGB.b = %d", properties->colorrgb->b);
            break;
        case LIGHT_PROPERTY_COLORSATURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "color Saturation = %d", properties->colorsaturation);
            break;
        case LIGHT_PROPERTY_AUTOBRIGHTNESS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Brightness = %s", properties->autobrightness ? "true" : "false");
            break;
        case LIGHT_PROPERTY_FREECONTROLNIGHTLIGHT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freeControlNightLight.enable = %d", properties->freecontrolnightlight->enable);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freeControlNightLight.starthour = %d", properties->freecontrolnightlight->starthour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freeControlNightLight.startmin = %d", properties->freecontrolnightlight->startmin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freeControlNightLight.endhour = %d", properties->freecontrolnightlight->endhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freeControlNightLight.endmin = %d", properties->freecontrolnightlight->endmin);
            break;
        case LIGHT_PROPERTY_SCENECTTBRIGHTNESS:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case LIGHT_PROPERTY_COLORCTTMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "color Ctt Mode = %s", properties->colorcttmode ? "true" : "false");
            break;
        case LIGHT_PROPERTY_STUDYTIMESETTING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "studyTimeSetting.repeatnum = %d", properties->studytimesetting->repeatnum);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "studyTimeSetting.studytime = %d", properties->studytimesetting->studytime);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "studyTimeSetting.breaktime = %d", properties->studytimesetting->breaktime);
            break;
        case LIGHT_PROPERTY_APPOINTMENTPOWERON:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power On = %d", properties->appointmentpoweron);
            break;
        case LIGHT_PROPERTY_APPOINTMENTPOWEROFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appointment Power Off = %d", properties->appointmentpoweroff);
            break;
        case LIGHT_PROPERTY_LIGHTTURNOFFDELAYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "light Turn Off Delay Enabled = %s", properties->lightturnoffdelayenabled ? "true" : "false");
            break;
        case LIGHT_PROPERTY_LIGHTSTUDYMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lightStudyMode.mode = %d", properties->lightstudymode->mode);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lightStudyMode.duration = %d", properties->lightstudymode->duration);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lightStudyMode.settingtime = %d", properties->lightstudymode->settingtime);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return light_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of light service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t light_scenecttbrightness_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of light service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t light_scenecttbrightness_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of light service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t light_scenecttbrightness_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief light language action start callback of light service
 * @param ctx          [action context]
 * @param action       [light language action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t light_light_language_start_cb(struct hey_action_ctx *ctx, struct light_light_language_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "light light_language action in");
    return -1;
}

/**
 * @brief light language action stop callback of light service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void light_light_language_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: light_light_language_stop(ctx);
     */
}
