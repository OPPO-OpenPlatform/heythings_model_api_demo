#include "schema/router/router_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of router service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t router_properties_write_cb(size_t count, uint32_t *enumerate, struct router_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case ROUTER_PROPERTY_ETHWANINFO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwanInfo.linkstatus = %d", properties->ethwaninfo->linkstatus);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwanInfo.uploadrate = %d", properties->ethwaninfo->uploadrate);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwanInfo.downloadrate = %d", properties->ethwaninfo->downloadrate);
            break;
        case ROUTER_PROPERTY_ETHWANMAC:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwan M A C = %s", properties->ethwanmac);
            break;
        case ROUTER_PROPERTY_ETHWANIP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwan I P = %s", properties->ethwanip);
            break;
        case ROUTER_PROPERTY_ETHWANSUBNET:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwan Subnet = %s", properties->ethwansubnet);
            break;
        case ROUTER_PROPERTY_ETHWANGATEWAY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwan Gateway = %s", properties->ethwangateway);
            break;
        case ROUTER_PROPERTY_ETHWANPRIMARYDNS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwan Primary D N S = %s", properties->ethwanprimarydns);
            break;
        case ROUTER_PROPERTY_ETHWANSECONDARYDNS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ethwan Secondary D N S = %s", properties->ethwansecondarydns);
            break;
        case ROUTER_PROPERTY_ONLINECLIENTNO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "online Client No = %d", properties->onlineclientno);
            break;
        case ROUTER_PROPERTY_CONNECTMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "connect Mode = %d", properties->connectmode);
            break;
        case ROUTER_PROPERTY_PPPOEACCOUNT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pppoe Account = %s", properties->pppoeaccount);
            break;
        case ROUTER_PROPERTY_PPPOEPASSWORD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pppoe Password = %s", properties->pppoepassword);
            break;
        case ROUTER_PROPERTY_PPPOEMTU:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pppoe M T U = %d", properties->pppoemtu);
            break;
        case ROUTER_PROPERTY_DYNAMICMANUALDNSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dynamic Manual Dns Enabled = %s", properties->dynamicmanualdnsenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_DYNAMICMANUALPRIMARYDNS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dynamic Manual Primary D N S = %s", properties->dynamicmanualprimarydns);
            break;
        case ROUTER_PROPERTY_DYNAMICMANUALSECONDARYDNS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dynamic Manual Secondary D N S = %s", properties->dynamicmanualsecondarydns);
            break;
        case ROUTER_PROPERTY_DYNAMICMTU:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dynamic M T U = %d", properties->dynamicmtu);
            break;
        case ROUTER_PROPERTY_STATICIP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "static I P = %s", properties->staticip);
            break;
        case ROUTER_PROPERTY_STATICSUBNET:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "static Subnet = %s", properties->staticsubnet);
            break;
        case ROUTER_PROPERTY_STATICGATEWAY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "static Gateway = %s", properties->staticgateway);
            break;
        case ROUTER_PROPERTY_STATICPRIMARYDNS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "static Primary D N S = %s", properties->staticprimarydns);
            break;
        case ROUTER_PROPERTY_STATICSECONDARYDNS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "static Secondary D N S = %s", properties->staticsecondarydns);
            break;
        case ROUTER_PROPERTY_STATICMTU:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "static M T U = %d", properties->staticmtu);
            break;
        case ROUTER_PROPERTY_LANIP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lan I P = %s", properties->lanip);
            break;
        case ROUTER_PROPERTY_LANSUBNET:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "lan Subnet = %s", properties->lansubnet);
            break;
        case ROUTER_PROPERTY_DHCPENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dhcp Enabled = %s", properties->dhcpenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_DHCPSTARTIP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dhcp Start I P = %s", properties->dhcpstartip);
            break;
        case ROUTER_PROPERTY_DHCPENDIP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dhcp End I P = %s", properties->dhcpendip);
            break;
        case ROUTER_PROPERTY_DHCPMANUALDNSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dhcp Manual D N S Enabled = %s", properties->dhcpmanualdnsenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_DHCPMANUALDNSPRIMARY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dhcp Manual D N S Primary = %s", properties->dhcpmanualdnsprimary);
            break;
        case ROUTER_PROPERTY_DHCPMANUALDNSSECONDARY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dhcp Manual D N S Secondary = %s", properties->dhcpmanualdnssecondary);
            break;
        case ROUTER_PROPERTY_DHCPLEASETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dhcp Lease Time = %d", properties->dhcpleasetime);
            break;
        case ROUTER_PROPERTY_RESERVEIP:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROUTER_PROPERTY_STATICROUTE:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROUTER_PROPERTY_WLANENABLED2P4G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wlan Enabled2p4g = %s", properties->wlanenabled2p4g ? "true" : "false");
            break;
        case ROUTER_PROPERTY_SSID2P4G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ssid2p4g = %s", properties->ssid2p4g);
            break;
        case ROUTER_PROPERTY_HIDESSIDENABLED2P4G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hide Ssid Enabled2p4g = %s", properties->hidessidenabled2p4g ? "true" : "false");
            break;
        case ROUTER_PROPERTY_SERCURITYMODE2P4G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sercurity Mode2p4g = %d", properties->sercuritymode2p4g);
            break;
        case ROUTER_PROPERTY_PASSWORD2P4G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "password2p4g = %s", properties->password2p4g);
            break;
        case ROUTER_PROPERTY_TRANSMITPOWER2P4G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "transmit Power2p4g = %d", properties->transmitpower2p4g);
            break;
        case ROUTER_PROPERTY_WLANENABLED5G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wlan Enabled5g = %s", properties->wlanenabled5g ? "true" : "false");
            break;
        case ROUTER_PROPERTY_SSID5G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ssid5g = %s", properties->ssid5g);
            break;
        case ROUTER_PROPERTY_HIDESSIDENABLED5G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hide Ssid Enabled5g = %s", properties->hidessidenabled5g ? "true" : "false");
            break;
        case ROUTER_PROPERTY_SERCURITYMODE5G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sercurity Mode5g = %d", properties->sercuritymode5g);
            break;
        case ROUTER_PROPERTY_PASSWORD5G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "password5g = %s", properties->password5g);
            break;
        case ROUTER_PROPERTY_TRANSMITPOWER5G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "transmit Power5g = %d", properties->transmitpower5g);
            break;
        case ROUTER_PROPERTY_PRIORITYENABLED5G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "priority Enabled5g = %s", properties->priorityenabled5g ? "true" : "false");
            break;
        case ROUTER_PROPERTY_COMBINEDSSID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "combined S S I D = %s", properties->combinedssid);
            break;
        case ROUTER_PROPERTY_COMBINEDSERCURITYMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "combined Sercurity Mode = %d", properties->combinedsercuritymode);
            break;
        case ROUTER_PROPERTY_COMBINEDPASSWORD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "combined Password = %s", properties->combinedpassword);
            break;
        case ROUTER_PROPERTY_HIDECOMBINEDENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hide Combined Enabled = %s", properties->hidecombinedenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_GUESTWLANENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "guest Wlan Enabled = %s", properties->guestwlanenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_GUESTWLANSSID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "guest Wlan S S I D = %s", properties->guestwlanssid);
            break;
        case ROUTER_PROPERTY_GUESTWLANTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "guest Wlan Time = %d", properties->guestwlantime);
            break;
        case ROUTER_PROPERTY_GUESTWLANSERCURITYMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "guest Wlan Sercurity Mode = %d", properties->guestwlansercuritymode);
            break;
        case ROUTER_PROPERTY_GUESTWLANPASSWORD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "guest Wlan Password = %s", properties->guestwlanpassword);
            break;
        case ROUTER_PROPERTY_GUESTWLANBROADCASTENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "guest Wlan Broadcast Enabled = %s", properties->guestwlanbroadcastenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_WLANFILTERENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wlan Filter Enabled = %s", properties->wlanfilterenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_WLANFILTERTYPE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wlan Filter Type = %d", properties->wlanfiltertype);
            break;
        case ROUTER_PROPERTY_WLANFILTER:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROUTER_PROPERTY_WPSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wps Enabled = %s", properties->wpsenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_CLIENT:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROUTER_PROPERTY_WEBPASSWORD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "web Password = %s", properties->webpassword);
            break;
        case ROUTER_PROPERTY_FIREWALLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "firewall Enabled = %s", properties->firewallenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_MACFILTERENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mac Filter Enabled = %s", properties->macfilterenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_MACFILTERTYPE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mac Filter Type = %d", properties->macfiltertype);
            break;
        case ROUTER_PROPERTY_MACFILTER:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROUTER_PROPERTY_IPFILTERENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ip Filter Enabled = %s", properties->ipfilterenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_IPFILTERTYPE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ip Filter Type = %d", properties->ipfiltertype);
            break;
        case ROUTER_PROPERTY_IPFILTER:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROUTER_PROPERTY_DOMAINFILTERENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "domain Filter Enabled = %s", properties->domainfilterenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_DOMAINFILTER:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROUTER_PROPERTY_DMZENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dmz Enabled = %s", properties->dmzenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_DMZIP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dmz I P = %s", properties->dmzip);
            break;
        case ROUTER_PROPERTY_VIRTUALSERVER:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROUTER_PROPERTY_UPNPENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "upnp Enabled = %s", properties->upnpenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_USBSHAREENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "usb Share Enabled = %s", properties->usbshareenabled ? "true" : "false");
            break;
        case ROUTER_PROPERTY_USBSHAREACCOUNT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "usbShareAccount.account = %d", properties->usbshareaccount->account);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "usbShareAccount.password = %d", properties->usbshareaccount->password);
            break;
        case ROUTER_PROPERTY_PRIORITYWIFIENABLED5G:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "priority Wifi Enabled5g = %s", properties->prioritywifienabled5g ? "true" : "false");
            break;
        case ROUTER_PROPERTY_WIFIQUALITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wifi Quality = %d", properties->wifiquality);
            break;
        case ROUTER_PROPERTY_WIFIMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wifi Mode = %d", properties->wifimode);
            break;
        case ROUTER_PROPERTY_INDICATORLIGHTENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicator Light Enabled = %s", properties->indicatorlightenabled ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return router_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_reserveip_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_reserveip_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_reserveip_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_staticroute_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_staticroute_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_staticroute_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_wlanfilter_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_wlanfilter_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_wlanfilter_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_client_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_client_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_client_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_macfilter_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_macfilter_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_macfilter_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_ipfilter_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_ipfilter_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_ipfilter_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_domainfilter_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_domainfilter_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_domainfilter_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_virtualserver_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_virtualserver_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_virtualserver_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief modify web password action start callback of router service
 * @param ctx          [action context]
 * @param action       [modify web password action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t router_modify_web_password_start_cb(struct hey_action_ctx *ctx, struct router_modify_web_password_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "router modify_web_password action in");
    return -1;
}

