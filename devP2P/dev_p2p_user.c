#include "schema/devP2P/dev_p2p_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief set stream info action start callback of dev p2p service
 * @param ctx          [action context]
 * @param action       [set stream info action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t dev_p2p_set_stream_info_start_cb(struct hey_action_ctx *ctx, struct dev_p2p_set_stream_info_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "dev_p2p set_stream_info action in");
    return -1;
}

/**
 * @brief set stream info action stop callback of dev p2p service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void dev_p2p_set_stream_info_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: dev_p2p_set_stream_info_stop(ctx);
     */
}
