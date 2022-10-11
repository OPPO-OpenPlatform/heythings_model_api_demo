#include "schema/wifiManage/wifi_manage_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of wifi manage service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t wifi_manage_properties_write_cb(size_t count, uint32_t *enumerate, struct wifi_manage_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case WIFI_MANAGE_PROPERTY_WIFIAUTOCHANGEENABLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wifi Auto Change Enable = %s", properties->wifiautochangeenable ? "true" : "false");
            break;
        case WIFI_MANAGE_PROPERTY_WIFIAUTOCHANGE:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case WIFI_MANAGE_PROPERTY_AUTOCHANGECONFIGURATION:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return wifi_manage_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of wifi manage service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t wifi_manage_wifiautochange_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of wifi manage service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t wifi_manage_wifiautochange_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of wifi manage service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t wifi_manage_wifiautochange_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of wifi manage service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t wifi_manage_autochangeconfiguration_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of wifi manage service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t wifi_manage_autochangeconfiguration_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of wifi manage service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t wifi_manage_autochangeconfiguration_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief get ssid list action start callback of wifi manage service
 * @param ctx          [action context]
 * @param action       [get ssid list action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t wifi_manage_get_ssid_list_start_cb(struct hey_action_ctx *ctx, struct wifi_manage_get_ssid_list_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "wifi_manage get_ssid_list action in");
    return -1;
}

/**
 * @brief get ssid list action stop callback of wifi manage service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void wifi_manage_get_ssid_list_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: wifi_manage_get_ssid_list_stop(ctx);
     */
}
