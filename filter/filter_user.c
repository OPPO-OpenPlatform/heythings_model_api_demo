#include "schema/filter/filter_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of filter service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t filter_properties_write_cb(size_t count, uint32_t *enumerate, struct filter_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case FILTER_PROPERTY_FILTERUSEDTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "filter Used Time = %d", properties->filterusedtime);
            break;
        case FILTER_PROPERTY_FILTERLEFTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "filter Left Time = %d", properties->filterlefttime);
            break;
        case FILTER_PROPERTY_PREFILTERUSEDTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "prefilter Used Time = %d", properties->prefilterusedtime);
            break;
        case FILTER_PROPERTY_PREFILTERPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "prefilter Percent = %d", properties->prefilterpercent);
            break;
        case FILTER_PROPERTY_FILTERPERCENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "filter Percent = %d", properties->filterpercent);
            break;
        case FILTER_PROPERTY_FILTERWATER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "filter Water = %d", properties->filterwater);
            break;
        case FILTER_PROPERTY_FILTERSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "filter Status = %s", properties->filterstatus ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return filter_properties_update(count, enumerate, properties);
}

/**
 * @brief self cleaning action start callback of filter service
 * @param ctx          [action context]
 * @param action       [self cleaning action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t filter_self_cleaning_start_cb(struct hey_action_ctx *ctx, struct filter_self_cleaning_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "filter self_cleaning action in");
    return -1;
}

/**
 * @brief self cleaning action stop callback of filter service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void filter_self_cleaning_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: filter_self_cleaning_stop(ctx);
     */
}

/**
 * @brief filter reset action start callback of filter service
 * @param ctx          [action context]
 * @param action       [filter reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t filter_filter_reset_start_cb(struct hey_action_ctx *ctx, struct filter_filter_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "filter filter_reset action in");
    return -1;
}

/**
 * @brief filter reset action stop callback of filter service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void filter_filter_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: filter_filter_reset_stop(ctx);
     */
}

/**
 * @brief filter replacement notify result callback of filter service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void filter_filter_replacement_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief filter cleaning notify result callback of filter service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void filter_filter_cleaning_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
