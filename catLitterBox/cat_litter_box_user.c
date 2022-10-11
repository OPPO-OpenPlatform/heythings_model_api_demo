#include "schema/catLitterBox/cat_litter_box_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of cat litter box service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t cat_litter_box_properties_write_cb(size_t count, uint32_t *enumerate, struct cat_litter_box_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case CAT_LITTER_BOX_PROPERTY_JOBSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "job Status = %d", properties->jobstatus);
            break;
        case CAT_LITTER_BOX_PROPERTY_CATTOILETMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cat Toilet Mode = %d", properties->cattoiletmode);
            break;
        case CAT_LITTER_BOX_PROPERTY_CATTOILETFAULTCODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "catToiletFaultCode.n_code = %d", properties->cattoiletfaultcode->n_code);
            for (int i = 0; i < properties->cattoiletfaultcode->n_code; i++) {
                hey_printf(HEY_LOG_LEVEL_NOTICE, "catToiletFaultCode.code[i] = %d", properties->cattoiletfaultcode->code[i]);
            }
            break;
        case CAT_LITTER_BOX_PROPERTY_AUTOCLEANUP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "autoCleanup.enabled = %d", properties->autocleanup->enabled);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "autoCleanup.delaytostart = %d", properties->autocleanup->delaytostart);
            break;
        case CAT_LITTER_BOX_PROPERTY_WEIGHT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "weight = %d", properties->weight);
            break;
        case CAT_LITTER_BOX_PROPERTY_CATTOILETCATSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cat Toilet Cat Status = %d", properties->cattoiletcatstatus);
            break;
        case CAT_LITTER_BOX_PROPERTY_CATINFO:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAT_LITTER_BOX_PROPERTY_THENUMBEROFTOILETVISITSTODAY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "the Number Of Toilet Visits Today = %d", properties->thenumberoftoiletvisitstoday);
            break;
        case CAT_LITTER_BOX_PROPERTY_CHILDLOCKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "child Lock Enabled = %s", properties->childlockenabled ? "true" : "false");
            break;
        case CAT_LITTER_BOX_PROPERTY_NODISTURBINGPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.status = %d", properties->nodisturbingperiod->status);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.week = %d", properties->nodisturbingperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.fromhour = %d", properties->nodisturbingperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.fromminute = %d", properties->nodisturbingperiod->fromminute);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.fromsec = %d", properties->nodisturbingperiod->fromsec);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.tohour = %d", properties->nodisturbingperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.tominute = %d", properties->nodisturbingperiod->tominute);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.tosec = %d", properties->nodisturbingperiod->tosec);
            break;
        case CAT_LITTER_BOX_PROPERTY_WEIGHTISSENSED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "weight Is Sensed = %s", properties->weightissensed ? "true" : "false");
            break;
        case CAT_LITTER_BOX_PROPERTY_INDICATORLIGHTOFFPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicatorLightOffPeriod.status = %d", properties->indicatorlightoffperiod->status);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicatorLightOffPeriod.week = %d", properties->indicatorlightoffperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicatorLightOffPeriod.fromhour = %d", properties->indicatorlightoffperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicatorLightOffPeriod.fromminute = %d", properties->indicatorlightoffperiod->fromminute);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicatorLightOffPeriod.fromsec = %d", properties->indicatorlightoffperiod->fromsec);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicatorLightOffPeriod.tohour = %d", properties->indicatorlightoffperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicatorLightOffPeriod.tominute = %d", properties->indicatorlightoffperiod->tominute);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicatorLightOffPeriod.tosec = %d", properties->indicatorlightoffperiod->tosec);
            break;
        case CAT_LITTER_BOX_PROPERTY_INDICATORLIGHTENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicator Light Enabled = %s", properties->indicatorlightenabled ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return cat_litter_box_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of cat litter box service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t cat_litter_box_catinfo_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of cat litter box service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t cat_litter_box_catinfo_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of cat litter box service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t cat_litter_box_catinfo_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief device factory restore action start callback of cat litter box service
 * @param ctx          [action context]
 * @param action       [device factory restore action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t cat_litter_box_device_factory_restore_start_cb(struct hey_action_ctx *ctx, struct cat_litter_box_device_factory_restore_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "cat_litter_box device_factory_restore action in");
    return -1;
}

/**
 * @brief device factory restore action stop callback of cat litter box service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void cat_litter_box_device_factory_restore_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: cat_litter_box_device_factory_restore_stop(ctx);
     */
}

/**
 * @brief clean up action start callback of cat litter box service
 * @param ctx          [action context]
 * @param action       [clean up action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t cat_litter_box_clean_up_start_cb(struct hey_action_ctx *ctx, struct cat_litter_box_clean_up_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "cat_litter_box clean_up action in");
    return -1;
}

/**
 * @brief clean up action stop callback of cat litter box service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void cat_litter_box_clean_up_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: cat_litter_box_clean_up_stop(ctx);
     */
}

/**
 * @brief cat toilet sand change action start callback of cat litter box service
 * @param ctx          [action context]
 * @param action       [cat toilet sand change action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t cat_litter_box_cat_toilet_sand_change_start_cb(struct hey_action_ctx *ctx, struct cat_litter_box_cat_toilet_sand_change_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "cat_litter_box cat_toilet_sand_change action in");
    return -1;
}

/**
 * @brief cat toilet sand change action stop callback of cat litter box service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void cat_litter_box_cat_toilet_sand_change_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: cat_litter_box_cat_toilet_sand_change_stop(ctx);
     */
}

/**
 * @brief cat sand smoothing action start callback of cat litter box service
 * @param ctx          [action context]
 * @param action       [cat sand smoothing action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t cat_litter_box_cat_sand_smoothing_start_cb(struct hey_action_ctx *ctx, struct cat_litter_box_cat_sand_smoothing_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "cat_litter_box cat_sand_smoothing action in");
    return -1;
}

/**
 * @brief cat sand smoothing action stop callback of cat litter box service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void cat_litter_box_cat_sand_smoothing_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: cat_litter_box_cat_sand_smoothing_stop(ctx);
     */
}

/**
 * @brief after using the toilet notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_after_using_the_toilet_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief auto cleanup start notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_auto_cleanup_start_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief auto cleanup end notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_auto_cleanup_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief start regular cleaning notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_start_regular_cleaning_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief end regular cleaning notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_end_regular_cleaning_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief cat near notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_cat_near_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief cat leaves notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_cat_leaves_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief manual cleanup end notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_manual_cleanup_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief sand change end notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_sand_change_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief smoothing end notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_smoothing_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief weight sensor fault notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_weight_sensor_fault_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief motor fault notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_motor_fault_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief cover open notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_cover_open_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief roller not in place notify result callback of cat litter box service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void cat_litter_box_roller_not_in_place_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
