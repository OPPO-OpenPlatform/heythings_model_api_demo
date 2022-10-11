#include "schema/waterHeater/water_heater_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of water heater service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t water_heater_properties_write_cb(size_t count, uint32_t *enumerate, struct water_heater_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case WATER_HEATER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_CURRENTTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Temperature = %d", properties->currenttemperature);
            break;
        case WATER_HEATER_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case WATER_HEATER_PROPERTY_REMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remain Time = %d", properties->remaintime);
            break;
        case WATER_HEATER_PROPERTY_HOTWATERLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hot Water Level = %d", properties->hotwaterlevel);
            break;
        case WATER_HEATER_PROPERTY_HEATERSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heater Status = %d", properties->heaterstatus);
            break;
        case WATER_HEATER_PROPERTY_HEATINGMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heating Mode = %d", properties->heatingmode);
            break;
        case WATER_HEATER_PROPERTY_WATERHEATERMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Heater Mode = %d", properties->waterheatermode);
            break;
        case WATER_HEATER_PROPERTY_WATERHEATERSCENE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Heater Scene = %d", properties->waterheaterscene);
            break;
        case WATER_HEATER_PROPERTY_STERILIZATIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Enabled = %s", properties->sterilizationenabled ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_ECO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eco = %s", properties->eco ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_SLEEP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sleep = %s", properties->sleep ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_VOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "volume = %d", properties->volume);
            break;
        case WATER_HEATER_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_SCREENDISPLAYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "screen Display Enabled = %s", properties->screendisplayenabled ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_MGUSEDPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mg Used Percent = %d", properties->mgusedpercent);
            break;
        case WATER_HEATER_PROPERTY_USERDEFINETEMP:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case WATER_HEATER_PROPERTY_HEATINGPOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heating Power = %d", properties->heatingpower);
            break;
        case WATER_HEATER_PROPERTY_TPLUSHOT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "t Plus Hot = %s", properties->tplushot ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_AUTOPOWEROFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Power Off = %s", properties->autopoweroff ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_ALWAYSTEMPDETECTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "always Temp Detection = %s", properties->alwaystempdetection ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_SCENEMODEENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "scene Mode Enabled = %s", properties->scenemodeenabled ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_WATERFLOWSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Flow Status = %s", properties->waterflowstatus ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_FREQUENCYHOT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "frequency Hot = %s", properties->frequencyhot ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_FREQUENCYHOTGEAR:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "frequency Hot Gear = %d", properties->frequencyhotgear);
            break;
        case WATER_HEATER_PROPERTY_STERILIZATIONPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Period = %d", properties->sterilizationperiod);
            break;
        case WATER_HEATER_PROPERTY_STERILIZATIONLEFTDAYS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Left Days = %d", properties->sterilizationleftdays);
            break;
        case WATER_HEATER_PROPERTY_WATERQUALITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Quality = %d", properties->waterquality);
            break;
        case WATER_HEATER_PROPERTY_BATHREMAININGTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bath Remaining Time = %d", properties->bathremainingtime);
            break;
        case WATER_HEATER_PROPERTY_MORNINGNIGHTBATH:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "morning Night Bath = %d", properties->morningnightbath);
            break;
        case WATER_HEATER_PROPERTY_BATHTUBWATERLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bathtub Water Level = %d", properties->bathtubwaterlevel);
            break;
        case WATER_HEATER_PROPERTY_BATHTUBUP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bathtub Up = %d", properties->bathtubup);
            break;
        case WATER_HEATER_PROPERTY_INFLOWTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "in Flow Temp = %d", properties->inflowtemp);
            break;
        case WATER_HEATER_PROPERTY_WATERVOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Volume = %d", properties->watervolume);
            break;
        case WATER_HEATER_PROPERTY_FIRESTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fire Status = %s", properties->firestatus ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_SMARTCHANGELITRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "smart Change Litres = %s", properties->smartchangelitres ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_GASLIFTPRECENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gas Lift Precent = %d", properties->gasliftprecent);
            break;
        case WATER_HEATER_PROPERTY_SMARTCHANGELITRESENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "smart Change Litres Enabled = %s", properties->smartchangelitresenabled ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_COLDWATERDOT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Waterdot = %s", properties->coldwaterdot ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_COLDWATER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Water = %s", properties->coldwater ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_COLDWATERMASTER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Water Master = %s", properties->coldwatermaster ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_COLDWATERPRESSURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Water Pressure = %s", properties->coldwaterpressure ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_COLDWATERAI:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Water A I = %s", properties->coldwaterai ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_COLDWATERHIGHTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Water High Temp = %s", properties->coldwaterhightemp ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_COLDWATERCONSERVATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Water Conservation = %s", properties->coldwaterconservation ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_COLDWATERDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Water Duration = %d", properties->coldwaterduration);
            break;
        case WATER_HEATER_PROPERTY_COLDHOLDDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "coldhold Duration = %d", properties->coldholdduration);
            break;
        case WATER_HEATER_PROPERTY_COLDCONSERVATIONDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cold Conservation Duration = %d", properties->coldconservationduration);
            break;
        case WATER_HEATER_PROPERTY_WATERCONSUMPTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Consumption Enabled = %s", properties->waterconsumptionenabled ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_BUBBLEMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bubble Mode = %d", properties->bubblemode);
            break;
        case WATER_HEATER_PROPERTY_STERILIZATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sterilization Mode = %d", properties->sterilizationmode);
            break;
        case WATER_HEATER_PROPERTY_DISPLAYINGTEMPUNIT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "displaying Temp Unit = %d", properties->displayingtempunit);
            break;
        case WATER_HEATER_PROPERTY_FIRECAPACITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fire Capacity = %d", properties->firecapacity);
            break;
        case WATER_HEATER_PROPERTY_LOWTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "low Temp = %d", properties->lowtemp);
            break;
        case WATER_HEATER_PROPERTY_HIGHTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "high Temp = %d", properties->hightemp);
            break;
        case WATER_HEATER_PROPERTY_WATERCONSUMPTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "water Consumption = %d", properties->waterconsumption);
            break;
        case WATER_HEATER_PROPERTY_REALTIMEPOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "real Time Power = %d", properties->realtimepower);
            break;
        case WATER_HEATER_PROPERTY_INFLOWTDS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "in Flow T D S = %d", properties->inflowtds);
            break;
        case WATER_HEATER_PROPERTY_GESTUREENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gesture Enabled = %s", properties->gestureenabled ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_GESTURETYPE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gesture Type = %d", properties->gesturetype);
            break;
        case WATER_HEATER_PROPERTY_COLDWATERAPPOINTMENT:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case WATER_HEATER_PROPERTY_COLDWATERPOWERAPPOINTMENT:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case WATER_HEATER_PROPERTY_OUTFLOWPROTECT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "outflow Protect = %s", properties->outflowprotect ? "true" : "false");
            break;
        case WATER_HEATER_PROPERTY_OUTFLOWPROTECTSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "outflow Protect Status = %s", properties->outflowprotectstatus ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return water_heater_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of water heater service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t water_heater_userdefinetemp_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of water heater service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t water_heater_userdefinetemp_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of water heater service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t water_heater_userdefinetemp_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of water heater service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t water_heater_coldwaterappointment_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of water heater service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t water_heater_coldwaterappointment_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of water heater service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t water_heater_coldwaterappointment_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of water heater service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t water_heater_coldwaterpowerappointment_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of water heater service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t water_heater_coldwaterpowerappointment_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of water heater service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t water_heater_coldwaterpowerappointment_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief water quality reset action start callback of water heater service
 * @param ctx          [action context]
 * @param action       [water quality reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t water_heater_water_quality_reset_start_cb(struct hey_action_ctx *ctx, struct water_heater_water_quality_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "water_heater water_quality_reset action in");
    return -1;
}

