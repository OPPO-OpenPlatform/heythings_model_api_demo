#include "schema/earphone/earphone_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of earphone service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t earphone_properties_write_cb(size_t count, uint32_t *enumerate, struct earphone_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case EARPHONE_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case EARPHONE_PROPERTY_MODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mode = %d", properties->mode);
            break;
        case EARPHONE_PROPERTY_BOXCOVERSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "box Cover Status = %s", properties->boxcoverstatus ? "true" : "false");
            break;
        case EARPHONE_PROPERTY_WEARSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wear Sta = %d", properties->wearsta);
            break;
        case EARPHONE_PROPERTY_INBOXSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "in Box Sta = %d", properties->inboxsta);
            break;
        case EARPHONE_PROPERTY_SPEECHCONTROLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "speech Control Enabled = %s", properties->speechcontrolenabled ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return earphone_properties_update(count, enumerate, properties);
}
