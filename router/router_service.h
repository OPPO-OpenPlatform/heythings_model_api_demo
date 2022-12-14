/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: router.proto */

#ifndef ROUTER_SERVICE_H
#define ROUTER_SERVICE_H

#include "hey/types.h"

enum ethwan_info_link_status {
    ETHWAN_INFO_LINK_STATUS_UNCONNECTED = 0,
    ETHWAN_INFO_LINK_STATUS_CONNECTING = 1,
    ETHWAN_INFO_LINK_STATUS_CONNECTED = 2
};

enum client_connect_type {
    CLIENT_CONNECT_TYPE_WIRED = 0,
    CLIENT_CONNECT_TYPE_WIRELESS = 1
};

enum ip_filter_protocal {
    IP_FILTER_PROTOCAL_ALL_PROTOCAL = 0,
    IP_FILTER_PROTOCAL_TCP_PROTOCAL = 1,
    IP_FILTER_PROTOCAL_UDP_PROTOCAL = 2,
    IP_FILTER_PROTOCAL_TCP_UDP_PROTOCAL = 3,
    IP_FILTER_PROTOCAL_ICMP_PROTOCAL = 4
};

enum virtual_server_protocal {
    VIRTUAL_SERVER_PROTOCAL_ALL_PROTO = 0,
    VIRTUAL_SERVER_PROTOCAL_TCP_PROTO = 1,
    VIRTUAL_SERVER_PROTOCAL_UDP_PROTO = 2
};

enum router_connect_mode {
    ROUTER_CONNECT_MODE_ONLY_LAN = 0,
    ROUTER_CONNECT_MODE_DYNAMIC_IP = 1,
    ROUTER_CONNECT_MODE_PPPOE = 2,
    ROUTER_CONNECT_MODE_STATIC_IP = 3
};

enum router_sercurity_mode {
    ROUTER_SERCURITY_MODE_NO_ENCRYPTION = 0,
    ROUTER_SERCURITY_MODE_WPA_WPA2_PSK = 1,
    ROUTER_SERCURITY_MODE_WPA2_PSK = 2,
    ROUTER_SERCURITY_MODE_WPA3_SAE = 3,
    ROUTER_SERCURITY_MODE_WEP = 4,
    ROUTER_SERCURITY_MODE_WPA_PSK = 5,
    ROUTER_SERCURITY_MODE_WPA3_MIXED = 6
};

enum router_transmit_power {
    ROUTER_TRANSMIT_POWER_STD = 0,
    ROUTER_TRANSMIT_POWER_STRONG = 1
};

enum router_filter_type {
    ROUTER_FILTER_TYPE_ALLOW = 0,
    ROUTER_FILTER_TYPE_FORBID = 1
};

enum router_wifi_quality {
  /*
   *最优
   */
    ROUTER_WIFI_QUALITY_FIRST_LEVEL = 0,
    ROUTER_WIFI_QUALITY_SECOND_LEVEL = 1,
    ROUTER_WIFI_QUALITY_THIRD_LEVEL = 2,
    ROUTER_WIFI_QUALITY_FOURTH_LEVEL = 3
};

enum router_wifi_mode {
    ROUTER_WIFI_MODE_NOMAL_MODE = 0,
    ROUTER_WIFI_MODE_ENHANCED_MODE = 1
};

struct router_ethwan_info {
    enum ethwan_info_link_status linkstatus;
    uint32_t uploadrate;
    uint32_t downloadrate;
};

struct router_reserve_ip {
    char *devicename;
    char *mac;
    char *ip;
};

struct router_static_route {
    char *destip;
    char *subnetmask;
    char *defaultgateway;
};

struct router_wlan_filter {
    char *devicename;
    char *mac;
};

struct router_client {
    bool isonline;
    enum client_connect_type connecttype;
    char *clientname;
    char *mac;
    char *ipv4;
    char *ipv6;
    uint32_t dhcpremainday;
    uint32_t dhcpremainhour;
    uint32_t dhcpremainminute;
    uint32_t allowinternet;
};

struct router_modify_web_password_in {
    char *oldpassword;
    char *newpassword;
};

struct router_modify_web_password_out {
    char __place_holder__; // make compiler happy
};

struct router_device_reboot_in {
    char __place_holder__; // make compiler happy
};

struct router_device_reboot_out {
    char __place_holder__; // make compiler happy
};

