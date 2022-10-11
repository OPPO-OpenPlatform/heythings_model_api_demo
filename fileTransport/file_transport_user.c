#include "schema/fileTransport/file_transport_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief file upload action start callback of file transport service
 * @param ctx          [action context]
 * @param action       [file upload action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t file_transport_file_upload_start_cb(struct hey_action_ctx *ctx, struct file_transport_file_upload_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "file_transport file_upload action in");
    return -1;
}

/**
 * @brief file upload action message receive callback of file transport service
 * @param user_context [callback data which form action start callback function]
 * @param action       [file upload action in]
 * @return int32_t     [action message callback handle result, 0 means success]
 */
int32_t file_transport_file_upload_message_cb(void *user_context, struct file_transport_file_upload_in *action)
{
    // This is handled by the application layer
    // user_context is assigned to the SDK in the *_start_cb function

    return -1;
}

/**
 * @brief file upload action stop callback of file transport service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void file_transport_file_upload_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: file_transport_file_upload_stop(ctx);
     */
}

/**
 * @brief file download action start callback of file transport service
 * @param ctx          [action context]
 * @param action       [file download action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t file_transport_file_download_start_cb(struct hey_action_ctx *ctx, struct file_transport_file_download_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "file_transport file_download action in");
    return -1;
}

/**
 * @brief file download action stop callback of file transport service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void file_transport_file_download_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: file_transport_file_download_stop(ctx);
     */
}
