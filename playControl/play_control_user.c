#include "schema/playControl/play_control_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of play control service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t play_control_properties_write_cb(size_t count, uint32_t *enumerate, struct play_control_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case PLAY_CONTROL_PROPERTY_PLAYSPEED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "play Speed = %d", properties->playspeed);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return play_control_properties_update(count, enumerate, properties);
}

/**
 * @brief next track action start callback of play control service
 * @param ctx          [action context]
 * @param action       [next track action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_next_track_start_cb(struct hey_action_ctx *ctx, struct play_control_next_track_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control next_track action in");
    return -1;
}

/**
 * @brief next track action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_next_track_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_next_track_stop(ctx);
     */
}

/**
 * @brief previous track action start callback of play control service
 * @param ctx          [action context]
 * @param action       [previous track action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_previous_track_start_cb(struct hey_action_ctx *ctx, struct play_control_previous_track_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control previous_track action in");
    return -1;
}

/**
 * @brief previous track action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_previous_track_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_previous_track_stop(ctx);
     */
}

/**
 * @brief stop action start callback of play control service
 * @param ctx          [action context]
 * @param action       [stop action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_stop_start_cb(struct hey_action_ctx *ctx, struct play_control_stop_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control stop action in");
    return -1;
}

/**
 * @brief stop action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_stop_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_stop_stop(ctx);
     */
}

/**
 * @brief play action start callback of play control service
 * @param ctx          [action context]
 * @param action       [play action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_play_start_cb(struct hey_action_ctx *ctx, struct play_control_play_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control play action in");
    return -1;
}

/**
 * @brief play action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_play_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_play_stop(ctx);
     */
}

/**
 * @brief pause action start callback of play control service
 * @param ctx          [action context]
 * @param action       [pause action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_pause_start_cb(struct hey_action_ctx *ctx, struct play_control_pause_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control pause action in");
    return -1;
}

/**
 * @brief pause action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_pause_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_pause_stop(ctx);
     */
}

/**
 * @brief resume action start callback of play control service
 * @param ctx          [action context]
 * @param action       [resume action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_resume_start_cb(struct hey_action_ctx *ctx, struct play_control_resume_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control resume action in");
    return -1;
}

/**
 * @brief resume action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_resume_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_resume_stop(ctx);
     */
}

/**
 * @brief record start action start callback of play control service
 * @param ctx          [action context]
 * @param action       [record start action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_record_start_start_cb(struct hey_action_ctx *ctx, struct play_control_record_start_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control record_start action in");
    return -1;
}

/**
 * @brief record start action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_record_start_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_record_start_stop(ctx);
     */
}

/**
 * @brief forward action start callback of play control service
 * @param ctx          [action context]
 * @param action       [forward action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_forward_start_cb(struct hey_action_ctx *ctx, struct play_control_forward_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control forward action in");
    return -1;
}

/**
 * @brief forward action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_forward_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_forward_stop(ctx);
     */
}

/**
 * @brief rewind action start callback of play control service
 * @param ctx          [action context]
 * @param action       [rewind action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_rewind_start_cb(struct hey_action_ctx *ctx, struct play_control_rewind_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control rewind action in");
    return -1;
}

/**
 * @brief rewind action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_rewind_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_rewind_stop(ctx);
     */
}

/**
 * @brief search previous action start callback of play control service
 * @param ctx          [action context]
 * @param action       [search previous action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_search_previous_start_cb(struct hey_action_ctx *ctx, struct play_control_search_previous_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control search_previous action in");
    return -1;
}

/**
 * @brief search previous action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_search_previous_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_search_previous_stop(ctx);
     */
}

/**
 * @brief search next action start callback of play control service
 * @param ctx          [action context]
 * @param action       [search next action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_search_next_start_cb(struct hey_action_ctx *ctx, struct play_control_search_next_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control search_next action in");
    return -1;
}

/**
 * @brief search next action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_search_next_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_search_next_stop(ctx);
     */
}

/**
 * @brief screen capture action start callback of play control service
 * @param ctx          [action context]
 * @param action       [screen capture action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_screen_capture_start_cb(struct hey_action_ctx *ctx, struct play_control_screen_capture_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control screen_capture action in");
    return -1;
}

/**
 * @brief screen capture action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_screen_capture_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_screen_capture_stop(ctx);
     */
}

/**
 * @brief record end action start callback of play control service
 * @param ctx          [action context]
 * @param action       [record end action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_record_end_start_cb(struct hey_action_ctx *ctx, struct play_control_record_end_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control record_end action in");
    return -1;
}

/**
 * @brief record end action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_record_end_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_record_end_stop(ctx);
     */
}

/**
 * @brief direction key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [direction key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_direction_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_direction_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control direction_key_control action in");
    return -1;
}

/**
 * @brief direction key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_direction_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_direction_key_control_stop(ctx);
     */
}

/**
 * @brief home key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [home key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_home_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_home_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control home_key_control action in");
    return -1;
}

/**
 * @brief home key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_home_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_home_key_control_stop(ctx);
     */
}

/**
 * @brief return key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [return key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_return_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_return_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control return_key_control action in");
    return -1;
}

/**
 * @brief return key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_return_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_return_key_control_stop(ctx);
     */
}

/**
 * @brief menu key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [menu key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_menu_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_menu_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control menu_key_control action in");
    return -1;
}

/**
 * @brief menu key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_menu_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_menu_key_control_stop(ctx);
     */
}

/**
 * @brief set key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [set key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_set_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_set_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control set_key_control action in");
    return -1;
}

/**
 * @brief set key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_set_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_set_key_control_stop(ctx);
     */
}

/**
 * @brief smart home key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [smart home key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_smart_home_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_smart_home_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control smart_home_key_control action in");
    return -1;
}

/**
 * @brief smart home key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_smart_home_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_smart_home_key_control_stop(ctx);
     */
}

/**
 * @brief speech key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [speech key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_speech_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_speech_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control speech_key_control action in");
    return -1;
}

/**
 * @brief speech key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_speech_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_speech_key_control_stop(ctx);
     */
}

/**
 * @brief confirm key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [confirm key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_confirm_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_confirm_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control confirm_key_control action in");
    return -1;
}

/**
 * @brief confirm key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_confirm_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_confirm_key_control_stop(ctx);
     */
}

/**
 * @brief focus adjust action start callback of play control service
 * @param ctx          [action context]
 * @param action       [focus adjust action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_focus_adjust_start_cb(struct hey_action_ctx *ctx, struct play_control_focus_adjust_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control focus_adjust action in");
    return -1;
}

/**
 * @brief focus adjust action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_focus_adjust_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_focus_adjust_stop(ctx);
     */
}

/**
 * @brief screen cast key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [screen cast key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_screen_cast_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_screen_cast_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control screen_cast_key_control action in");
    return -1;
}

/**
 * @brief screen cast key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_screen_cast_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_screen_cast_key_control_stop(ctx);
     */
}

/**
 * @brief remote key control action start callback of play control service
 * @param ctx          [action context]
 * @param action       [remote key control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t play_control_remote_key_control_start_cb(struct hey_action_ctx *ctx, struct play_control_remote_key_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "play_control remote_key_control action in");
    return -1;
}

/**
 * @brief remote key control action stop callback of play control service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void play_control_remote_key_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: play_control_remote_key_control_stop(ctx);
     */
}