struct router_device_restore_in {
    char __place_holder__; // make compiler happy
};

struct router_device_restore_out {
    char __place_holder__; // make compiler happy
};

struct router_mac_filter {
    char *clientname;
    char *mac;
};

struct router_ip_filter {
    char *wanip;
    enum ip_filter_protocal protocal;
    uint32_t wanstartport;
    uint32_t wanendport;
    char *clientname;
    char *lanip;
    uint32_t lanstartport;
    uint32_t lanendport;
};

struct router_domain_filter {
    char *domain;
};

struct router_virtual_server {
    char *name;
    enum virtual_server_protocal protocal;
    uint32_t wanstartport;
    uint32_t wanendport;
    char *lanip;
    uint32_t lanstartport;
    uint32_t lanendport;
};

struct router_usb_share_account {
    char *account;
    char *password;
};

struct router_wifi_channel_optimization_in {
    char __place_holder__; // make compiler happy
};

struct router_wifi_channel_optimization_out {
    char __place_holder__; // make compiler happy
};

enum ROUTER_PROPERTY {
    ROUTER_PROPERTY_ETHWANINFO = 1,
    ROUTER_PROPERTY_ETHWANMAC = 2,
    ROUTER_PROPERTY_ETHWANIP = 3,
    ROUTER_PROPERTY_ETHWANSUBNET = 4,
    ROUTER_PROPERTY_ETHWANGATEWAY = 5,
    ROUTER_PROPERTY_ETHWANPRIMARYDNS = 6,
    ROUTER_PROPERTY_ETHWANSECONDARYDNS = 7,
    ROUTER_PROPERTY_ONLINECLIENTNO = 8,
    ROUTER_PROPERTY_CONNECTMODE = 9,
    ROUTER_PROPERTY_PPPOEACCOUNT = 10,
    ROUTER_PROPERTY_PPPOEPASSWORD = 11,
    ROUTER_PROPERTY_PPPOEMTU = 12,
    ROUTER_PROPERTY_DYNAMICMANUALDNSENABLED = 13,
    ROUTER_PROPERTY_DYNAMICMANUALPRIMARYDNS = 14,
    ROUTER_PROPERTY_DYNAMICMANUALSECONDARYDNS = 15,
    ROUTER_PROPERTY_DYNAMICMTU = 16,
    ROUTER_PROPERTY_STATICIP = 17,
    ROUTER_PROPERTY_STATICSUBNET = 18,
    ROUTER_PROPERTY_STATICGATEWAY = 19,
    ROUTER_PROPERTY_STATICPRIMARYDNS = 20,
    ROUTER_PROPERTY_STATICSECONDARYDNS = 21,
    ROUTER_PROPERTY_STATICMTU = 22,
    ROUTER_PROPERTY_LANIP = 23,
    ROUTER_PROPERTY_LANSUBNET = 24,
    ROUTER_PROPERTY_DHCPENABLED = 25,
    ROUTER_PROPERTY_DHCPSTARTIP = 26,
    ROUTER_PROPERTY_DHCPENDIP = 27,
    ROUTER_PROPERTY_DHCPMANUALDNSENABLED = 28,
    ROUTER_PROPERTY_DHCPMANUALDNSPRIMARY = 29,
    ROUTER_PROPERTY_DHCPMANUALDNSSECONDARY = 30,
    ROUTER_PROPERTY_DHCPLEASETIME = 31,
    ROUTER_PROPERTY_RESERVEIP = 32,
    ROUTER_PROPERTY_STATICROUTE = 33,
    ROUTER_PROPERTY_WLANENABLED2P4G = 34,
    ROUTER_PROPERTY_SSID2P4G = 35,
    ROUTER_PROPERTY_HIDESSIDENABLED2P4G = 36,
    ROUTER_PROPERTY_SERCURITYMODE2P4G = 37,
    ROUTER_PROPERTY_PASSWORD2P4G = 38,
    ROUTER_PROPERTY_TRANSMITPOWER2P4G = 39,
    ROUTER_PROPERTY_WLANENABLED5G = 40,
    ROUTER_PROPERTY_SSID5G = 41,
    ROUTER_PROPERTY_HIDESSIDENABLED5G = 42,
    ROUTER_PROPERTY_SERCURITYMODE5G = 43,
    ROUTER_PROPERTY_PASSWORD5G = 44,
    ROUTER_PROPERTY_TRANSMITPOWER5G = 45,
    ROUTER_PROPERTY_PRIORITYENABLED5G = 46,
    ROUTER_PROPERTY_COMBINEDSSID = 47,
    ROUTER_PROPERTY_COMBINEDSERCURITYMODE = 48,
    ROUTER_PROPERTY_COMBINEDPASSWORD = 49,
    ROUTER_PROPERTY_HIDECOMBINEDENABLED = 50,
    ROUTER_PROPERTY_GUESTWLANENABLED = 51,
    ROUTER_PROPERTY_GUESTWLANSSID = 52,
    ROUTER_PROPERTY_GUESTWLANTIME = 53,
    ROUTER_PROPERTY_GUESTWLANSERCURITYMODE = 54,
    ROUTER_PROPERTY_GUESTWLANPASSWORD = 55,
    ROUTER_PROPERTY_GUESTWLANBROADCASTENABLED = 56,
    ROUTER_PROPERTY_WLANFILTERENABLED = 57,
    ROUTER_PROPERTY_WLANFILTERTYPE = 58,
    ROUTER_PROPERTY_WLANFILTER = 59,
    ROUTER_PROPERTY_WPSENABLED = 60,
    ROUTER_PROPERTY_CLIENT = 61,
    ROUTER_PROPERTY_WEBPASSWORD = 62,
    ROUTER_PROPERTY_FIREWALLENABLED = 66,
    ROUTER_PROPERTY_MACFILTERENABLED = 67,
    ROUTER_PROPERTY_MACFILTERTYPE = 68,
    ROUTER_PROPERTY_MACFILTER = 69,
    ROUTER_PROPERTY_IPFILTERENABLED = 70,
    ROUTER_PROPERTY_IPFILTERTYPE = 71,
    ROUTER_PROPERTY_IPFILTER = 72,
    ROUTER_PROPERTY_DOMAINFILTERENABLED = 73,
    ROUTER_PROPERTY_DOMAINFILTER = 74,
    ROUTER_PROPERTY_DMZENABLED = 75,
    ROUTER_PROPERTY_DMZIP = 76,
    ROUTER_PROPERTY_VIRTUALSERVER = 77,
    ROUTER_PROPERTY_UPNPENABLED = 78,
    ROUTER_PROPERTY_USBSHAREENABLED = 79,
    ROUTER_PROPERTY_USBSHAREACCOUNT = 80,
    ROUTER_PROPERTY_PRIORITYWIFIENABLED5G = 81,
    ROUTER_PROPERTY_WIFIQUALITY = 82,
    ROUTER_PROPERTY_WIFIMODE = 83,
    ROUTER_PROPERTY_INDICATORLIGHTENABLED = 84
};

