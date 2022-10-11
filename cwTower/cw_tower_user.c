#include "schema/cwTower/cw_tower_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of cw tower service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t cw_tower_properties_write_cb(size_t count, uint32_t *enumerate, struct cw_tower_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case CW_TOWER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case CW_TOWER_PROPERTY_MANNULAUTOSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mannul Auto Sta = %s", properties->mannulautosta ? "true" : "false");
            break;
        case CW_TOWER_PROPERTY_FAULTSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fault Sta = %s", properties->faultsta ? "true" : "false");
            break;
        case CW_TOWER_PROPERTY_HLSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hl Sta = %s", properties->hlsta ? "true" : "false");
            break;
        case CW_TOWER_PROPERTY_LLSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ll Sta = %s", properties->llsta ? "true" : "false");
            break;
        case CW_TOWER_PROPERTY_WINDSPEED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wind Speed = %d", properties->windspeed);
            break;
        case CW_TOWER_PROPERTY_FREQSETTING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freq Setting = %d", properties->freqsetting);
            break;
        case CW_TOWER_PROPERTY_FREQFEEDBACK:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "freq Feedback = %d", properties->freqfeedback);
            break;
        case CW_TOWER_PROPERTY_VIBRATIONSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "vibration Sta = %s", properties->vibrationsta ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return cw_tower_properties_update(count, enumerate, properties);
}
