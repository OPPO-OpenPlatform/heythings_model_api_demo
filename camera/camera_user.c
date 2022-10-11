#include "schema/camera/camera_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of camera service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t camera_properties_write_cb(size_t count, uint32_t *enumerate, struct camera_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case CAMERA_PROPERTY_POWER:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "power = %s", properties->power ? "true" : "false");
            break;
        case CAMERA_PROPERTY_RECORDMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Mode = %d", properties->recordmode);
            break;
        case CAMERA_PROPERTY_RESOLUTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "resolution = %d", properties->resolution);
            break;
        case CAMERA_PROPERTY_NIGHTVISIONSTA:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "night Vision Sta = %d", properties->nightvisionsta);
            break;
        case CAMERA_PROPERTY_RECORDMUTE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Mute = %s", properties->recordmute ? "true" : "false");
            break;
        case CAMERA_PROPERTY_AUTODETECTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Detection Enabled = %s", properties->autodetectionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_FIXEDPOSITIONDETECTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "fixed Position Detection Enabled = %s", properties->fixedpositiondetectionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_AUTOCRUISEDETECTION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "auto Cruise Detection = %d", properties->autocruisedetection);
            break;
        case CAMERA_PROPERTY_FACERECOGNITIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "face Recognition Enabled = %s", properties->facerecognitionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_MULTIMEDIAWITHTIMEWATERMARK:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "multimedia With Time Watermark = %s", properties->multimediawithtimewatermark ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHMOTIONDETECTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Motion Detection Enabled = %s", properties->pushmotiondetectionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHMOTIONDETECTIONSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Motion Detection Silent Time = %d", properties->pushmotiondetectionsilenttime);
            break;
        case CAMERA_PROPERTY_CAMERASENSITIVITY:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "camera Sensitivity = %d", properties->camerasensitivity);
            break;
        case CAMERA_PROPERTY_FAVOURITECRUISEDPOSITION:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_FIXEDPOSITIONFORRECORD:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_CRYDETECTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "cry Detection Enabled = %s", properties->crydetectionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHCRYDETECTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Cry Detection Enabled = %s", properties->pushcrydetectionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHCRYDETECTIONSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Cry Detection Silent Time = %d", properties->pushcrydetectionsilenttime);
            break;
        case CAMERA_PROPERTY_APPEASINGBABYENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appeasing Baby Enabled = %s", properties->appeasingbabyenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_INDICATORLIGHTENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "indicator Light Enabled = %s", properties->indicatorlightenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_CORRECTLENDISTORTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "correct Len Distortion Enabled = %s", properties->correctlendistortionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_WDRENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "wdr Enabled = %s", properties->wdrenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHFACERECOGNITIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Face Recognition Enabled = %s", properties->pushfacerecognitionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHFACERECOGNITIONSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Face Recognition Silent Time = %d", properties->pushfacerecognitionsilenttime);
            break;
        case CAMERA_PROPERTY_FIXEDPOSITIONANDTIMERECORD:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_APPEASINGBABYWORKINGPERIOD:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_AUTODETECTIONWORKINGPERIOD:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_MOTIONTRACKINGENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "motion Tracking Enabled = %s", properties->motiontrackingenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_SOUNDALARMTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sound Alarm Time = %d", properties->soundalarmtime);
            break;
        case CAMERA_PROPERTY_SOUNDALARMVOLUME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sound Alarm Volume = %d", properties->soundalarmvolume);
            break;
        case CAMERA_PROPERTY_RINGINGSOUND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "ringing Sound = %d", properties->ringingsound);
            break;
        case CAMERA_PROPERTY_RECORDMOTIONDETECTIONSILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Motion Detection Silence Time = %d", properties->recordmotiondetectionsilencetime);
            break;
        case CAMERA_PROPERTY_RECORDHUMANMOTIONSILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Human Motion Silence Time = %d", properties->recordhumanmotionsilencetime);
            break;
        case CAMERA_PROPERTY_RECORDANIMALMOTIONSILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Animal Motion Silence Time = %d", properties->recordanimalmotionsilencetime);
            break;
        case CAMERA_PROPERTY_RECORDCRYDETECTIONSILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Cry Detection Silence Time = %d", properties->recordcrydetectionsilencetime);
            break;
        case CAMERA_PROPERTY_RECORDFACERECOGNITIONSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Face Recognition Silent Time = %d", properties->recordfacerecognitionsilenttime);
            break;
        case CAMERA_PROPERTY_APPEASINGBABYMUSIC:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_APPEASINGBABYMUSICPLAYMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appeasingBabyMusicPlayMode.playmode = %d", properties->appeasingbabymusicplaymode->playmode);
            break;
        case CAMERA_PROPERTY_APPEASINGBABYMUSICPLAYSETTING:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appeasingBabyMusicPlaySetting.fileurl = %d", properties->appeasingbabymusicplaysetting->fileurl);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "appeasingBabyMusicPlaySetting.time = %d", properties->appeasingbabymusicplaysetting->time);
            break;
        case CAMERA_PROPERTY_PUSHHUMANMOTIONSILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Human Motion Silence Time = %d", properties->pushhumanmotionsilencetime);
            break;
        case CAMERA_PROPERTY_PUSHANIMALMOTIONSILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Animal Motion Silence Time = %d", properties->pushanimalmotionsilencetime);
            break;
        case CAMERA_PROPERTY_PUSHHUMANMOTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Human Motion Enabled = %s", properties->pushhumanmotionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHANIMALMOTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Animal Motion Enabled = %s", properties->pushanimalmotionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_VOICEMEMO:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_FACESOURCE:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_PUSHPICTURECHANGEENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Picture Change Enabled = %s", properties->pushpicturechangeenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHPICTURECHANGESILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Picture Change Silence Time = %d", properties->pushpicturechangesilencetime);
            break;
        case CAMERA_PROPERTY_RECORDPICTURECHANGESILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Picture Change Silence Time = %d", properties->recordpicturechangesilencetime);
            break;
        case CAMERA_PROPERTY_VOICEMEMOPLAYCONDITION:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_PUSHCATMOTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Cat Motion Enabled = %s", properties->pushcatmotionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHDOGMOTIONENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Dog Motion Enabled = %s", properties->pushdogmotionenabled ? "true" : "false");
            break;
        case CAMERA_PROPERTY_PUSHCATMOTIONSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Cat Motion Silent Time = %d", properties->pushcatmotionsilenttime);
            break;
        case CAMERA_PROPERTY_PUSHDOGMOTIONSILENTTIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "push Dog Motion Silent Time = %d", properties->pushdogmotionsilenttime);
            break;
        case CAMERA_PROPERTY_RECORDCATMOTIONSILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Cat Motion Silence Time = %d", properties->recordcatmotionsilencetime);
            break;
        case CAMERA_PROPERTY_RECORDDOGMOTIONSILENCETIME:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "record Dog Motion Silence Time = %d", properties->recorddogmotionsilencetime);
            break;
        case CAMERA_PROPERTY_EVENTVIDEOUPLOADCLOUDENABLE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "event Video Upload Cloud Enable = %s", properties->eventvideouploadcloudenable ? "true" : "false");
            break;
        case CAMERA_PROPERTY_GROUPOFPICTURES:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "group Of Pictures = %d", properties->groupofpictures);
            break;
        case CAMERA_PROPERTY_FRAMESPERSECOND:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "frames Per Second = %d", properties->framespersecond);
            break;
        case CAMERA_PROPERTY_PICTUREFLIPMODE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "picture Flip Mode = %d", properties->pictureflipmode);
            break;
        case CAMERA_PROPERTY_LIMITEDPOSITION:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "limitedPosition.maxhorizontalangle = %d", properties->limitedposition->maxhorizontalangle);
            hey_printf(HEY_LOG_LEVEL_NOTICE, "limitedPosition.maxverticalangle = %d", properties->limitedposition->maxverticalangle);
            break;
        case CAMERA_PROPERTY_SLEEPMODEWORKINGPERIOD:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case CAMERA_PROPERTY_BITRATE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "bit Rate = %d", properties->bitrate);
            break;
        case CAMERA_PROPERTY_SLEEP:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "sleep = %s", properties->sleep ? "true" : "false");
            break;
        case CAMERA_PROPERTY_ONETOUCHCALLENABLED:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "one Touch Call Enabled = %s", properties->onetouchcallenabled ? "true" : "false");
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return camera_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_favouritecruisedposition_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_favouritecruisedposition_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_favouritecruisedposition_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_fixedpositionforrecord_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_fixedpositionforrecord_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_fixedpositionforrecord_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_fixedpositionandtimerecord_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_fixedpositionandtimerecord_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_fixedpositionandtimerecord_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_appeasingbabyworkingperiod_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_appeasingbabyworkingperiod_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_appeasingbabyworkingperiod_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_autodetectionworkingperiod_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_autodetectionworkingperiod_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_autodetectionworkingperiod_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_appeasingbabymusic_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_appeasingbabymusic_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_appeasingbabymusic_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_voicememo_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_voicememo_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_voicememo_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_facesource_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_facesource_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_facesource_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_voicememoplaycondition_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_voicememoplaycondition_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_voicememoplaycondition_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of camera service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t camera_sleepmodeworkingperiod_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of camera service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t camera_sleepmodeworkingperiod_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of camera service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t camera_sleepmodeworkingperiod_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief ptz calibration action start callback of camera service
 * @param ctx          [action context]
 * @param action       [ptz calibration action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_ptz_calibration_start_cb(struct hey_action_ctx *ctx, struct camera_ptz_calibration_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera ptz_calibration action in");
    return -1;
}

/**
 * @brief ptz calibration action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_ptz_calibration_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_ptz_calibration_stop(ctx);
     */
}

