#include "schema/dataThrough/data_through_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief data through action start callback of data through service
 * @param ctx          [action context]
 * @param action       [data through action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t data_through_data_through_start_cb(struct hey_action_ctx *ctx, struct data_through_data_through_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "data_through data_through action in");
    return -1;
}

/**
 * @brief data through action message receive callback of data through service
 * @param user_context [callback data which form action start callback function]
 * @param action       [data through action in]
 * @return int32_t     [action message callback handle result, 0 means success]
 */
int32_t data_through_data_through_message_cb(void *user_context, struct data_through_data_through_in *action)
{
    // This is handled by the application layer
    // user_context is assigned to the SDK in the *_start_cb function

    return -1;
}

/**
 * @brief data through action stop callback of data through service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void data_through_data_through_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: data_through_data_through_stop(ctx);
     */
}

/**
 * @brief beacon through notify result callback of data through service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void data_through_beacon_through_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
