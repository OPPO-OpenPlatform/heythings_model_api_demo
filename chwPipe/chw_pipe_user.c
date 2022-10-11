#include "schema/chwPipe/chw_pipe_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of chw pipe service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t chw_pipe_properties_write_cb(size_t count, uint32_t *enumerate, struct chw_pipe_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case CHW_PIPE_PROPERTY_SUPPLYWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "supply Water Temp = %d", properties->supplywatertemp);
            break;
        case CHW_PIPE_PROPERTY_SUPPLYWATERPRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "supplywater Pres = %d", properties->supplywaterpres);
            break;
        case CHW_PIPE_PROPERTY_SUPPLYWATERRATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "supply Water Rate = %d", properties->supplywaterrate);
            break;
        case CHW_PIPE_PROPERTY_RETURNWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "return Water Temp = %d", properties->returnwatertemp);
            break;
        case CHW_PIPE_PROPERTY_RETURNWATERPRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "returnwater Pres = %d", properties->returnwaterpres);
            break;
        case CHW_PIPE_PROPERTY_RETURNWATERRATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "return Water Rate = %d", properties->returnwaterrate);
            break;
        case CHW_PIPE_PROPERTY_COOLINGCAPACITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cooling Capacity = %d", properties->coolingcapacity);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return chw_pipe_properties_update(count, enumerate, properties);
}