enum ROUTER_ACTION {
    ROUTER_ACTION_MODIFY_WEB_PASSWORD = 63,
    ROUTER_ACTION_DEVICE_REBOOT = 64,
    ROUTER_ACTION_DEVICE_RESTORE = 65,
    ROUTER_ACTION_WIFI_CHANNEL_OPTIMIZATION = 85
};

struct router_properties {
    struct router_ethwan_info *ethwaninfo;
    char *ethwanmac;
    char *ethwanip;
    char *ethwansubnet;
    char *ethwangateway;
    char *ethwanprimarydns;
    char *ethwansecondarydns;
    uint32_t onlineclientno;
    enum router_connect_mode connectmode;
    char *pppoeaccount;
    char *pppoepassword;
    uint32_t pppoemtu;
    bool dynamicmanualdnsenabled;
    char *dynamicmanualprimarydns;
    char *dynamicmanualsecondarydns;
    uint32_t dynamicmtu;
    char *staticip;
    char *staticsubnet;
    char *staticgateway;
    char *staticprimarydns;
    char *staticsecondarydns;
    uint32_t staticmtu;
    char *lanip;
    char *lansubnet;
    bool dhcpenabled;
    char *dhcpstartip;
    char *dhcpendip;
    bool dhcpmanualdnsenabled;
    char *dhcpmanualdnsprimary;
    char *dhcpmanualdnssecondary;
    uint32_t dhcpleasetime;
    size_t n_reserveip;
    struct hey_array_node **reserveip;
    size_t n_staticroute;
    struct hey_array_node **staticroute;
    bool wlanenabled2p4g;
    char *ssid2p4g;
    bool hidessidenabled2p4g;
    enum router_sercurity_mode sercuritymode2p4g;
    char *password2p4g;
    enum router_transmit_power transmitpower2p4g;
    bool wlanenabled5g;
    char *ssid5g;
    bool hidessidenabled5g;
    enum router_sercurity_mode sercuritymode5g;
    char *password5g;
    enum router_transmit_power transmitpower5g;
    bool priorityenabled5g;
    char *combinedssid;
    enum router_sercurity_mode combinedsercuritymode;
    char *combinedpassword;
    bool hidecombinedenabled;
    bool guestwlanenabled;
    char *guestwlanssid;
    uint32_t guestwlantime;
    enum router_sercurity_mode guestwlansercuritymode;
    char *guestwlanpassword;
    bool guestwlanbroadcastenabled;
    bool wlanfilterenabled;
    enum router_filter_type wlanfiltertype;
    size_t n_wlanfilter;
    struct hey_array_node **wlanfilter;
    bool wpsenabled;
    size_t n_client;
    struct hey_array_node **client;
    char *webpassword;
    bool firewallenabled;
    bool macfilterenabled;
    enum router_filter_type macfiltertype;
    size_t n_macfilter;
    struct hey_array_node **macfilter;
    bool ipfilterenabled;
    enum router_filter_type ipfiltertype;
    size_t n_ipfilter;
    struct hey_array_node **ipfilter;
    bool domainfilterenabled;
    size_t n_domainfilter;
    struct hey_array_node **domainfilter;
    bool dmzenabled;
    char *dmzip;
    size_t n_virtualserver;
    struct hey_array_node **virtualserver;
    bool upnpenabled;
    bool usbshareenabled;
    struct router_usb_share_account *usbshareaccount;
    bool prioritywifienabled5g;
    enum router_wifi_quality wifiquality;
    enum router_wifi_mode wifimode;
    bool indicatorlightenabled;
};

