/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: toothbrush.proto */

#ifndef TOOTHBRUSH_SERVICE_H
#define TOOTHBRUSH_SERVICE_H

#include "hey/types.h"

enum toothbrush_toothbrush_force {
  /*
   *1级
   */
    TOOTHBRUSH_TOOTHBRUSH_FORCE_LEVEL_ONE = 0,
  /*
   *2级
   */
    TOOTHBRUSH_TOOTHBRUSH_FORCE_LEVEL_TWO = 1,
  /*
   *3级
   */
    TOOTHBRUSH_TOOTHBRUSH_FORCE_LEVEL_THREE = 2,
  /*
   *4级
   */
    TOOTHBRUSH_TOOTHBRUSH_FORCE_LEVEL_FOUR = 3
};

enum toothbrush_toothbrush_mode_persional {
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_NONE = 0,
  /*
   *强力去渍
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_STRONG_STAIN_REMOVAL = 16,
  /*
   *敏感呵护
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_SENSITIVE_CARE = 17,
  /*
   *牙渍清洁
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_TOOTH_STAIN_CLEANING = 18,
  /*
   *急速净白
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_QUICK_WHITENING = 19,
  /*
   *牙面抛光
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_TOOTH_POLISHING = 20,
  /*
   *新手推荐
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_RECOMMENDED_FOR_BEGINNERS = 32,
  /*
   *早安健齿
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_GOOD_MORNING_HEALTHY_TEETH = 33,
  /*
   *晚安清洁
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_GOOD_NIGHT_CLEANING = 34,
  /*
   *焕新口气
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_FRESH_BREATH = 35,
  /*
   *病牙呵护
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_SICK_TOOTH_CARE = 36,
  /*
   *儿童护齿
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_PROTECT_TEETH_FOR_CHILD = 48,
  /*
   *孕期清洁
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_PREGNANCY_CLEANING = 49,
  /*
   *蛀牙防护
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_TOOTH_DECAY_PROTECTION = 50,
  /*
   *牙套护理
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_BRACES_CARE = 51,
  /*
   *假牙清洗
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_DENTURE_CLEANING = 52,
  /*
   *牙龈按摩
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_GUM_MASSAGE = 64,
  /*
   *牙周护理
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_PERIODONTAL_CARE = 65,
  /*
   *牙缝冲洗
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_INTERDENTAL_RINSE = 66,
  /*
   *舌苔清洁
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_TONGUE_CLEANING = 67,
  /*
   *变频按摩
   */
    TOOTHBRUSH_TOOTHBRUSH_MODE_PERSIONAL_FREQUENCY_CONVERSION_MASSAGE = 68
};

enum toothbrush_area_type {
  /*
   *左下区
   */
    TOOTHBRUSH_AREA_TYPE_LOWER_LEFT_AREA = 0,
  /*
   *中下区
   */
    TOOTHBRUSH_AREA_TYPE_LOWER_MIDDLE_AREA = 1,
  /*
   *右下区
   */
    TOOTHBRUSH_AREA_TYPE_LOWER_RIGHT_AREA = 2,
  /*
   *右上区
   */
    TOOTHBRUSH_AREA_TYPE_UPPER_RIGHT_AREA = 3,
  /*
   *中上区
   */
    TOOTHBRUSH_AREA_TYPE_UPPER_MIDDLE_AREA = 4,
  /*
   *左上区
   */
    TOOTHBRUSH_AREA_TYPE_UPPER_LEFT_AREA = 5
};

enum toothbrush_job_status {
    TOOTHBRUSH_JOB_STATUS_STANDBY_STATUS = 0,
    TOOTHBRUSH_JOB_STATUS_PREACTIVE_STATUS = 1,
    TOOTHBRUSH_JOB_STATUS_WORK_STATUS = 2,
    TOOTHBRUSH_JOB_STATUS_PAUSE_STATUS = 3,
    TOOTHBRUSH_JOB_STATUS_CANCEL_STATUS = 4,
    TOOTHBRUSH_JOB_STATUS_COMPLETE_STATUS = 5
};

