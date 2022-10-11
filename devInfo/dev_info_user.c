#include "schema/devInfo/dev_info_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of dev info service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t dev_info_properties_write_cb(size_t count, uint32_t *enumerate, struct dev_info_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case DEV_INFO_PROPERTY_DEVNAME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dev Name = %s", properties->devname);
            break;
        case DEV_INFO_PROPERTY_MANUFACTURER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "manufacturer = %s", properties->manufacturer);
            break;
        case DEV_INFO_PROPERTY_MODEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "model = %s", properties->model);
            break;
        case DEV_INFO_PROPERTY_BRAND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "brand = %s", properties->brand);
            break;
        case DEV_INFO_PROPERTY_SOFTVERNAME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "soft Ver Name = %s", properties->softvername);
            break;
        case DEV_INFO_PROPERTY_DID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "did = %ld", properties->did);
            break;
        case DEV_INFO_PROPERTY_PID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pid = %d", properties->pid);
            break;
        case DEV_INFO_PROPERTY_CID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cid = %d", properties->cid);
            break;
        case DEV_INFO_PROPERTY_MAC:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mac = %s", properties->mac);
            break;
        case DEV_INFO_PROPERTY_HARDVER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hard Ver = %s", properties->hardver);
            break;
        case DEV_INFO_PROPERTY_SN:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sn = %s", properties->sn);
            break;
        case DEV_INFO_PROPERTY_PARENTDID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "parent Did = %ld", properties->parentdid);
            break;
        case DEV_INFO_PROPERTY_RSSI:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "rssi = %d", properties->rssi);
            break;
        case DEV_INFO_PROPERTY_BSSID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bssid = %s", properties->bssid);
            break;
        case DEV_INFO_PROPERTY_IP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ip = %s", properties->ip);
            break;
        case DEV_INFO_PROPERTY_DEVTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "dev Time = %s", properties->devtime);
            break;
        case DEV_INFO_PROPERTY_UTC:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "utc = %ld", properties->utc);
            break;
        case DEV_INFO_PROPERTY_TIMEZONE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "timezone = %s", properties->timezone);
            break;
        case DEV_INFO_PROPERTY_SOFTVERCODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "soft Ver Code = %d", properties->softvercode);
            break;
        case DEV_INFO_PROPERTY_SSID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ssid = %s", properties->ssid);
            break;
        case DEV_INFO_PROPERTY_DEVPUBKEY:
            break;
        case DEV_INFO_PROPERTY_VENDORDEVID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vendor Dev Id = %s", properties->vendordevid);
            break;
        case DEV_INFO_PROPERTY_DEVCAPABILITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "devCapability.n_network = %d", properties->devcapability->n_network);
            for (int i = 0; i < properties->devcapability->n_network; i++) {
                hey_printf(HEY_LOG_LEVEL_NOTICE, "devCapability.network[i] = %d", properties->devcapability->network[i]);
            }
            hey_printf(HEY_LOG_LEVEL_NOTICE, "devCapability.cloudconnectable = %d", properties->devcapability->cloudconnectable);
            break;
        case DEV_INFO_PROPERTY_OFFLINETHRESHOLD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "offline Threshold = %d", properties->offlinethreshold);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return dev_info_properties_update(count, enumerate, properties);
}
