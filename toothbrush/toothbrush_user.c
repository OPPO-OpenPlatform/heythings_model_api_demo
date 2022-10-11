#include "schema/toothbrush/toothbrush_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of toothbrush service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t toothbrush_properties_write_cb(size_t count, uint32_t *enumerate, struct toothbrush_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case TOOTHBRUSH_PROPERTY_TOOTHBRUSHHEADLEFTTIMES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush Head Left Times = %d", properties->toothbrushheadlefttimes);
            break;
        case TOOTHBRUSH_PROPERTY_TOOTHBRUSHCLEANMODELEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush Clean Mode Level = %d", properties->toothbrushcleanmodelevel);
            break;
        case TOOTHBRUSH_PROPERTY_TOOTHBRUSHWHITENINGMODELEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush Whitening Mode Level = %d", properties->toothbrushwhiteningmodelevel);
            break;
        case TOOTHBRUSH_PROPERTY_TOOTHBRUSHSENSITIVEMODELEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush Sensitive Mode Level = %d", properties->toothbrushsensitivemodelevel);
            break;
        case TOOTHBRUSH_PROPERTY_TOOTHBRUSHCAREMODELEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush Care Mode Level = %d", properties->toothbrushcaremodelevel);
            break;
        case TOOTHBRUSH_PROPERTY_TOOTHBRUSHMODEPERSIONAL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush Mode Persional = %d", properties->toothbrushmodepersional);
            break;
        case TOOTHBRUSH_PROPERTY_SETBRUSHINGDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "set Brushing Duration = %d", properties->setbrushingduration);
            break;
        case TOOTHBRUSH_PROPERTY_SETBRUSHINGSTARTPOSITION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "set Brushing Start Position = %d", properties->setbrushingstartposition);
            break;
        case TOOTHBRUSH_PROPERTY_TOOTHBRUSHJOBSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush Job Status = %d", properties->toothbrushjobstatus);
            break;
        case TOOTHBRUSH_PROPERTY_BRUSHINGMONITORING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "brushingMonitoring.touch = %d", properties->brushingmonitoring->touch);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "brushingMonitoring.areatype = %d", properties->brushingmonitoring->areatype);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "brushingMonitoring.sidetype = %d", properties->brushingmonitoring->sidetype);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "brushingMonitoring.duration = %d", properties->brushingmonitoring->duration);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "brushingMonitoring.largeshaketimes = %d", properties->brushingmonitoring->largeshaketimes);
            break;
        case TOOTHBRUSH_PROPERTY_ANTISPLASHENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "anti Splash Enabled = %s", properties->antisplashenabled ? "true" : "false");
            break;
        case TOOTHBRUSH_PROPERTY_HAVEBRUSHINGRECORDLIST:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "have Brushing Record List = %s", properties->havebrushingrecordlist ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return toothbrush_properties_update(count, enumerate, properties);
}

/**
 * @brief toothbrush head reset action start callback of toothbrush service
 * @param ctx          [action context]
 * @param action       [toothbrush head reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t toothbrush_toothbrush_head_reset_start_cb(struct hey_action_ctx *ctx, struct toothbrush_toothbrush_head_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush toothbrush_head_reset action in");
    return -1;
}

/**
 * @brief toothbrush head reset action stop callback of toothbrush service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void toothbrush_toothbrush_head_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: toothbrush_toothbrush_head_reset_stop(ctx);
     */
}

/**
 * @brief get three axis offline brushing details action start callback of toothbrush service
 * @param ctx          [action context]
 * @param action       [get three axis offline brushing details action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t toothbrush_get_three_axis_offline_brushing_details_start_cb(struct hey_action_ctx *ctx, struct toothbrush_get_three_axis_offline_brushing_details_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush get_three_axis_offline_brushing_details action in");
    return -1;
}

/**
 * @brief get three axis offline brushing details action stop callback of toothbrush service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void toothbrush_get_three_axis_offline_brushing_details_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: toothbrush_get_three_axis_offline_brushing_details_stop(ctx);
     */
}

/**
 * @brief get online brushing details action start callback of toothbrush service
 * @param ctx          [action context]
 * @param action       [get online brushing details action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t toothbrush_get_online_brushing_details_start_cb(struct hey_action_ctx *ctx, struct toothbrush_get_online_brushing_details_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "toothbrush get_online_brushing_details action in");
    return -1;
}

/**
 * @brief get online brushing details action stop callback of toothbrush service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void toothbrush_get_online_brushing_details_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: toothbrush_get_online_brushing_details_stop(ctx);
     */
}
