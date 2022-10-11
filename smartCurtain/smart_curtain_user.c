#include "schema/smartCurtain/smart_curtain_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of smart curtain service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t smart_curtain_properties_write_cb(size_t count, uint32_t *enumerate, struct smart_curtain_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case SMART_CURTAIN_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case SMART_CURTAIN_PROPERTY_OPENCLOSESTATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "open Close State = %d", properties->openclosestate);
            break;
        case SMART_CURTAIN_PROPERTY_OPENLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "open Level = %d", properties->openlevel);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return smart_curtain_properties_update(count, enumerate, properties);
}

/**
 * @brief open action start callback of smart curtain service
 * @param ctx          [action context]
 * @param action       [open action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t smart_curtain_open_start_cb(struct hey_action_ctx *ctx, struct smart_curtain_open_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "smart_curtain open action in");
    return -1;
}

/**
 * @brief open action stop callback of smart curtain service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void smart_curtain_open_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: smart_curtain_open_stop(ctx);
     */
}

/**
 * @brief close action start callback of smart curtain service
 * @param ctx          [action context]
 * @param action       [close action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t smart_curtain_close_start_cb(struct hey_action_ctx *ctx, struct smart_curtain_close_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "smart_curtain close action in");
    return -1;
}

/**
 * @brief close action stop callback of smart curtain service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void smart_curtain_close_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: smart_curtain_close_stop(ctx);
     */
}
