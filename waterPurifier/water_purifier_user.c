#include "schema/waterPurifier/water_purifier_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of water purifier service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t water_purifier_properties_write_cb(size_t count, uint32_t *enumerate, struct water_purifier_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case WATER_PURIFIER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case WATER_PURIFIER_PROPERTY_WASTEWATER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "waste Water = %s", properties->wastewater ? "true" : "false");
            break;
        case WATER_PURIFIER_PROPERTY_WATERADDITIVETYPE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Additive Type = %d", properties->wateradditivetype);
            break;
        case WATER_PURIFIER_PROPERTY_OPERATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Mode = %d", properties->operationmode);
            break;
        case WATER_PURIFIER_PROPERTY_MACHINESTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "machine Status = %d", properties->machinestatus);
            break;
        case WATER_PURIFIER_PROPERTY_REMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remain Time = %d", properties->remaintime);
            break;
        case WATER_PURIFIER_PROPERTY_PROCESSINGPERCENTAGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "processing Percentage = %d", properties->processingpercentage);
            break;
        case WATER_PURIFIER_PROPERTY_WASHENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wash Enabled = %s", properties->washenabled ? "true" : "false");
            break;
        case WATER_PURIFIER_PROPERTY_BUBBLEMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bubble Mode = %d", properties->bubblemode);
            break;
        case WATER_PURIFIER_PROPERTY_INFLOWTDS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "in Flow T D S = %d", properties->inflowtds);
            break;
        case WATER_PURIFIER_PROPERTY_OUTFLOWTDS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "out Flow T D S = %d", properties->outflowtds);
            break;
        case WATER_PURIFIER_PROPERTY_SCREENDISPLAYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "screen Display Enabled = %s", properties->screendisplayenabled ? "true" : "false");
            break;
        case WATER_PURIFIER_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        case WATER_PURIFIER_PROPERTY_DRAINAGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "drainage = %s", properties->drainage ? "true" : "false");
            break;
        case WATER_PURIFIER_PROPERTY_VACATIONMODEENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vacation Mode Enabled = %s", properties->vacationmodeenabled ? "true" : "false");
            break;
        case WATER_PURIFIER_PROPERTY_WATERQUANTITY:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case WATER_PURIFIER_PROPERTY_STERILIZATIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Enabled = %s", properties->sterilizationenabled ? "true" : "false");
            break;
        case WATER_PURIFIER_PROPERTY_STERILIZATIONLEFTDAYS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Left Days = %d", properties->sterilizationleftdays);
            break;
        case WATER_PURIFIER_PROPERTY_STERILIZATIONPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Period = %d", properties->sterilizationperiod);
            break;
        case WATER_PURIFIER_PROPERTY_STERILIZATIONPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Percent = %d", properties->sterilizationpercent);
            break;
        case WATER_PURIFIER_PROPERTY_WATERFLOWSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Flow Status = %s", properties->waterflowstatus ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return water_purifier_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of water purifier service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t water_purifier_waterquantity_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of water purifier service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t water_purifier_waterquantity_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of water purifier service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t water_purifier_waterquantity_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}
