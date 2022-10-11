#include "schema/waterDispenser/water_dispenser_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of water dispenser service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t water_dispenser_properties_write_cb(size_t count, uint32_t *enumerate, struct water_dispenser_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case WATER_DISPENSER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case WATER_DISPENSER_PROPERTY_WATERTYPE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Type = %d", properties->watertype);
            break;
        case WATER_DISPENSER_PROPERTY_SCREENDISPLAYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "screen Display Enabled = %s", properties->screendisplayenabled ? "true" : "false");
            break;
        case WATER_DISPENSER_PROPERTY_HEATENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heat Enabled = %s", properties->heatenabled ? "true" : "false");
            break;
        case WATER_DISPENSER_PROPERTY_HEATSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heat Status = %d", properties->heatstatus);
            break;
        case WATER_DISPENSER_PROPERTY_COOLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cool Enabled = %s", properties->coolenabled ? "true" : "false");
            break;
        case WATER_DISPENSER_PROPERTY_COOLSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cool Status = %d", properties->coolstatus);
            break;
        case WATER_DISPENSER_PROPERTY_HEATPRESERVATIONTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heat Preservation Time = %d", properties->heatpreservationtime);
            break;
        case WATER_DISPENSER_PROPERTY_USERDEFINETEMP:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case WATER_DISPENSER_PROPERTY_WATERQUANTITY:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case WATER_DISPENSER_PROPERTY_HEATTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heat Time = %d", properties->heattime);
            break;
        case WATER_DISPENSER_PROPERTY_MACHINESTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "machine Status = %d", properties->machinestatus);
            break;
        case WATER_DISPENSER_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        case WATER_DISPENSER_PROPERTY_STERILIZATIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Enabled = %s", properties->sterilizationenabled ? "true" : "false");
            break;
        case WATER_DISPENSER_PROPERTY_STERILIZATIONLEFTDAYS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Left Days = %d", properties->sterilizationleftdays);
            break;
        case WATER_DISPENSER_PROPERTY_STERILIZATIONPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Period = %d", properties->sterilizationperiod);
            break;
        case WATER_DISPENSER_PROPERTY_STERILIZATIONPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Percent = %d", properties->sterilizationpercent);
            break;
        case WATER_DISPENSER_PROPERTY_WATERFLOWSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Flow Status = %s", properties->waterflowstatus ? "true" : "false");
            break;
        case WATER_DISPENSER_PROPERTY_OPERATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Mode = %d", properties->operationmode);
            break;
        case WATER_DISPENSER_PROPERTY_AUTOSEASON:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Season = %s", properties->autoseason ? "true" : "false");
            break;
        case WATER_DISPENSER_PROPERTY_TEATEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "tea Temp = %d", properties->teatemp);
            break;
        case WATER_DISPENSER_PROPERTY_COFFEETEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "coffee Temp = %d", properties->coffeetemp);
            break;
        case WATER_DISPENSER_PROPERTY_HONEYTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "honey Temp = %d", properties->honeytemp);
            break;
        case WATER_DISPENSER_PROPERTY_MILKTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "milk Temp = %d", properties->milktemp);
            break;
        case WATER_DISPENSER_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return water_dispenser_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of water dispenser service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t water_dispenser_userdefinetemp_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of water dispenser service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t water_dispenser_userdefinetemp_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of water dispenser service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t water_dispenser_userdefinetemp_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of water dispenser service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t water_dispenser_waterquantity_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of water dispenser service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t water_dispenser_waterquantity_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of water dispenser service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t water_dispenser_waterquantity_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}