/**
 * @brief water quality reset action stop callback of water heater service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void water_heater_water_quality_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: water_heater_water_quality_reset_stop(ctx);
     */
}

/**
 * @brief mg reset action start callback of water heater service
 * @param ctx          [action context]
 * @param action       [mg reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t water_heater_mg_reset_start_cb(struct hey_action_ctx *ctx, struct water_heater_mg_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "water_heater mg_reset action in");
    return -1;
}

/**
 * @brief mg reset action stop callback of water heater service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void water_heater_mg_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: water_heater_mg_reset_stop(ctx);
     */
}

/**
 * @brief water consumption reset action start callback of water heater service
 * @param ctx          [action context]
 * @param action       [water consumption reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t water_heater_water_consumption_reset_start_cb(struct hey_action_ctx *ctx, struct water_heater_water_consumption_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "water_heater water_consumption_reset action in");
    return -1;
}

/**
 * @brief water consumption reset action stop callback of water heater service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void water_heater_water_consumption_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: water_heater_water_consumption_reset_stop(ctx);
     */
}

/**
 * @brief device factory restore action start callback of water heater service
 * @param ctx          [action context]
 * @param action       [device factory restore action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t water_heater_device_factory_restore_start_cb(struct hey_action_ctx *ctx, struct water_heater_device_factory_restore_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "water_heater device_factory_restore action in");
    return -1;
}

/**
 * @brief device factory restore action stop callback of water heater service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void water_heater_device_factory_restore_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: water_heater_device_factory_restore_stop(ctx);
     */
}