/**
 * @brief router service initialization
 * @param properties [router service properties]
 * @return int32_t   [initialize result]
*/
int32_t router_service_init(const struct router_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
struct router_reserve_ip *router_reserve_ip_unpack(const uint8_t *data, size_t len);
void router_reserve_ip_free_unpacked(struct router_reserve_ip *data);
// less than 0 means failure
int32_t router_reserve_ip_get_packed_size(const struct router_reserve_ip *data);
// less than 0 means failure
int32_t router_reserve_ip_pack(const struct router_reserve_ip *data, uint8_t *out);

struct router_static_route *router_static_route_unpack(const uint8_t *data, size_t len);
void router_static_route_free_unpacked(struct router_static_route *data);
// less than 0 means failure
int32_t router_static_route_get_packed_size(const struct router_static_route *data);
// less than 0 means failure
int32_t router_static_route_pack(const struct router_static_route *data, uint8_t *out);

struct router_wlan_filter *router_wlan_filter_unpack(const uint8_t *data, size_t len);
void router_wlan_filter_free_unpacked(struct router_wlan_filter *data);
// less than 0 means failure
int32_t router_wlan_filter_get_packed_size(const struct router_wlan_filter *data);
// less than 0 means failure
int32_t router_wlan_filter_pack(const struct router_wlan_filter *data, uint8_t *out);

struct router_client *router_client_unpack(const uint8_t *data, size_t len);
void router_client_free_unpacked(struct router_client *data);
// less than 0 means failure
int32_t router_client_get_packed_size(const struct router_client *data);
// less than 0 means failure
int32_t router_client_pack(const struct router_client *data, uint8_t *out);

struct router_mac_filter *router_mac_filter_unpack(const uint8_t *data, size_t len);
void router_mac_filter_free_unpacked(struct router_mac_filter *data);
// less than 0 means failure
int32_t router_mac_filter_get_packed_size(const struct router_mac_filter *data);
// less than 0 means failure
int32_t router_mac_filter_pack(const struct router_mac_filter *data, uint8_t *out);

struct router_ip_filter *router_ip_filter_unpack(const uint8_t *data, size_t len);
void router_ip_filter_free_unpacked(struct router_ip_filter *data);
// less than 0 means failure
int32_t router_ip_filter_get_packed_size(const struct router_ip_filter *data);
// less than 0 means failure
int32_t router_ip_filter_pack(const struct router_ip_filter *data, uint8_t *out);

struct router_domain_filter *router_domain_filter_unpack(const uint8_t *data, size_t len);
void router_domain_filter_free_unpacked(struct router_domain_filter *data);
// less than 0 means failure
int32_t router_domain_filter_get_packed_size(const struct router_domain_filter *data);
// less than 0 means failure
int32_t router_domain_filter_pack(const struct router_domain_filter *data, uint8_t *out);

struct router_virtual_server *router_virtual_server_unpack(const uint8_t *data, size_t len);
void router_virtual_server_free_unpacked(struct router_virtual_server *data);
// less than 0 means failure
int32_t router_virtual_server_get_packed_size(const struct router_virtual_server *data);
// less than 0 means failure
int32_t router_virtual_server_pack(const struct router_virtual_server *data, uint8_t *out);

/**
 * @brief properties write callback of router service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t router_properties_write_cb(size_t count, uint32_t *enumerate, struct router_properties *properties);

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_reserveip_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_reserveip_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_reserveip_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_staticroute_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_staticroute_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_staticroute_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_wlanfilter_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_wlanfilter_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_wlanfilter_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_client_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_client_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_client_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_macfilter_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_macfilter_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_macfilter_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_ipfilter_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_ipfilter_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_ipfilter_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_domainfilter_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_domainfilter_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_domainfilter_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of router service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t router_virtualserver_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of router service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t router_virtualserver_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of router service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t router_virtualserver_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief update properties of router service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t router_properties_update(size_t count, uint32_t *enumerate, struct router_properties *properties);

/**
 * @brief modify web password action start callback of router service
 * @param ctx          [action context]
 * @param action       [modify web password action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t router_modify_web_password_start_cb(struct hey_action_ctx *ctx, struct router_modify_web_password_in *action, void **user_context);

/**
 * @brief modify web password action send message of router service
 * @param ctx      [action context]
 * @param action   [modify web password action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t router_modify_web_password_send(struct hey_action_ctx *ctx, struct router_modify_web_password_out *action);

/**
 * @brief modify web password action stop of router service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t router_modify_web_password_stop(struct hey_action_ctx *ctx);

/**
 * @brief modify web password action stop callback of router service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void router_modify_web_password_stop_cb(void *user_context);

/**
 * @brief device reboot action start callback of router service
 * @param ctx          [action context]
 * @param action       [device reboot action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t router_device_reboot_start_cb(struct hey_action_ctx *ctx, struct router_device_reboot_in *action, void **user_context);

/**
 * @brief device reboot action send message of router service
 * @param ctx      [action context]
 * @param action   [device reboot action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t router_device_reboot_send(struct hey_action_ctx *ctx, struct router_device_reboot_out *action);

/**
 * @brief device reboot action stop of router service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t router_device_reboot_stop(struct hey_action_ctx *ctx);

/**
 * @brief device reboot action stop callback of router service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void router_device_reboot_stop_cb(void *user_context);

/**
 * @brief device restore action start callback of router service
 * @param ctx          [action context]
 * @param action       [device restore action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t router_device_restore_start_cb(struct hey_action_ctx *ctx, struct router_device_restore_in *action, void **user_context);

/**
 * @brief device restore action send message of router service
 * @param ctx      [action context]
 * @param action   [device restore action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t router_device_restore_send(struct hey_action_ctx *ctx, struct router_device_restore_out *action);

/**
 * @brief device restore action stop of router service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t router_device_restore_stop(struct hey_action_ctx *ctx);

/**
 * @brief device restore action stop callback of router service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void router_device_restore_stop_cb(void *user_context);

/**
 * @brief wifi channel optimization action start callback of router service
 * @param ctx          [action context]
 * @param action       [wifi channel optimization action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t router_wifi_channel_optimization_start_cb(struct hey_action_ctx *ctx, struct router_wifi_channel_optimization_in *action, void **user_context);

/**
 * @brief wifi channel optimization action send message of router service
 * @param ctx      [action context]
 * @param action   [wifi channel optimization action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t router_wifi_channel_optimization_send(struct hey_action_ctx *ctx, struct router_wifi_channel_optimization_out *action);

/**
 * @brief wifi channel optimization action stop of router service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t router_wifi_channel_optimization_stop(struct hey_action_ctx *ctx);

/**
 * @brief wifi channel optimization action stop callback of router service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void router_wifi_channel_optimization_stop_cb(void *user_context);

#endif /* ROUTER_SERVICE_H */
