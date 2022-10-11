#include "schema/robotCleaner/robot_cleaner_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of robot cleaner service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t robot_cleaner_properties_write_cb(size_t count, uint32_t *enumerate, struct robot_cleaner_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case ROBOT_CLEANER_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case ROBOT_CLEANER_PROPERTY_OPERATIONMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Mode = %d", properties->operationmode);
            break;
        case ROBOT_CLEANER_PROPERTY_ROBOTJOBSTATUS:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "robot Job Status = %d", properties->robotjobstatus);
            break;
        case ROBOT_CLEANER_PROPERTY_ROBOTCLEANMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "robot Clean Mode = %d", properties->robotcleanmode);
            break;
        case ROBOT_CLEANER_PROPERTY_ROBOTSUCTIONLEVEL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "robot Suction Level = %d", properties->robotsuctionlevel);
            break;
        case ROBOT_CLEANER_PROPERTY_SOUNDVOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sound Volume = %d", properties->soundvolume);
            break;
        case ROBOT_CLEANER_PROPERTY_OPERATIONTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "operation Time = %d", properties->operationtime);
            break;
        case ROBOT_CLEANER_PROPERTY_REMAINTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "remain Time = %d", properties->remaintime);
            break;
        case ROBOT_CLEANER_PROPERTY_CLEANAREA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "clean Area = %d", properties->cleanarea);
            break;
        case ROBOT_CLEANER_PROPERTY_PROCESSINGPERCENTAGE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "processing Percentage = %d", properties->processingpercentage);
            break;
        case ROBOT_CLEANER_PROPERTY_TOTALCLEANTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "total Clean Time = %d", properties->totalcleantime);
            break;
        case ROBOT_CLEANER_PROPERTY_TOTALCLEANAREA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "total Clean Area = %d", properties->totalcleanarea);
            break;
        case ROBOT_CLEANER_PROPERTY_TOTALCYCLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "total Cycle = %d", properties->totalcycle);
            break;
        case ROBOT_CLEANER_PROPERTY_SIDEBRUSHLEFTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "side Brush Left Time = %d", properties->sidebrushlefttime);
            break;
        case ROBOT_CLEANER_PROPERTY_SIDEBRUSHLIFETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "side Brush Life Time = %d", properties->sidebrushlifetime);
            break;
        case ROBOT_CLEANER_PROPERTY_ROLLBRUSHLEFTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "roll Brush Left Time = %d", properties->rollbrushlefttime);
            break;
        case ROBOT_CLEANER_PROPERTY_ROLLBRUSHLIFETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "roll Brush Life Time = %d", properties->rollbrushlifetime);
            break;
        case ROBOT_CLEANER_PROPERTY_HEPALEFTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hepa Left Time = %d", properties->hepalefttime);
            break;
        case ROBOT_CLEANER_PROPERTY_HEPALIFETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "hepa Life Time = %d", properties->hepalifetime);
            break;
        case ROBOT_CLEANER_PROPERTY_FILTERLEFTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "filter Left Time = %d", properties->filterlefttime);
            break;
        case ROBOT_CLEANER_PROPERTY_FILTERLIFTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "filter Lift Time = %d", properties->filterlifttime);
            break;
        case ROBOT_CLEANER_PROPERTY_NODISTURBINGPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.status = %d", properties->nodisturbingperiod->status);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.week = %d", properties->nodisturbingperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.fromhour = %d", properties->nodisturbingperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.fromminute = %d", properties->nodisturbingperiod->fromminute);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.fromsec = %d", properties->nodisturbingperiod->fromsec);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.tohour = %d", properties->nodisturbingperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.tominute = %d", properties->nodisturbingperiod->tominute);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.tosec = %d", properties->nodisturbingperiod->tosec);
            break;
        case ROBOT_CLEANER_PROPERTY_ROBOTSUPPLYWATERRATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "robot Supply Water Rate = %d", properties->robotsupplywaterrate);
            break;
        case ROBOT_CLEANER_PROPERTY_CARPETINCREASESSUCTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "carpet Increases Suction = %s", properties->carpetincreasessuction ? "true" : "false");
            break;
        case ROBOT_CLEANER_PROPERTY_RECTANGLECLEANZONESETINGDETAIL:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROBOT_CLEANER_PROPERTY_RECTANGLEFORBIDDENZONESETINGDETAIL:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROBOT_CLEANER_PROPERTY_ROOMCLEANSETING:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case ROBOT_CLEANER_PROPERTY_CURRENTMAPID:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "current Map Id = %d", properties->currentmapid);
            break;
        case ROBOT_CLEANER_PROPERTY_DESIGNATEDPOINTCLEANSETINGDETAIL:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "designatedPointCleanSetingDetail.x = %d", properties->designatedpointcleansetingdetail->x);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "designatedPointCleanSetingDetail.y = %d", properties->designatedpointcleansetingdetail->y);
            break;
        case ROBOT_CLEANER_PROPERTY_BREAKPOINTRESUMEENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "breakpoint Resume Enabled = %s", properties->breakpointresumeenabled ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return robot_cleaner_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of robot cleaner service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t robot_cleaner_rectanglecleanzonesetingdetail_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of robot cleaner service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t robot_cleaner_rectanglecleanzonesetingdetail_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of robot cleaner service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t robot_cleaner_rectanglecleanzonesetingdetail_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of robot cleaner service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t robot_cleaner_rectangleforbiddenzonesetingdetail_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of robot cleaner service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t robot_cleaner_rectangleforbiddenzonesetingdetail_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of robot cleaner service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t robot_cleaner_rectangleforbiddenzonesetingdetail_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of robot cleaner service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t robot_cleaner_roomcleanseting_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of robot cleaner service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t robot_cleaner_roomcleanseting_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of robot cleaner service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t robot_cleaner_roomcleanseting_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief sound alarm action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [sound alarm action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_sound_alarm_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_sound_alarm_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner sound_alarm action in");
    return -1;
}