/**
 * @brief linear movement action start callback of camera service
 * @param ctx          [action context]
 * @param action       [linear movement action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_linear_movement_start_cb(struct hey_action_ctx *ctx, struct camera_linear_movement_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera linear_movement action in");
    return -1;
}

/**
 * @brief linear movement action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_linear_movement_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_linear_movement_stop(ctx);
     */
}

/**
 * @brief get record list action start callback of camera service
 * @param ctx          [action context]
 * @param action       [get record list action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_get_record_list_start_cb(struct hey_action_ctx *ctx, struct camera_get_record_list_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera get_record_list action in");
    return -1;
}

/**
 * @brief get record list action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_get_record_list_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_get_record_list_stop(ctx);
     */
}

/**
 * @brief del record info action start callback of camera service
 * @param ctx          [action context]
 * @param action       [del record info action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_del_record_info_start_cb(struct hey_action_ctx *ctx, struct camera_del_record_info_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera del_record_info action in");
    return -1;
}

/**
 * @brief del record info action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_del_record_info_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_del_record_info_stop(ctx);
     */
}

/**
 * @brief get video period action start callback of camera service
 * @param ctx          [action context]
 * @param action       [get video period action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_get_video_period_start_cb(struct hey_action_ctx *ctx, struct camera_get_video_period_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera get_video_period action in");
    return -1;
}

/**
 * @brief get video period action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_get_video_period_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_get_video_period_stop(ctx);
     */
}

