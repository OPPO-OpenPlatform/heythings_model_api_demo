#include "schema/mobileNetwork/mobile_network_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of mobile network service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t mobile_network_properties_write_cb(size_t count, uint32_t *enumerate, struct mobile_network_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case MOBILE_NETWORK_PROPERTY_NETWORKINFO:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case MOBILE_NETWORK_PROPERTY_MOBILENETWORKIPV4:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile Network I Pv4 = %s", properties->mobilenetworkipv4);
            break;
        case MOBILE_NETWORK_PROPERTY_MOBILENETWORKIPV6:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile Network I Pv6 = %s", properties->mobilenetworkipv6);
            break;
        case MOBILE_NETWORK_PROPERTY_CELLID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cell I D = %s", properties->cellid);
            break;
        case MOBILE_NETWORK_PROPERTY_RSRP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "rsrp = %s", properties->rsrp);
            break;
        case MOBILE_NETWORK_PROPERTY_PLMN:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "plmn = %s", properties->plmn);
            break;
        case MOBILE_NETWORK_PROPERTY_IMEI:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "imei = %s", properties->imei);
            break;
        case MOBILE_NETWORK_PROPERTY_IMSI:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "imsi = %s", properties->imsi);
            break;
        case MOBILE_NETWORK_PROPERTY_MOBILENETWORKENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile Network Enabled = %s", properties->mobilenetworkenabled ? "true" : "false");
            break;
        case MOBILE_NETWORK_PROPERTY_MOBILENETWORKROMINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile Network Roming Enabled = %s", properties->mobilenetworkromingenabled ? "true" : "false");
            break;
        case MOBILE_NETWORK_PROPERTY_MOBILENETWORKMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile Network Mode = %d", properties->mobilenetworkmode);
            break;
        case MOBILE_NETWORK_PROPERTY_SIMPIN:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sim P I N = %s", properties->simpin);
            break;
        case MOBILE_NETWORK_PROPERTY_APN:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case MOBILE_NETWORK_PROPERTY_MOBILEGATEWAY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile Gateway = %s", properties->mobilegateway);
            break;
        case MOBILE_NETWORK_PROPERTY_MOBILEDNS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile D N S = %s", properties->mobiledns);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return mobile_network_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of mobile network service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t mobile_network_networkinfo_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of mobile network service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t mobile_network_networkinfo_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of mobile network service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t mobile_network_networkinfo_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of mobile network service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t mobile_network_apn_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of mobile network service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t mobile_network_apn_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of mobile network service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t mobile_network_apn_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief signal test action start callback of mobile network service
 * @param ctx          [action context]
 * @param action       [signal test action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t mobile_network_signal_test_start_cb(struct hey_action_ctx *ctx, struct mobile_network_signal_test_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile_network signal_test action in");
    return -1;
}

/**
 * @brief signal test action stop callback of mobile network service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void mobile_network_signal_test_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: mobile_network_signal_test_stop(ctx);
     */
}

/**
 * @brief modify pin action start callback of mobile network service
 * @param ctx          [action context]
 * @param action       [modify pin action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t mobile_network_modify_pin_start_cb(struct hey_action_ctx *ctx, struct mobile_network_modify_pin_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "mobile_network modify_pin action in");
    return -1;
}

/**
 * @brief modify pin action stop callback of mobile network service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void mobile_network_modify_pin_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: mobile_network_modify_pin_stop(ctx);
     */
}
