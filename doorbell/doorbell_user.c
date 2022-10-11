#include "schema/doorbell/doorbell_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of doorbell service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t doorbell_properties_write_cb(size_t count, uint32_t *enumerate, struct doorbell_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case DOORBELL_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_VOICECHANGERMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "voice Changer Mode = %d", properties->voicechangermode);
            break;
        case DOORBELL_PROPERTY_MUTE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "mute = %s", properties->mute ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_SOUNDVOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sound Volume = %d", properties->soundvolume);
            break;
        case DOORBELL_PROPERTY_RESOLUTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "resolution = %d", properties->resolution);
            break;
        case DOORBELL_PROPERTY_MOTIONDETECTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motion Detection Enabled = %s", properties->motiondetectionenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_MOTIONDETECTIONDISTANCE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motion Detection Distance = %d", properties->motiondetectiondistance);
            break;
        case DOORBELL_PROPERTY_MOTIONDETECTIONRECORDDURATION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motion Detection Record Duration = %d", properties->motiondetectionrecordduration);
            break;
        case DOORBELL_PROPERTY_ANTIPRYINGALARMENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "antiprying Alarm Enabled = %s", properties->antipryingalarmenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_AUTOREPLYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Reply Enabled = %s", properties->autoreplyenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_AUTOREPLYWORKINGPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "autoReplyWorkingPeriod.week = %d", properties->autoreplyworkingperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "autoReplyWorkingPeriod.fromhour = %d", properties->autoreplyworkingperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "autoReplyWorkingPeriod.frommin = %d", properties->autoreplyworkingperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "autoReplyWorkingPeriod.tohour = %d", properties->autoreplyworkingperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "autoReplyWorkingPeriod.tomin = %d", properties->autoreplyworkingperiod->tomin);
            break;
        case DOORBELL_PROPERTY_LEAVINGWORDSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "leaving Words Enabled = %s", properties->leavingwordsenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_LEAVINGWORDSWORKINGPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "leavingWordsWorkingPeriod.week = %d", properties->leavingwordsworkingperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "leavingWordsWorkingPeriod.fromhour = %d", properties->leavingwordsworkingperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "leavingWordsWorkingPeriod.frommin = %d", properties->leavingwordsworkingperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "leavingWordsWorkingPeriod.tohour = %d", properties->leavingwordsworkingperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "leavingWordsWorkingPeriod.tomin = %d", properties->leavingwordsworkingperiod->tomin);
            break;
        case DOORBELL_PROPERTY_RINGINGSOUND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ringing Sound = %d", properties->ringingsound);
            break;
        case DOORBELL_PROPERTY_NODISTURBINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "no Disturbing Enabled = %s", properties->nodisturbingenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_NODISTURBINGPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.week = %d", properties->nodisturbingperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.fromhour = %d", properties->nodisturbingperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.frommin = %d", properties->nodisturbingperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.tohour = %d", properties->nodisturbingperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "noDisturbingPeriod.tomin = %d", properties->nodisturbingperiod->tomin);
            break;
        case DOORBELL_PROPERTY_PUSHDOORBELLRINGINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Doorbell Ringing Enabled = %s", properties->pushdoorbellringingenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_PUSHPASSINGBYDOORENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Passing By Door Enabled = %s", properties->pushpassingbydoorenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_PUSHSTANDINGINDOORWAYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Standing In Doorway Enabled = %s", properties->pushstandingindoorwayenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_PUSHMOTIONDETECTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Motion Detection Enabled = %s", properties->pushmotiondetectionenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_PUSHLEAVINGWORDSENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Leaving Words Enabled = %s", properties->pushleavingwordsenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_PUSHDOORBELLRINGINGSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Doorbell Ringing Silent Time = %d", properties->pushdoorbellringingsilenttime);
            break;
        case DOORBELL_PROPERTY_PUSHANTIPRYINGALARMSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Antiprying Alarm Silent Time = %d", properties->pushantipryingalarmsilenttime);
            break;
        case DOORBELL_PROPERTY_PUSHPASSINGBYDOORSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Passing By Door Silent Time = %d", properties->pushpassingbydoorsilenttime);
            break;
        case DOORBELL_PROPERTY_PUSHSTANDINGINDOORWAYSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Standing In Doorway Silent Time = %d", properties->pushstandingindoorwaysilenttime);
            break;
        case DOORBELL_PROPERTY_PUSHMOTIONDETECTIONSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Motion Detection Silent Time = %d", properties->pushmotiondetectionsilenttime);
            break;
        case DOORBELL_PROPERTY_PUSHLEAVINGWORDSSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Leaving Words Silent Time = %d", properties->pushleavingwordssilenttime);
            break;
        case DOORBELL_PROPERTY_NIGHTVISIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "night Vision Enabled = %s", properties->nightvisionenabled ? "true" : "false");
            break;
        case DOORBELL_PROPERTY_MOTIONDETECTIONWORKINGPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motionDetectionWorkingPeriod.week = %d", properties->motiondetectionworkingperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motionDetectionWorkingPeriod.fromhour = %d", properties->motiondetectionworkingperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motionDetectionWorkingPeriod.frommin = %d", properties->motiondetectionworkingperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motionDetectionWorkingPeriod.tohour = %d", properties->motiondetectionworkingperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motionDetectionWorkingPeriod.tomin = %d", properties->motiondetectionworkingperiod->tomin);
            break;
        case DOORBELL_PROPERTY_PUSHMOTIONDETECTPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushMotionDetectPeriod.week = %d", properties->pushmotiondetectperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushMotionDetectPeriod.fromhour = %d", properties->pushmotiondetectperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushMotionDetectPeriod.frommin = %d", properties->pushmotiondetectperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushMotionDetectPeriod.tohour = %d", properties->pushmotiondetectperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushMotionDetectPeriod.tomin = %d", properties->pushmotiondetectperiod->tomin);
            break;
        case DOORBELL_PROPERTY_PUSHSTANDINGINDOORWAYPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushStandingInDoorwayPeriod.week = %d", properties->pushstandingindoorwayperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushStandingInDoorwayPeriod.fromhour = %d", properties->pushstandingindoorwayperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushStandingInDoorwayPeriod.frommin = %d", properties->pushstandingindoorwayperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushStandingInDoorwayPeriod.tohour = %d", properties->pushstandingindoorwayperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushStandingInDoorwayPeriod.tomin = %d", properties->pushstandingindoorwayperiod->tomin);
            break;
        case DOORBELL_PROPERTY_PUSHPASSINGBYDOORPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushPassingByDoorPeriod.week = %d", properties->pushpassingbydoorperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushPassingByDoorPeriod.fromhour = %d", properties->pushpassingbydoorperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushPassingByDoorPeriod.frommin = %d", properties->pushpassingbydoorperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushPassingByDoorPeriod.tohour = %d", properties->pushpassingbydoorperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushPassingByDoorPeriod.tomin = %d", properties->pushpassingbydoorperiod->tomin);
            break;
        case DOORBELL_PROPERTY_PUSHDOORBELLRINGINGPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushDoorbellRingingPeriod.week = %d", properties->pushdoorbellringingperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushDoorbellRingingPeriod.fromhour = %d", properties->pushdoorbellringingperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushDoorbellRingingPeriod.frommin = %d", properties->pushdoorbellringingperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushDoorbellRingingPeriod.tohour = %d", properties->pushdoorbellringingperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushDoorbellRingingPeriod.tomin = %d", properties->pushdoorbellringingperiod->tomin);
            break;
        case DOORBELL_PROPERTY_PUSHLEAVINGWORDSPERIOD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushLeavingWordsPeriod.week = %d", properties->pushleavingwordsperiod->week);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushLeavingWordsPeriod.fromhour = %d", properties->pushleavingwordsperiod->fromhour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushLeavingWordsPeriod.frommin = %d", properties->pushleavingwordsperiod->frommin);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushLeavingWordsPeriod.tohour = %d", properties->pushleavingwordsperiod->tohour);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "pushLeavingWordsPeriod.tomin = %d", properties->pushleavingwordsperiod->tomin);
            break;
        case DOORBELL_PROPERTY_LEAVEWORD:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case DOORBELL_PROPERTY_AUTOREPLY:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case DOORBELL_PROPERTY_PASSINGBYDOORTHRESHOLD:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "passing By Door Threshold = %d", properties->passingbydoorthreshold);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return doorbell_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of doorbell service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t doorbell_leaveword_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of doorbell service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t doorbell_leaveword_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of doorbell service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t doorbell_leaveword_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of doorbell service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t doorbell_autoreply_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of doorbell service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t doorbell_autoreply_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of doorbell service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t doorbell_autoreply_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief doorbell ringing notify result callback of doorbell service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void doorbell_doorbell_ringing_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief antiprying alarm notify result callback of doorbell service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void doorbell_antiprying_alarm_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief motion detection start notify result callback of doorbell service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void doorbell_motion_detection_start_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief leaving words notify result callback of doorbell service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void doorbell_leaving_words_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief motion detection end notify result callback of doorbell service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void doorbell_motion_detection_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
