#include "schema/baseLoadChiller/base_load_chiller_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of base load chiller service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t base_load_chiller_properties_write_cb(size_t count, uint32_t *enumerate, struct base_load_chiller_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case BASE_LOAD_CHILLER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case BASE_LOAD_CHILLER_PROPERTY_MANNULAUTOSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mannul Auto Sta = %s", properties->mannulautosta ? "true" : "false");
            break;
        case BASE_LOAD_CHILLER_PROPERTY_FAULTSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fault Sta = %s", properties->faultsta ? "true" : "false");
            break;
        case BASE_LOAD_CHILLER_PROPERTY_SUPPLYWATERRATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "supply Water Rate = %d", properties->supplywaterrate);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CHWSUPPLYWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "chw Supply Water Temp = %d", properties->chwsupplywatertemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CHWRETURNWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "chw Return Water Temp = %d", properties->chwreturnwatertemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CWSUPPLYWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cw Supply Water Temp = %d", properties->cwsupplywatertemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CWRETURNWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cw Return Water Temp = %d", properties->cwreturnwatertemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CHWTARGETSUPPLYWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "chw Target Supply Water Temp = %d", properties->chwtargetsupplywatertemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_EVASATPRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Sat Pres = %d", properties->evasatpres);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_EVASATTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Sat Temp = %d", properties->evasattemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CONSATPRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Sat Pres = %d", properties->consatpres);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CONSATTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Sat Temp = %d", properties->consattemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_EVAAPPTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva App Temp = %d", properties->evaapptemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CONAPPTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con App Temp = %d", properties->conapptemp);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_EVAFLOWSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Flow Sta = %s", properties->evaflowsta ? "true" : "false");
            break;
        case BASE_LOAD_CHILLER_PROPERTY_CONFLOWSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Flow Sta = %s", properties->conflowsta ? "true" : "false");
            break;
        case BASE_LOAD_CHILLER_PROPERTY_COP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cop = %s", properties->cop ? "true" : "false");
            break;
        case BASE_LOAD_CHILLER_PROPERTY_RUNNINGLOAD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Load = %d", properties->runningload);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_RUNNINGTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Time = %d", properties->runningtime);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_GGOPENING1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gg Opening1 = %d", properties->ggopening1);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_GGOPENING2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gg Opening2 = %d", properties->ggopening2);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_GGOPENING3:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gg Opening3 = %d", properties->ggopening3);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_MOTORCOILTEMP1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motor Coil Temp1 = %d", properties->motorcoiltemp1);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_MOTORCOILTEMP2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motor Coil Temp2 = %d", properties->motorcoiltemp2);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_MOTORCOILTEMP3:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motor Coil Temp3 = %d", properties->motorcoiltemp3);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_HVIBRATIONVALUE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "h Vibration Value = %d", properties->hvibrationvalue);
            break;
        case BASE_LOAD_CHILLER_PROPERTY_VVIBRATIONVALUE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "v Vibration Value = %d", properties->vvibrationvalue);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return base_load_chiller_properties_update(count, enumerate, properties);
}