/**
 * @brief modify web password action stop callback of router service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void router_modify_web_password_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: router_modify_web_password_stop(ctx);
     */
}

/**
 * @brief device reboot action start callback of router service
 * @param ctx          [action context]
 * @param action       [device reboot action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t router_device_reboot_start_cb(struct hey_action_ctx *ctx, struct router_device_reboot_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "router device_reboot action in");
    return -1;
}

/**
 * @brief device reboot action stop callback of router service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void router_device_reboot_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: router_device_reboot_stop(ctx);
     */
}

/**
 * @brief device restore action start callback of router service
 * @param ctx          [action context]
 * @param action       [device restore action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t router_device_restore_start_cb(struct hey_action_ctx *ctx, struct router_device_restore_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "router device_restore action in");
    return -1;
}

/**
 * @brief device restore action stop callback of router service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void router_device_restore_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: router_device_restore_stop(ctx);
     */
}

/**
 * @brief wifi channel optimization action start callback of router service
 * @param ctx          [action context]
 * @param action       [wifi channel optimization action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t router_wifi_channel_optimization_start_cb(struct hey_action_ctx *ctx, struct router_wifi_channel_optimization_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "router wifi_channel_optimization action in");
    return -1;
}

/**
 * @brief wifi channel optimization action stop callback of router service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void router_wifi_channel_optimization_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: router_wifi_channel_optimization_stop(ctx);
     */
}
