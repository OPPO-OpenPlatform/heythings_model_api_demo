#include "schema/subDeviceSetup/sub_device_setup_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief sub device setup action start callback of sub device setup service
 * @param ctx          [action context]
 * @param action       [sub device setup action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t sub_device_setup_sub_device_setup_start_cb(struct hey_action_ctx *ctx, struct sub_device_setup_sub_device_setup_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "sub_device_setup sub_device_setup action in");
    return -1;
}

/**
 * @brief sub device setup action stop callback of sub device setup service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void sub_device_setup_sub_device_setup_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: sub_device_setup_sub_device_setup_stop(ctx);
     */
}
