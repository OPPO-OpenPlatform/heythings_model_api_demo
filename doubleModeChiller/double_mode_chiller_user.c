#include "schema/doubleModeChiller/double_mode_chiller_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of double mode chiller service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t double_mode_chiller_properties_write_cb(size_t count, uint32_t *enumerate, struct double_mode_chiller_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case DOUBLE_MODE_CHILLER_PROPERTY_GGOPENING1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gg Opening1 = %d", properties->ggopening1);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_GGOPENING1PEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gg Opening1 Peer = %d", properties->ggopening1peer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_GGOPENING2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gg Opening2 = %d", properties->ggopening2);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_GGOPENING2PEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "gg Opening2 Peer = %d", properties->ggopening2peer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_MOTORCOILTEMP1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motor Coil Temp1 = %d", properties->motorcoiltemp1);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_MOTORCOILTEMP1PEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motor Coil Temp1 Peer = %d", properties->motorcoiltemp1peer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CONAPPTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con App Temp = %d", properties->conapptemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CONAPPTEMPPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con App Temp Peer = %d", properties->conapptemppeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EATEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ea Temp = %d", properties->eatemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EATEMPPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ea Temp Peer = %d", properties->eatemppeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_AVERAGECURRENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "average Current = %d", properties->averagecurrent);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_AVERAGECURRENTPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "average Current Peer = %d", properties->averagecurrentpeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_ACOILPRESSURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ac Oil Pressure = %d", properties->acoilpressure);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_ACOILPRESSUREPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ac Oil Pressure Peer = %d", properties->acoilpressurepeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_ACRUNNINGTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ac Running Time = %d", properties->acrunningtime);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_ACRUNNINGTIMEPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ac Running Time Peer = %d", properties->acrunningtimepeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_OILTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oil Temp = %d", properties->oiltemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_OILTEMPPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oil Temp Peer = %d", properties->oiltemppeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EVAAPPTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva App Temp = %d", properties->evaapptemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EVAAPPTEMPPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva App Temp Peer = %d", properties->evaapptemppeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_ACSTARTUPNUM:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ac Start Up Num = %d", properties->acstartupnum);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_ACSTARTUPNUMPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ac Start Up Num Peer = %d", properties->acstartupnumpeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CHWSUPPLYWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "chw Supply Water Temp = %d", properties->chwsupplywatertemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CHWRETURNWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "chw Return Water Temp = %d", properties->chwreturnwatertemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CONSATTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Sat Temp = %d", properties->consattemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CONSATTEMPPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Sat Temp Peer = %d", properties->consattemppeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CONSATPRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Sat Pres = %d", properties->consatpres);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CONSATPRESPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Sat Pres Peer = %d", properties->consatprespeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CWSUPPLYWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cw Supply Water Temp = %d", properties->cwsupplywatertemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CWRETURNWATERTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cw Return Water Temp = %d", properties->cwreturnwatertemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_RUNNINGLOAD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Load = %d", properties->runningload);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_RUNNINGLOADPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Load Peer = %d", properties->runningloadpeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EVASATTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Sat Temp = %d", properties->evasattemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EVASATTEMPPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Sat Temp Peer = %d", properties->evasattemppeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EVASATPRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Sat Pres = %d", properties->evasatpres);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EVASATPRESPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Sat Pres Peer = %d", properties->evasatprespeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_L1CURRENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "l1 Current = %d", properties->l1current);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_L1CURRENTPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "l1 Current Peer = %d", properties->l1currentpeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_L2CURRENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "l2 Current = %d", properties->l2current);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_L2CURRENTPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "l2 Current Peer = %d", properties->l2currentpeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_L3CURRENT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "l3 Current = %d", properties->l3current);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_L3CURRENTPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "l3 Current Peer = %d", properties->l3currentpeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CONFLOWSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Flow Sta = %s", properties->conflowsta ? "true" : "false");
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CONFLOWSTAPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "con Flow Sta Peer = %s", properties->conflowstapeer ? "true" : "false");
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EVAFLOWSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Flow Sta = %s", properties->evaflowsta ? "true" : "false");
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_EVAFLOWSTAPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "eva Flow Sta Peer = %s", properties->evaflowstapeer ? "true" : "false");
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_AUTOTURNONTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Turn On Temp = %d", properties->autoturnontemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_AUTOTURNOFFTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Turn Off Temp = %d", properties->autoturnofftemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_COOLINGCAPACITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cooling Capacity = %d", properties->coolingcapacity);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_COP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cop = %d", properties->cop);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CWTARGETRETURNTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cw Target Return Temp = %d", properties->cwtargetreturntemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_SUPPLYWATERRATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "supply Water Rate = %d", properties->supplywaterrate);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_RUNNINGPOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Power = %d", properties->runningpower);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_RUNNINGPOWERPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "running Power Peer = %d", properties->runningpowerpeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_MANNULAUTOSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mannul Auto Sta = %s", properties->mannulautosta ? "true" : "false");
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CHWTARGETSUPPLYTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "chw Target Supply Temp = %d", properties->chwtargetsupplytemp);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CHWTARGETSUPPLYTEMPPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "chw Target Supply Temp Peer = %d", properties->chwtargetsupplytemppeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_ABVOLTAGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ab Voltage = %d", properties->abvoltage);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_ABVOLTAGEPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ab Voltage Peer = %d", properties->abvoltagepeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_BCVOLTAGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bc Voltage = %d", properties->bcvoltage);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_BCVOLTAGEPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bc Voltage Peer = %d", properties->bcvoltagepeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CAVOLTAGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ca Voltage = %d", properties->cavoltage);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_CAVOLTAGEPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ca Voltage Peer = %d", properties->cavoltagepeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_MAXRUNNINGLOAD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "max Running Load = %d", properties->maxrunningload);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_MAXRUNNINGLOADPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "max Running Load Peer = %d", properties->maxrunningloadpeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_OILPUMPPRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oil Pump Pres = %d", properties->oilpumppres);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_OILPUMPPRESPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oil Pump Pres Peer = %d", properties->oilpumpprespeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_OILTANKPRES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oil Tank Pres = %d", properties->oiltankpres);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_OILTANKPRESPEER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "oil Tank Pres Peer = %d", properties->oiltankprespeer);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_HVIBRATIONVALUE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "h Vibration Value = %d", properties->hvibrationvalue);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_VVIBRATIONVALUE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "v Vibration Value = %d", properties->vvibrationvalue);
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case DOUBLE_MODE_CHILLER_PROPERTY_FAULTSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fault Sta = %s", properties->faultsta ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return double_mode_chiller_properties_update(count, enumerate, properties);
}

/**
 * @brief invalid alarm notify result callback of double mode chiller service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void double_mode_chiller_invalid_alarm_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
