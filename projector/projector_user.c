#include "schema/projector/projector_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of projector service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t projector_properties_write_cb(size_t count, uint32_t *enumerate, struct projector_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case PROJECTOR_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case PROJECTOR_PROPERTY_SOURCEINPUT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "source Input = %d", properties->sourceinput);
            break;
        case PROJECTOR_PROPERTY_SPEECHCONTROLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "speech Control Enabled = %s", properties->speechcontrolenabled ? "true" : "false");
            break;
        case PROJECTOR_PROPERTY_GESTURECONTROLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gesture Control Enabled = %s", properties->gesturecontrolenabled ? "true" : "false");
            break;
        case PROJECTOR_PROPERTY_ECO:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eco = %s", properties->eco ? "true" : "false");
            break;
        case PROJECTOR_PROPERTY_SOUNDVOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sound Volume = %d", properties->soundvolume);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return projector_properties_update(count, enumerate, properties);
}
