#include "schema/refrigerator/refrigerator_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of refrigerator service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t refrigerator_properties_write_cb(size_t count, uint32_t *enumerate, struct refrigerator_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case REFRIGERATOR_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_DEVLABLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dev Lable = %s", properties->devlable);
            break;
        case REFRIGERATOR_PROPERTY_REFRIGERATORLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "refrigerator Level = %d", properties->refrigeratorlevel);
            break;
        case REFRIGERATOR_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case REFRIGERATOR_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case REFRIGERATOR_PROPERTY_QUICKREFRIGERATINGMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "quick Refrigerating Mode = %s", properties->quickrefrigeratingmode ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_HIGHHUMIDITYMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "high Humidity Mode = %s", properties->highhumiditymode ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_LIGHTWAVEPRESERVATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lightwave Preservation Mode = %s", properties->lightwavepreservationmode ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_RADARMODEENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "radar Mode Enabled = %s", properties->radarmodeenabled ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_STERILIZATIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Enabled = %s", properties->sterilizationenabled ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_SUPERFRESHNESSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "super Freshness Enabled = %s", properties->superfreshnessenabled ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_ODORLESSNESSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "odorlessness Enabled = %s", properties->odorlessnessenabled ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_CLEANFRUITENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "clean Fruit Enabled = %s", properties->cleanfruitenabled ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_COLMOCLEANFRUIT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "colmo Clean Fruit = %s", properties->colmocleanfruit ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_EFFICIENTSTERILIZATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "efficient Sterilization = %s", properties->efficientsterilization ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_HUMIDITYCONTROLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "humidity Control Enabled = %s", properties->humiditycontrolenabled ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_SFCOMPARTMENTPOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sf Compartment Power = %s", properties->sfcompartmentpower ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_SFCOMPARTMENTTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sf Compartment Temp = %d", properties->sfcompartmenttemp);
            break;
        case REFRIGERATOR_PROPERTY_SFCOMPARTMENTCURRENTTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sf Compartment Current Temp = %d", properties->sfcompartmentcurrenttemp);
            break;
        case REFRIGERATOR_PROPERTY_TCOMPARTMENTPOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "t Compartment Power = %s", properties->tcompartmentpower ? "true" : "false");
            break;
        case REFRIGERATOR_PROPERTY_WSCOMPARTMENTPOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ws Compartment Power = %s", properties->wscompartmentpower ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return refrigerator_properties_update(count, enumerate, properties);
}
