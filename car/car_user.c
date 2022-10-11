#include "schema/car/car_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of car service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t car_properties_write_cb(size_t count, uint32_t *enumerate, struct car_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case CAR_PROPERTY_REMAININGRANGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remaining Range = %d", properties->remainingrange);
            break;
        case CAR_PROPERTY_OILREMAININGRANGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oil Remaining Range = %d", properties->oilremainingrange);
            break;
        case CAR_PROPERTY_ELECREMAININGRANGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Remaining Range = %d", properties->elecremainingrange);
            break;
        case CAR_PROPERTY_WINDOWONOFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "window On Off = %s", properties->windowonoff ? "true" : "false");
            break;
        case CAR_PROPERTY_LOCKSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lock Status = %s", properties->lockstatus ? "true" : "false");
            break;
        case CAR_PROPERTY_SKYLIGHTONOFF:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "skylight On Off = %s", properties->skylightonoff ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return car_properties_update(count, enumerate, properties);
}

/**
 * @brief lock car action start callback of car service
 * @param ctx          [action context]
 * @param action       [lock car action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t car_lock_car_start_cb(struct hey_action_ctx *ctx, struct car_lock_car_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "car lock_car action in");
    return -1;
}

/**
 * @brief lock car action stop callback of car service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void car_lock_car_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: car_lock_car_stop(ctx);
     */
}

/**
 * @brief find car action start callback of car service
 * @param ctx          [action context]
 * @param action       [find car action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t car_find_car_start_cb(struct hey_action_ctx *ctx, struct car_find_car_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "car find_car action in");
    return -1;
}

/**
 * @brief find car action stop callback of car service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void car_find_car_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: car_find_car_stop(ctx);
     */
}

/**
 * @brief honk car action start callback of car service
 * @param ctx          [action context]
 * @param action       [honk car action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t car_honk_car_start_cb(struct hey_action_ctx *ctx, struct car_honk_car_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "car honk_car action in");
    return -1;
}

/**
 * @brief honk car action stop callback of car service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void car_honk_car_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: car_honk_car_stop(ctx);
     */
}

/**
 * @brief flash car action start callback of car service
 * @param ctx          [action context]
 * @param action       [flash car action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t car_flash_car_start_cb(struct hey_action_ctx *ctx, struct car_flash_car_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "car flash_car action in");
    return -1;
}

/**
 * @brief flash car action stop callback of car service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void car_flash_car_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: car_flash_car_stop(ctx);
     */
}