enum toothbrush_side_type {
  /*
   *内侧
   */
    TOOTHBRUSH_SIDE_TYPE_MEDIAL = 0,
  /*
   *咬合面
   */
    TOOTHBRUSH_SIDE_TYPE_OCCLUSAL_SURFACE = 1,
  /*
   *外侧
   */
    TOOTHBRUSH_SIDE_TYPE_OUTSIDE = 2
};

struct toothbrush_toothbrush_head_reset_in {
    char __place_holder__; // make compiler happy
};

struct toothbrush_toothbrush_head_reset_out {
    char __place_holder__; // make compiler happy
};

struct toothbrush_brushing_monitoring {
    bool touch;
    enum toothbrush_area_type areatype;
    enum toothbrush_side_type sidetype;
    uint32_t duration;
    uint32_t largeshaketimes;
};

struct toothbrush_get_three_axis_offline_brushing_details_in {
    uint64_t begintime;
};

struct toothbrush_get_three_axis_offline_brushing_details_data_out {
    uint32_t score;
    uint64_t utc;
    uint32_t totalduration;
    uint32_t cleaningrate;
    uint32_t errorduration;
    uint32_t largeshaketimes;
};

struct toothbrush_get_three_axis_offline_brushing_details_out {
    size_t n_data;
    struct toothbrush_get_three_axis_offline_brushing_details_data_out **data;
};

struct toothbrush_get_online_brushing_details_in {
    uint64_t begintime;
};

struct toothbrush_get_online_brushing_details_details_out {
    enum toothbrush_area_type areatype;
    enum toothbrush_side_type sidetype;
    uint32_t duration;
    uint32_t largeshaketimes;
};

struct toothbrush_get_online_brushing_details_data_out {
    uint32_t score;
    uint64_t utc;
    uint32_t totalduration;
    size_t n_details;
    struct toothbrush_get_online_brushing_details_details_out **details;
};

struct toothbrush_get_online_brushing_details_out {
    size_t n_data;
    struct toothbrush_get_online_brushing_details_data_out **data;
};

enum TOOTHBRUSH_PROPERTY {
    TOOTHBRUSH_PROPERTY_TOOTHBRUSHHEADLEFTTIMES = 1,
    TOOTHBRUSH_PROPERTY_TOOTHBRUSHCLEANMODELEVEL = 3,
    TOOTHBRUSH_PROPERTY_TOOTHBRUSHWHITENINGMODELEVEL = 4,
    TOOTHBRUSH_PROPERTY_TOOTHBRUSHSENSITIVEMODELEVEL = 5,
    TOOTHBRUSH_PROPERTY_TOOTHBRUSHCAREMODELEVEL = 6,
    TOOTHBRUSH_PROPERTY_TOOTHBRUSHMODEPERSIONAL = 7,
    TOOTHBRUSH_PROPERTY_SETBRUSHINGDURATION = 8,
    TOOTHBRUSH_PROPERTY_SETBRUSHINGSTARTPOSITION = 9,
    TOOTHBRUSH_PROPERTY_TOOTHBRUSHJOBSTATUS = 10,
    TOOTHBRUSH_PROPERTY_BRUSHINGMONITORING = 11,
    TOOTHBRUSH_PROPERTY_ANTISPLASHENABLED = 12,
    TOOTHBRUSH_PROPERTY_HAVEBRUSHINGRECORDLIST = 13
};

enum TOOTHBRUSH_ACTION {
    TOOTHBRUSH_ACTION_TOOTHBRUSH_HEAD_RESET = 2,
    TOOTHBRUSH_ACTION_GET_THREE_AXIS_OFFLINE_BRUSHING_DETAILS = 14,
    TOOTHBRUSH_ACTION_GET_ONLINE_BRUSHING_DETAILS = 15
};

