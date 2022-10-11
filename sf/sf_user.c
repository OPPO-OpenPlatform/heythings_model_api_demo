#include "schema/sf/sf_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of sf service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t sf_properties_write_cb(size_t count, uint32_t *enumerate, struct sf_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case SF_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case SF_PROPERTY_MANNULAUTOSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mannul Auto Sta = %s", properties->mannulautosta ? "true" : "false");
            break;
        case SF_PROPERTY_FAULTSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fault Sta = %s", properties->faultsta ? "true" : "false");
            break;
        case SF_PROPERTY_PRESSUREDIFFSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pressure Diff Sta = %s", properties->pressurediffsta ? "true" : "false");
            break;
        case SF_PROPERTY_VLVOPENING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vlv Opening = %d", properties->vlvopening);
            break;
        case SF_PROPERTY_VLVFEEDBACK:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vlv Feedback = %d", properties->vlvfeedback);
            break;
        case SF_PROPERTY_FREQSETTING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freq Setting = %d", properties->freqsetting);
            break;
        case SF_PROPERTY_FREQFEEDBACK:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freq Feedback = %d", properties->freqfeedback);
            break;
        case SF_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case SF_PROPERTY_CURRENTTEMPERATURE2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature2 = %d", properties->currenttemperature2);
            break;
        case SF_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case SF_PROPERTY_CURRENTHUMIDITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Humidity = %d", properties->currenthumidity);
            break;
        case SF_PROPERTY_TARGETHUMIDITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Humidity = %d", properties->targethumidity);
            break;
        case SF_PROPERTY_CURRENTPRES1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Pres1 = %d", properties->currentpres1);
            break;
        case SF_PROPERTY_CURRENTPRES2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Pres2 = %d", properties->currentpres2);
            break;
        case SF_PROPERTY_TARGETPRES1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Pres1 = %d", properties->targetpres1);
            break;
        case SF_PROPERTY_TARGETPRES2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Pres2 = %d", properties->targetpres2);
            break;
        case SF_PROPERTY_MINIMUMFREQ:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "minimum Freq = %d", properties->minimumfreq);
            break;
        case SF_PROPERTY_CO2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "co2 = %d", properties->co2);
            break;
        case SF_PROPERTY_TARGETCO2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Co2 = %d", properties->targetco2);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return sf_properties_update(count, enumerate, properties);
}
