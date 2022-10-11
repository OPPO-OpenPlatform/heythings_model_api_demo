#include "schema/weightScale/weight_scale_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of weight scale service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t weight_scale_properties_write_cb(size_t count, uint32_t *enumerate, struct weight_scale_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case WEIGHT_SCALE_PROPERTY_JOBSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "job Status = %d", properties->jobstatus);
            break;
        case WEIGHT_SCALE_PROPERTY_WEIGHINGMEASURERESULTS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "weighingMeasureResults.utc = %d", properties->weighingmeasureresults->utc);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "weighingMeasureResults.weight = %d", properties->weighingmeasureresults->weight);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "weighingMeasureResults.impedance = %d", properties->weighingmeasureresults->impedance);
            break;
        case WEIGHT_SCALE_PROPERTY_CURRENTUSERID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current User Id = %d", properties->currentuserid);
            break;
        case WEIGHT_SCALE_PROPERTY_WEIGHTSCALEUSERLIST:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case WEIGHT_SCALE_PROPERTY_WEIGHTUNIT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "weight Unit = %d", properties->weightunit);
            break;
        case WEIGHT_SCALE_PROPERTY_MEASUREBODYFATENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "measure Body Fat Enabled = %s", properties->measurebodyfatenabled ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return weight_scale_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of weight scale service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t weight_scale_weightscaleuserlist_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of weight scale service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t weight_scale_weightscaleuserlist_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of weight scale service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t weight_scale_weightscaleuserlist_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief get offline body fat scale records action start callback of weight scale service
 * @param ctx          [action context]
 * @param action       [get offline body fat scale records action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t weight_scale_get_offline_body_fat_scale_records_start_cb(struct hey_action_ctx *ctx, struct weight_scale_get_offline_body_fat_scale_records_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "weight_scale get_offline_body_fat_scale_records action in");
    return -1;
}

/**
 * @brief get offline body fat scale records action stop callback of weight scale service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void weight_scale_get_offline_body_fat_scale_records_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: weight_scale_get_offline_body_fat_scale_records_stop(ctx);
     */
}
