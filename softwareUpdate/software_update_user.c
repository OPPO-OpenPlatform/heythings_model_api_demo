#include "schema/softwareUpdate/software_update_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of software update service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t software_update_properties_write_cb(size_t count, uint32_t *enumerate, struct software_update_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case SOFTWARE_UPDATE_PROPERTY_CURRENTSOFTWAREVERNAME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Software Ver Name = %s", properties->currentsoftwarevername);
            break;
        case SOFTWARE_UPDATE_PROPERTY_UPDATEPROGRESS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "update Progress = %d", properties->updateprogress);
            break;
        case SOFTWARE_UPDATE_PROPERTY_UPDATESTATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "update State = %d", properties->updatestate);
            break;
        case SOFTWARE_UPDATE_PROPERTY_UPDATEERROR:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "update Error = %d", properties->updateerror);
            break;
        case SOFTWARE_UPDATE_PROPERTY_CURRENTSOFTWAREVERCODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Software Ver Code = %d", properties->currentsoftwarevercode);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return software_update_properties_update(count, enumerate, properties);
}

/**
 * @brief start update action start callback of software update service
 * @param ctx          [action context]
 * @param action       [start update action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t software_update_start_update_start_cb(struct hey_action_ctx *ctx, struct software_update_start_update_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "software_update start_update action in");
    return -1;
}

/**
 * @brief start update action stop callback of software update service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void software_update_start_update_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: software_update_start_update_stop(ctx);
     */
}

/**
 * @brief start update file action start callback of software update service
 * @param ctx          [action context]
 * @param action       [start update file action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t software_update_start_update_file_start_cb(struct hey_action_ctx *ctx, struct software_update_start_update_file_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "software_update start_update_file action in");
    return -1;
}

/**
 * @brief start update file action message receive callback of software update service
 * @param user_context [callback data which form action start callback function]
 * @param action       [start update file action in]
 * @return int32_t     [action message callback handle result, 0 means success]
 */
int32_t software_update_start_update_file_message_cb(void *user_context, struct software_update_start_update_file_in *action)
{
    // This is handled by the application layer
    // user_context is assigned to the SDK in the *_start_cb function

    return -1;
}

/**
 * @brief start update file action stop callback of software update service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void software_update_start_update_file_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: software_update_start_update_file_stop(ctx);
     */
}

/**
 * @brief query new update action start callback of software update service
 * @param ctx          [action context]
 * @param action       [query new update action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t software_update_query_new_update_start_cb(struct hey_action_ctx *ctx, struct software_update_query_new_update_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "software_update query_new_update action in");
    return -1;
}

/**
 * @brief query new update action stop callback of software update service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void software_update_query_new_update_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: software_update_query_new_update_stop(ctx);
     */
}

/**
 * @brief prepare for mesh node connection action start callback of software update service
 * @param ctx          [action context]
 * @param action       [prepare for mesh node connection action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t software_update_prepare_for_mesh_node_connection_start_cb(struct hey_action_ctx *ctx, struct software_update_prepare_for_mesh_node_connection_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "software_update prepare_for_mesh_node_connection action in");
    return -1;
}

/**
 * @brief prepare for mesh node connection action stop callback of software update service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void software_update_prepare_for_mesh_node_connection_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: software_update_prepare_for_mesh_node_connection_stop(ctx);
     */
}
