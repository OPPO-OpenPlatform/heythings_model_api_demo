#include "schema/devPeriodicTimer/dev_periodic_timer_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of dev periodic timer service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t dev_periodic_timer_properties_write_cb(size_t count, uint32_t *enumerate, struct dev_periodic_timer_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case DEV_PERIODIC_TIMER_PROPERTY_PERIODICTIMER:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return dev_periodic_timer_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of dev periodic timer service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t dev_periodic_timer_periodictimer_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of dev periodic timer service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t dev_periodic_timer_periodictimer_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of dev periodic timer service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t dev_periodic_timer_periodictimer_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief periodic timer execute action start callback of dev periodic timer service
 * @param ctx          [action context]
 * @param action       [periodic timer execute action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t dev_periodic_timer_periodic_timer_execute_start_cb(struct hey_action_ctx *ctx, struct dev_periodic_timer_periodic_timer_execute_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "dev_periodic_timer periodic_timer_execute action in");
    return -1;
}

/**
 * @brief periodic timer execute action stop callback of dev periodic timer service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void dev_periodic_timer_periodic_timer_execute_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: dev_periodic_timer_periodic_timer_execute_stop(ctx);
     */
}