/**
 * @brief take photo action start callback of camera service
 * @param ctx          [action context]
 * @param action       [take photo action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_take_photo_start_cb(struct hey_action_ctx *ctx, struct camera_take_photo_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera take_photo action in");
    return -1;
}

/**
 * @brief take photo action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_take_photo_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_take_photo_stop(ctx);
     */
}

/**
 * @brief get current position action start callback of camera service
 * @param ctx          [action context]
 * @param action       [get current position action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_get_current_position_start_cb(struct hey_action_ctx *ctx, struct camera_get_current_position_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera get_current_position action in");
    return -1;
}

/**
 * @brief get current position action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_get_current_position_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_get_current_position_stop(ctx);
     */
}

/**
 * @brief get picture list action start callback of camera service
 * @param ctx          [action context]
 * @param action       [get picture list action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_get_picture_list_start_cb(struct hey_action_ctx *ctx, struct camera_get_picture_list_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera get_picture_list action in");
    return -1;
}

/**
 * @brief get picture list action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_get_picture_list_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_get_picture_list_stop(ctx);
     */
}

/**
 * @brief del picture info action start callback of camera service
 * @param ctx          [action context]
 * @param action       [del picture info action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_del_picture_info_start_cb(struct hey_action_ctx *ctx, struct camera_del_picture_info_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera del_picture_info action in");
    return -1;
}

/**
 * @brief del picture info action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_del_picture_info_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_del_picture_info_stop(ctx);
     */
}

