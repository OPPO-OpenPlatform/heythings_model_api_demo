#include "schema/acAssistant/ac_assistant_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of ac assistant service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t ac_assistant_properties_write_cb(size_t count, uint32_t *enumerate, struct ac_assistant_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case AC_ASSISTANT_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case AC_ASSISTANT_PROPERTY_ACMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ac Mode = %d", properties->acmode);
            break;
        case AC_ASSISTANT_PROPERTY_ECO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eco = %s", properties->eco ? "true" : "false");
            break;
        case AC_ASSISTANT_PROPERTY_SLEEP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sleep = %d", properties->sleep);
            break;
        case AC_ASSISTANT_PROPERTY_RAPIDMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "rapid Mode = %s", properties->rapidmode ? "true" : "false");
            break;
        case AC_ASSISTANT_PROPERTY_ELECTRICHEATING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "electric Heating = %s", properties->electricheating ? "true" : "false");
            break;
        case AC_ASSISTANT_PROPERTY_TARGETTEMPERATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "target Temperature = %d", properties->targettemperature);
            break;
        case AC_ASSISTANT_PROPERTY_DISPLAYINGTEMPUNIT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "displaying Temp Unit = %d", properties->displayingtempunit);
            break;
        case AC_ASSISTANT_PROPERTY_FANMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fan Mode = %d", properties->fanmode);
            break;
        case AC_ASSISTANT_PROPERTY_WINDSPEED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wind Speed = %d", properties->windspeed);
            break;
        case AC_ASSISTANT_PROPERTY_HORIZONTALDIRECTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "horizontal Direction = %d", properties->horizontaldirection);
            break;
        case AC_ASSISTANT_PROPERTY_VERTICALDIRECTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vertical Direction = %d", properties->verticaldirection);
            break;
        case AC_ASSISTANT_PROPERTY_SLEEPCURVEENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sleep Curve Enabled = %s", properties->sleepcurveenabled ? "true" : "false");
            break;
        case AC_ASSISTANT_PROPERTY_SLEEPCURVEMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sleep Curve Mode = %d", properties->sleepcurvemode);
            break;
        case AC_ASSISTANT_PROPERTY_SLEEPCURVEMODEDEFINITION:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return ac_assistant_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of ac assistant service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t ac_assistant_sleepcurvemodedefinition_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of ac assistant service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t ac_assistant_sleepcurvemodedefinition_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of ac assistant service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t ac_assistant_sleepcurvemodedefinition_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief issuing ir command action start callback of ac assistant service
 * @param ctx          [action context]
 * @param action       [issuing ir command action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t ac_assistant_issuing_ir_command_start_cb(struct hey_action_ctx *ctx, struct ac_assistant_issuing_ir_command_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "ac_assistant issuing_ir_command action in");
    return -1;
}

/**
 * @brief issuing ir command action stop callback of ac assistant service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void ac_assistant_issuing_ir_command_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: ac_assistant_issuing_ir_command_stop(ctx);
     */
}
