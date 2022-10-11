#include "schema/ahu/ahu_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of ahu service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t ahu_properties_write_cb(size_t count, uint32_t *enumerate, struct ahu_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case AHU_PROPERTY_PRIMARYFILTERSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "primary Filter Sta = %s", properties->primaryfiltersta ? "true" : "false");
            break;
        case AHU_PROPERTY_MEDIUMFILTERSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "medium Filter Sta = %s", properties->mediumfiltersta ? "true" : "false");
            break;
        case AHU_PROPERTY_FINALFILTERSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "final Filter Sta = %s", properties->finalfiltersta ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECPRECIPITATORFAULT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Precipitator Fault = %s", properties->elecprecipitatorfault ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECPRECIPITATORPOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Precipitator Power = %s", properties->elecprecipitatorpower ? "true" : "false");
            break;
        case AHU_PROPERTY_COOLINGVLVFEEDBACK1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cooling Vlv Feedback1 = %d", properties->coolingvlvfeedback1);
            break;
        case AHU_PROPERTY_COOLINGVLVFEEDBACK2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cooling Vlv Feedback2 = %d", properties->coolingvlvfeedback2);
            break;
        case AHU_PROPERTY_COOLINGVLVOPENING1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cooling Vlv Opening1 = %d", properties->coolingvlvopening1);
            break;
        case AHU_PROPERTY_COOLINGVLVOPENING2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cooling Vlv Opening2 = %d", properties->coolingvlvopening2);
            break;
        case AHU_PROPERTY_HEATINGVLVFEEDBACK:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heating Vlv Feedback = %d", properties->heatingvlvfeedback);
            break;
        case AHU_PROPERTY_HEATINGVLVOPENING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "heating Vlv Opening = %d", properties->heatingvlvopening);
            break;
        case AHU_PROPERTY_HUMIDIFIERPOWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "humidifier Power = %s", properties->humidifierpower ? "true" : "false");
            break;
        case AHU_PROPERTY_HUMIDIFIERSFAULT:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "humidifiers Fault = %s", properties->humidifiersfault ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECHEATINGFAULT1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Fault1 = %s", properties->elecheatingfault1 ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECHEATINGMANNULAUTOSTA1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Mannul Auto Sta1 = %s", properties->elecheatingmannulautosta1 ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECHEATINGPOWER1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Power1 = %s", properties->elecheatingpower1 ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECHEATINGTEMP1:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Temp1 = %d", properties->elecheatingtemp1);
            break;
        case AHU_PROPERTY_ELECHEATINGFAULT2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Fault2 = %s", properties->elecheatingfault2 ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECHEATINGMANNULAUTOSTA2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Mannul Auto Sta2 = %s", properties->elecheatingmannulautosta2 ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECHEATINGPOWER2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Power2 = %s", properties->elecheatingpower2 ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECHEATINGTEMP2:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Temp2 = %d", properties->elecheatingtemp2);
            break;
        case AHU_PROPERTY_ELECHEATINGPOWER3:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Power3 = %s", properties->elecheatingpower3 ? "true" : "false");
            break;
        case AHU_PROPERTY_ELECHEATINGFAULT3:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Fault3 = %s", properties->elecheatingfault3 ? "true" : "false");
            break;
        case AHU_PROPERTY_MAXHUMIDITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "max Humidity = %d", properties->maxhumidity);
            break;
        case AHU_PROPERTY_ELECHEATINGTEMPTHRESHOLD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "elec Heating Temp Threshold = %d", properties->elecheatingtempthreshold);
            break;
        case AHU_PROPERTY_MINCOOLINGVLVTEMP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "min Cooling Vlv Temp = %d", properties->mincoolingvlvtemp);
            break;
        case AHU_PROPERTY_HIGHPRESHUMIDIFICATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "high Pres Humidification = %s", properties->highpreshumidification ? "true" : "false");
            break;
        case AHU_PROPERTY_HUMIDIFIEROPENINGFEEDBACK:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "humidifier Opening Feedback = %d", properties->humidifieropeningfeedback);
            break;
        case AHU_PROPERTY_HUMIDIFIEROPENING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "humidifier Opening = %d", properties->humidifieropening);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return ahu_properties_update(count, enumerate, properties);
}

/**
 * @brief device reboot action start callback of ahu service
 * @param ctx          [action context]
 * @param action       [device reboot action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t ahu_device_reboot_start_cb(struct hey_action_ctx *ctx, struct ahu_device_reboot_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "ahu device_reboot action in");
    return -1;
}

/**
 * @brief device reboot action stop callback of ahu service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void ahu_device_reboot_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: ahu_device_reboot_stop(ctx);
     */
}

/**
 * @brief high temp alarm notify result callback of ahu service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void ahu_high_temp_alarm_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