/**
 * @brief sound alarm action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_sound_alarm_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_sound_alarm_stop(ctx);
     */
}

/**
 * @brief robot homing action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [robot homing action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_robot_homing_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_robot_homing_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner robot_homing action in");
    return -1;
}

/**
 * @brief robot homing action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_robot_homing_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_robot_homing_stop(ctx);
     */
}

/**
 * @brief stop homing action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [stop homing action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_stop_homing_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_stop_homing_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner stop_homing action in");
    return -1;
}

/**
 * @brief stop homing action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_stop_homing_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_stop_homing_stop(ctx);
     */
}

/**
 * @brief motion control action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [motion control action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_motion_control_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_motion_control_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner motion_control action in");
    return -1;
}

/**
 * @brief motion control action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_motion_control_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_motion_control_stop(ctx);
     */
}

/**
 * @brief side brush reset action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [side brush reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_side_brush_reset_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_side_brush_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner side_brush_reset action in");
    return -1;
}

/**
 * @brief side brush reset action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_side_brush_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_side_brush_reset_stop(ctx);
     */
}

/**
 * @brief roll brush reset action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [roll brush reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_roll_brush_reset_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_roll_brush_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner roll_brush_reset action in");
    return -1;
}

/**
 * @brief roll brush reset action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_roll_brush_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_roll_brush_reset_stop(ctx);
     */
}

/**
 * @brief hepa reset action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [hepa reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_hepa_reset_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_hepa_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner hepa_reset action in");
    return -1;
}

/**
 * @brief hepa reset action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_hepa_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_hepa_reset_stop(ctx);
     */
}

/**
 * @brief filter reset action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [filter reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_filter_reset_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_filter_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner filter_reset action in");
    return -1;
}

/**
 * @brief filter reset action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_filter_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_filter_reset_stop(ctx);
     */
}

/**
 * @brief rectangle clean zone seting action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [rectangle clean zone seting action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_rectangle_clean_zone_seting_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_rectangle_clean_zone_seting_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner rectangle_clean_zone_seting action in");
    return -1;
}

/**
 * @brief rectangle clean zone seting action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_rectangle_clean_zone_seting_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_rectangle_clean_zone_seting_stop(ctx);
     */
}

/**
 * @brief rectangle forbidden zone seting action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [rectangle forbidden zone seting action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_rectangle_forbidden_zone_seting_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_rectangle_forbidden_zone_seting_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner rectangle_forbidden_zone_seting action in");
    return -1;
}

/**
 * @brief rectangle forbidden zone seting action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_rectangle_forbidden_zone_seting_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_rectangle_forbidden_zone_seting_stop(ctx);
     */
}

/**
 * @brief designated point clean action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [designated point clean action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_designated_point_clean_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_designated_point_clean_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner designated_point_clean action in");
    return -1;
}

/**
 * @brief designated point clean action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_designated_point_clean_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_designated_point_clean_stop(ctx);
     */
}

/**
 * @brief designated room clean action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [designated room clean action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_designated_room_clean_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_designated_room_clean_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner designated_room_clean action in");
    return -1;
}

/**
 * @brief designated room clean action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_designated_room_clean_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_designated_room_clean_stop(ctx);
     */
}

/**
 * @brief robot map reset action start callback of robot cleaner service
 * @param ctx          [action context]
 * @param action       [robot map reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t robot_cleaner_robot_map_reset_start_cb(struct hey_action_ctx *ctx, struct robot_cleaner_robot_map_reset_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "robot_cleaner robot_map_reset action in");
    return -1;
}

/**
 * @brief robot map reset action stop callback of robot cleaner service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void robot_cleaner_robot_map_reset_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: robot_cleaner_robot_map_reset_stop(ctx);
     */
}

/**
 * @brief side brush replacement notify result callback of robot cleaner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void robot_cleaner_side_brush_replacement_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief roll brush replacement notify result callback of robot cleaner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void robot_cleaner_roll_brush_replacement_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief hepa replacement notify result callback of robot cleaner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void robot_cleaner_hepa_replacement_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief filter replacement notify result callback of robot cleaner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void robot_cleaner_filter_replacement_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief dust box full notify result callback of robot cleaner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void robot_cleaner_dust_box_full_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief overload protection notify result callback of robot cleaner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void robot_cleaner_overload_protection_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief start regular cleaning notify result callback of robot cleaner service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void robot_cleaner_start_regular_cleaning_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