/**
 * @brief sound alarm action start callback of camera service
 * @param ctx          [action context]
 * @param action       [sound alarm action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_sound_alarm_start_cb(struct hey_action_ctx *ctx, struct camera_sound_alarm_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera sound_alarm action in");
    return -1;
}

/**
 * @brief sound alarm action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_sound_alarm_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_sound_alarm_stop(ctx);
     */
}

/**
 * @brief play voice memo action start callback of camera service
 * @param ctx          [action context]
 * @param action       [play voice memo action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_play_voice_memo_start_cb(struct hey_action_ctx *ctx, struct camera_play_voice_memo_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera play_voice_memo action in");
    return -1;
}

/**
 * @brief play voice memo action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_play_voice_memo_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_play_voice_memo_stop(ctx);
     */
}

/**
 * @brief moving to fav position action start callback of camera service
 * @param ctx          [action context]
 * @param action       [moving to fav position action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_moving_to_fav_position_start_cb(struct hey_action_ctx *ctx, struct camera_moving_to_fav_position_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera moving_to_fav_position action in");
    return -1;
}

/**
 * @brief moving to fav position action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_moving_to_fav_position_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_moving_to_fav_position_stop(ctx);
     */
}

/**
 * @brief get recording time action start callback of camera service
 * @param ctx          [action context]
 * @param action       [get recording time action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_get_recording_time_start_cb(struct hey_action_ctx *ctx, struct camera_get_recording_time_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera get_recording_time action in");
    return -1;
}

/**
 * @brief get recording time action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_get_recording_time_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_get_recording_time_stop(ctx);
     */
}

/**
 * @brief get record event list action start callback of camera service
 * @param ctx          [action context]
 * @param action       [get record event list action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_get_record_event_list_start_cb(struct hey_action_ctx *ctx, struct camera_get_record_event_list_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera get_record_event_list action in");
    return -1;
}

/**
 * @brief get record event list action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_get_record_event_list_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_get_record_event_list_stop(ctx);
     */
}

/**
 * @brief device reboot action start callback of camera service
 * @param ctx          [action context]
 * @param action       [device reboot action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_device_reboot_start_cb(struct hey_action_ctx *ctx, struct camera_device_reboot_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera device_reboot action in");
    return -1;
}

/**
 * @brief device reboot action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_device_reboot_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_device_reboot_stop(ctx);
     */
}

/**
 * @brief panorama action start callback of camera service
 * @param ctx          [action context]
 * @param action       [panorama action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t camera_panorama_start_cb(struct hey_action_ctx *ctx, struct camera_panorama_in *action, void **user_context)
{
    // This is handled by the application layer
    // ctx needs to be saved by yourself
    // user_context can be assigned to SDK to record it for you as needed

    hey_printf(HEY_LOG_LEVEL_NOTICE, "camera panorama action in");
    return -1;
}

/**
 * @brief panorama action stop callback of camera service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void camera_panorama_stop_cb(void *user_context)
{
    // This is handled by the application layer
    /* User must call action stop function here !!!
     * for example: camera_panorama_stop(ctx);
     */
}

/**
 * @brief cry detection start notify result callback of camera service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void camera_cry_detection_start_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief face recognition detected notify result callback of camera service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void camera_face_recognition_detected_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief record notify notify result callback of camera service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void camera_record_notify_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief motion detection start notify result callback of camera service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void camera_motion_detection_start_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief motion detection end notify result callback of camera service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void camera_motion_detection_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief cry detection end notify result callback of camera service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void camera_cry_detection_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief dial record start notify result callback of camera service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void camera_dial_record_start_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}

/**
 * @brief dial record end notify result callback of camera service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void camera_dial_record_end_notify_result_cb(struct hey_job_ctx *ctx, int32_t result)
{
    // This is handled by the application layer
}