struct toothbrush_properties {
    uint32_t toothbrushheadlefttimes;
    enum toothbrush_toothbrush_force toothbrushcleanmodelevel;
    enum toothbrush_toothbrush_force toothbrushwhiteningmodelevel;
    enum toothbrush_toothbrush_force toothbrushsensitivemodelevel;
    enum toothbrush_toothbrush_force toothbrushcaremodelevel;
    enum toothbrush_toothbrush_mode_persional toothbrushmodepersional;
    uint32_t setbrushingduration;
    enum toothbrush_area_type setbrushingstartposition;
    enum toothbrush_job_status toothbrushjobstatus;
    struct toothbrush_brushing_monitoring *brushingmonitoring;
    bool antisplashenabled;
    bool havebrushingrecordlist;
};

/**
 * @brief toothbrush service initialization
 * @param properties [toothbrush service properties]
 * @return int32_t   [initialize result]
*/
int32_t toothbrush_service_init(const struct toothbrush_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of toothbrush service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t toothbrush_properties_write_cb(size_t count, uint32_t *enumerate, struct toothbrush_properties *properties);

/**
 * @brief update properties of toothbrush service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t toothbrush_properties_update(size_t count, uint32_t *enumerate, struct toothbrush_properties *properties);

/**
 * @brief toothbrush head reset action start callback of toothbrush service
 * @param ctx          [action context]
 * @param action       [toothbrush head reset action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t toothbrush_toothbrush_head_reset_start_cb(struct hey_action_ctx *ctx, struct toothbrush_toothbrush_head_reset_in *action, void **user_context);

/**
 * @brief toothbrush head reset action send message of toothbrush service
 * @param ctx      [action context]
 * @param action   [toothbrush head reset action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t toothbrush_toothbrush_head_reset_send(struct hey_action_ctx *ctx, struct toothbrush_toothbrush_head_reset_out *action);

/**
 * @brief toothbrush head reset action stop of toothbrush service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t toothbrush_toothbrush_head_reset_stop(struct hey_action_ctx *ctx);

/**
 * @brief toothbrush head reset action stop callback of toothbrush service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void toothbrush_toothbrush_head_reset_stop_cb(void *user_context);

/**
 * @brief get three axis offline brushing details action start callback of toothbrush service
 * @param ctx          [action context]
 * @param action       [get three axis offline brushing details action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t toothbrush_get_three_axis_offline_brushing_details_start_cb(struct hey_action_ctx *ctx, struct toothbrush_get_three_axis_offline_brushing_details_in *action, void **user_context);

/**
 * @brief get three axis offline brushing details action send message of toothbrush service
 * @param ctx      [action context]
 * @param action   [get three axis offline brushing details action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t toothbrush_get_three_axis_offline_brushing_details_send(struct hey_action_ctx *ctx, struct toothbrush_get_three_axis_offline_brushing_details_out *action);

/**
 * @brief get three axis offline brushing details action stop of toothbrush service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t toothbrush_get_three_axis_offline_brushing_details_stop(struct hey_action_ctx *ctx);

/**
 * @brief get three axis offline brushing details action stop callback of toothbrush service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void toothbrush_get_three_axis_offline_brushing_details_stop_cb(void *user_context);

/**
 * @brief get online brushing details action start callback of toothbrush service
 * @param ctx          [action context]
 * @param action       [get online brushing details action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t toothbrush_get_online_brushing_details_start_cb(struct hey_action_ctx *ctx, struct toothbrush_get_online_brushing_details_in *action, void **user_context);

/**
 * @brief get online brushing details action send message of toothbrush service
 * @param ctx      [action context]
 * @param action   [get online brushing details action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t toothbrush_get_online_brushing_details_send(struct hey_action_ctx *ctx, struct toothbrush_get_online_brushing_details_out *action);

/**
 * @brief get online brushing details action stop of toothbrush service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t toothbrush_get_online_brushing_details_stop(struct hey_action_ctx *ctx);

/**
 * @brief get online brushing details action stop callback of toothbrush service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void toothbrush_get_online_brushing_details_stop_cb(void *user_context);

#endif /* TOOTHBRUSH_SERVICE_H */
