#include "schema/television/television_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of television service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t television_properties_write_cb(size_t count, uint32_t *enumerate, struct television_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case TELEVISION_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case TELEVISION_PROPERTY_SLEEP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sleep = %d", properties->sleep);
            break;
        case TELEVISION_PROPERTY_SOUNDVOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sound Volume = %d", properties->soundvolume);
            break;
        case TELEVISION_PROPERTY_SPEECHCONTROLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "speech Control Enabled = %s", properties->speechcontrolenabled ? "true" : "false");
            break;
        case TELEVISION_PROPERTY_SOURCEINPUT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "source Input = %d", properties->sourceinput);
            break;
        case TELEVISION_PROPERTY_STATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "status = %d", properties->status);
            break;
        case TELEVISION_PROPERTY_PARENTCONTROLSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "parent Controls Enabled = %s", properties->parentcontrolsenabled ? "true" : "false");
            break;
        case TELEVISION_PROPERTY_SINGLEWATCHINGTVTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "single Watching Tv Time = %d", properties->singlewatchingtvtime);
            break;
        case TELEVISION_PROPERTY_MUTE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mute = %s", properties->mute ? "true" : "false");
            break;
        case TELEVISION_PROPERTY_CURRENTCHANNEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Channel = %s", properties->currentchannel);
            break;
        case TELEVISION_PROPERTY_CHANNEL:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return television_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of television service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t television_channel_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of television service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t television_channel_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of television service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t television_channel_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief channel up action start callback of television service
 * @param ctx          [action context]
 * @param action       [channel up action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_channel_up_start_cb(struct hey_action_ctx *ctx, struct television_channel_up_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television channel_up action in");
    return -1;
}

/**
 * @brief channel up action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_channel_up_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_channel_up_stop(ctx);
     */
}

/**
 * @brief channel down action start callback of television service
 * @param ctx          [action context]
 * @param action       [channel down action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_channel_down_start_cb(struct hey_action_ctx *ctx, struct television_channel_down_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television channel_down action in");
    return -1;
}

/**
 * @brief channel down action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_channel_down_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_channel_down_stop(ctx);
     */
}

/**
 * @brief get parent control playlist action start callback of television service
 * @param ctx          [action context]
 * @param action       [get parent control playlist action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_get_parent_control_playlist_start_cb(struct hey_action_ctx *ctx, struct television_get_parent_control_playlist_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television get_parent_control_playlist action in");
    return -1;
}

/**
 * @brief get parent control playlist action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_get_parent_control_playlist_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_get_parent_control_playlist_stop(ctx);
     */
}

/**
 * @brief get picture list action start callback of television service
 * @param ctx          [action context]
 * @param action       [get picture list action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_get_picture_list_start_cb(struct hey_action_ctx *ctx, struct television_get_picture_list_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television get_picture_list action in");
    return -1;
}

/**
 * @brief get picture list action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_get_picture_list_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_get_picture_list_stop(ctx);
     */
}

/**
 * @brief get record list action start callback of television service
 * @param ctx          [action context]
 * @param action       [get record list action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_get_record_list_start_cb(struct hey_action_ctx *ctx, struct television_get_record_list_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television get_record_list action in");
    return -1;
}

/**
 * @brief get record list action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_get_record_list_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_get_record_list_stop(ctx);
     */
}

/**
 * @brief del record info action start callback of television service
 * @param ctx          [action context]
 * @param action       [del record info action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_del_record_info_start_cb(struct hey_action_ctx *ctx, struct television_del_record_info_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television del_record_info action in");
    return -1;
}

/**
 * @brief del record info action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_del_record_info_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_del_record_info_stop(ctx);
     */
}

/**
 * @brief del picture info action start callback of television service
 * @param ctx          [action context]
 * @param action       [del picture info action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_del_picture_info_start_cb(struct hey_action_ctx *ctx, struct television_del_picture_info_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television del_picture_info action in");
    return -1;
}

/**
 * @brief del picture info action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_del_picture_info_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_del_picture_info_stop(ctx);
     */
}

/**
 * @brief get parent control time action start callback of television service
 * @param ctx          [action context]
 * @param action       [get parent control time action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_get_parent_control_time_start_cb(struct hey_action_ctx *ctx, struct television_get_parent_control_time_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television get_parent_control_time action in");
    return -1;
}

/**
 * @brief get parent control time action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_get_parent_control_time_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_get_parent_control_time_stop(ctx);
     */
}

/**
 * @brief remain in parent control action start callback of television service
 * @param ctx          [action context]
 * @param action       [remain in parent control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t television_remain_in_parent_control_start_cb(struct hey_action_ctx *ctx, struct television_remain_in_parent_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "television remain_in_parent_control action in");
    return -1;
}

/**
 * @brief remain in parent control action stop callback of television service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void television_remain_in_parent_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: television_remain_in_parent_control_stop(ctx);
     */
}

/**
 * @brief record notify notify result callback of television service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void television_record_notify_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief channel list change notify result callback of television service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void television_channel_list_change_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief parent controls mode start notify result callback of television service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void television_parent_controls_mode_start_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief parent controls mode stop notify result callback of television service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void television_parent_controls_mode_stop_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
