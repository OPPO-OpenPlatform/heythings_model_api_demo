#include "schema/smartLock/smart_lock_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of smart lock service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t smart_lock_properties_write_cb(size_t count, uint32_t *enumerate, struct smart_lock_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case SMART_LOCK_PROPERTY_LOCKSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lock Status = %s", properties->lockstatus ? "true" : "false");
            break;
        case SMART_LOCK_PROPERTY_SOUNDVOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sound Volume = %d", properties->soundvolume);
            break;
        case SMART_LOCK_PROPERTY_LOCKUSERLIST:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case SMART_LOCK_PROPERTY_LOCKDOUBLEVERIFYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lock Double Verify Enabled = %s", properties->lockdoubleverifyenabled ? "true" : "false");
            break;
        case SMART_LOCK_PROPERTY_SECURITYPINUPDATETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "security Pin Update Time = %ld", properties->securitypinupdatetime);
            break;
        case SMART_LOCK_PROPERTY_SUPPORTTEMPORARYPASSWORD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "support Temporary Password = %s", properties->supporttemporarypassword ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return smart_lock_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of smart lock service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t smart_lock_lockuserlist_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of smart lock service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t smart_lock_lockuserlist_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of smart lock service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t smart_lock_lockuserlist_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief ec jpake get device key action start callback of smart lock service
 * @param ctx          [action context]
 * @param action       [ec jpake get device key action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t smart_lock_ec_jpake_get_device_key_start_cb(struct hey_action_ctx *ctx, struct smart_lock_ec_jpake_get_device_key_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "smart_lock ec_jpake_get_device_key action in");
    return -1;
}

/**
 * @brief ec jpake get device key action stop callback of smart lock service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void smart_lock_ec_jpake_get_device_key_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: smart_lock_ec_jpake_get_device_key_stop(ctx);
     */
}

/**
 * @brief create security pin action start callback of smart lock service
 * @param ctx          [action context]
 * @param action       [create security pin action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t smart_lock_create_security_pin_start_cb(struct hey_action_ctx *ctx, struct smart_lock_create_security_pin_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "smart_lock create_security_pin action in");
    return -1;
}

/**
 * @brief create security pin action stop callback of smart lock service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void smart_lock_create_security_pin_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: smart_lock_create_security_pin_stop(ctx);
     */
}

/**
 * @brief set security pin action start callback of smart lock service
 * @param ctx          [action context]
 * @param action       [set security pin action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t smart_lock_set_security_pin_start_cb(struct hey_action_ctx *ctx, struct smart_lock_set_security_pin_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "smart_lock set_security_pin action in");
    return -1;
}

/**
 * @brief set security pin action stop callback of smart lock service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void smart_lock_set_security_pin_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: smart_lock_set_security_pin_stop(ctx);
     */
}

/**
 * @brief ec jpake start action start callback of smart lock service
 * @param ctx          [action context]
 * @param action       [ec jpake start action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t smart_lock_ec_jpake_start_start_cb(struct hey_action_ctx *ctx, struct smart_lock_ec_jpake_start_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "smart_lock ec_jpake_start action in");
    return -1;
}

/**
 * @brief ec jpake start action stop callback of smart lock service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void smart_lock_ec_jpake_start_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: smart_lock_ec_jpake_start_stop(ctx);
     */
}

/**
 * @brief lock notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_lock_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief unlock notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_unlock_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief antiprying notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_antiprying_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief antitheft notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_antitheft_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief door not closed notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_door_not_closed_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief unlocked notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_unlocked_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief arming trigger notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_arming_trigger_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief doorbell ringing notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_doorbell_ringing_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief start arming notify result callback of smart lock service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void smart_lock_start_arming_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
