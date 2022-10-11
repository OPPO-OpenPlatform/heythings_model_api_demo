#include "schema/mediaStream/media_stream_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of media stream service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t media_stream_properties_write_cb(size_t count, uint32_t *enumerate, struct media_stream_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case MEDIA_STREAM_PROPERTY_TRANSMITRESOLUTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "transmit Resolution = %d", properties->transmitresolution);
            break;
        case MEDIA_STREAM_PROPERTY_MEDIASTREAMMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "media Stream Mode = %d", properties->mediastreammode);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return media_stream_properties_update(count, enumerate, properties);
}

/**
 * @brief start media stream action start callback of media stream service
 * @param ctx          [action context]
 * @param action       [start media stream action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t media_stream_start_media_stream_start_cb(struct hey_action_ctx *ctx, struct media_stream_start_media_stream_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "media_stream start_media_stream action in");
    return -1;
}

/**
 * @brief start media stream action stop callback of media stream service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void media_stream_start_media_stream_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: media_stream_start_media_stream_stop(ctx);
     */
}

/**
 * @brief stop media stream action start callback of media stream service
 * @param ctx          [action context]
 * @param action       [stop media stream action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t media_stream_stop_media_stream_start_cb(struct hey_action_ctx *ctx, struct media_stream_stop_media_stream_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "media_stream stop_media_stream action in");
    return -1;
}

/**
 * @brief stop media stream action stop callback of media stream service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void media_stream_stop_media_stream_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: media_stream_stop_media_stream_stop(ctx);
     */
}

/**
 * @brief set transmit resolution action start callback of media stream service
 * @param ctx          [action context]
 * @param action       [set transmit resolution action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t media_stream_set_transmit_resolution_start_cb(struct hey_action_ctx *ctx, struct media_stream_set_transmit_resolution_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "media_stream set_transmit_resolution action in");
    return -1;
}

/**
 * @brief set transmit resolution action stop callback of media stream service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void media_stream_set_transmit_resolution_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: media_stream_set_transmit_resolution_stop(ctx);
     */
}

/**
 * @brief set media stream mode action start callback of media stream service
 * @param ctx          [action context]
 * @param action       [set media stream mode action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t media_stream_set_media_stream_mode_start_cb(struct hey_action_ctx *ctx, struct media_stream_set_media_stream_mode_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "media_stream set_media_stream_mode action in");
    return -1;
}

/**
 * @brief set media stream mode action stop callback of media stream service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void media_stream_set_media_stream_mode_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: media_stream_set_media_stream_mode_stop(ctx);
     */
}
