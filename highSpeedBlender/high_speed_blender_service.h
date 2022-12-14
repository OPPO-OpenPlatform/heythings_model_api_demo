/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: highSpeedBlender.proto */

#ifndef HIGH_SPEED_BLENDER_SERVICE_H
#define HIGH_SPEED_BLENDER_SERVICE_H

#include "hey/types.h"

enum high_speed_blender_high_speed_blender_mode {
  /*
   *搅拌
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_STIRRING = 0,
  /*
   *低糖糊
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_LOWSUGAR_PASTE = 1,
  /*
   *五谷浆
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_CEREAL_PULP = 2,
  /*
   *粥
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_PORRIDGE = 3,
  /*
   *豆浆
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_SOYBEAN_MILK = 4,
  /*
   *果蔬汁
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_FRUITVEGETABLE_JUICE = 5,
  /*
   *五谷粉
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_CEREAL_FLOUR = 6,
  /*
   *杀菌洗
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_STERILIZATIONWASHING = 7,
  /*
   *保温
   */
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_MODE_HEATPRESERVATION = 8
};

enum high_speed_blender_machine_status {
    HIGH_SPEED_BLENDER_MACHINE_STATUS_IDLE = 0,
    HIGH_SPEED_BLENDER_MACHINE_STATUS_PREACTIVE = 1,
    HIGH_SPEED_BLENDER_MACHINE_STATUS_ACTIVE = 2,
    HIGH_SPEED_BLENDER_MACHINE_STATUS_STOPED = 3,
    HIGH_SPEED_BLENDER_MACHINE_STATUS_ERROR = 4
};

enum high_speed_blender_blender_operation_mode {
    HIGH_SPEED_BLENDER_BLENDER_OPERATION_MODE_CANCEL = 0,
    HIGH_SPEED_BLENDER_BLENDER_OPERATION_MODE_SCHEDULE = 1,
    HIGH_SPEED_BLENDER_BLENDER_OPERATION_MODE_START = 2,
    HIGH_SPEED_BLENDER_BLENDER_OPERATION_MODE_PAUSE = 3
};

enum high_speed_blender_high_speed_blender_job_status {
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_JOB_STATUS_JOB_STANDBY = 0,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_JOB_STATUS_JOB_SCHEDULE = 1,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_JOB_STATUS_JOB_ACTIVE = 2,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_JOB_STATUS_JOB_PRESERVATION_HEAT = 3,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_JOB_STATUS_JOB_PAUSE = 4
};

enum high_speed_blender_high_speed_blender_step_status {
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_STEP_STATUS_NONE = 0,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_STEP_STATUS_SPEED_HOT = 1,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_STEP_STATUS_BREAK_WALL = 2,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_STEP_STATUS_INFUSION = 3,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_STEP_STATUS_PITHY = 4,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_STEP_STATUS_AROMA = 5,
    HIGH_SPEED_BLENDER_HIGH_SPEED_BLENDER_STEP_STATUS_MAKING = 6
};

enum high_speed_blender_cup_type {
    HIGH_SPEED_BLENDER_CUP_TYPE_DEFAULT = 0,
  /*
   *母杯（热杯）
   */
    HIGH_SPEED_BLENDER_CUP_TYPE_MOTHER_CUP = 1,
  /*
   *冷杯/研磨杯
   */
    HIGH_SPEED_BLENDER_CUP_TYPE_COLD_CUP = 2,
  /*
   *子杯（热杯）
   */
    HIGH_SPEED_BLENDER_CUP_TYPE_SUB_CUP = 3,
  /*
   *切丝杯（食物杯）
   */
    HIGH_SPEED_BLENDER_CUP_TYPE_SHREDDED_CUP = 4,
  /*
   *烹饪杯
   */
    HIGH_SPEED_BLENDER_CUP_TYPE_COOKING_CUP = 5
};

struct high_speed_blender_self_cleaning_in {
    char __place_holder__; // make compiler happy
};

struct high_speed_blender_self_cleaning_out {
    char __place_holder__; // make compiler happy
};

struct high_speed_blender_appointment_task_completed {
    bool status;
    char *name;
    uint32_t hour;
    uint32_t min;
    uint32_t sec;
};

enum HIGH_SPEED_BLENDER_PROPERTY {
    HIGH_SPEED_BLENDER_PROPERTY_POWER = 1,
    HIGH_SPEED_BLENDER_PROPERTY_HIGHSPEEDBLENDERMODE = 2,
    HIGH_SPEED_BLENDER_PROPERTY_PROCESSINGSPEED = 3,
    HIGH_SPEED_BLENDER_PROPERTY_VACUUMSTORAGEENABLED = 4,
    HIGH_SPEED_BLENDER_PROPERTY_VACUUMGRINDENABLED = 5,
    HIGH_SPEED_BLENDER_PROPERTY_VACUUMFRUITENABLED = 6,
    HIGH_SPEED_BLENDER_PROPERTY_MACHINESTATUS = 7,
    HIGH_SPEED_BLENDER_PROPERTY_BLENDEROPERATIONMODE = 8,
    HIGH_SPEED_BLENDER_PROPERTY_HIGHSPEEDBLENDERJOBSTATUS = 10,
    HIGH_SPEED_BLENDER_PROPERTY_HEATPRESERVATIONMODE = 11,
    HIGH_SPEED_BLENDER_PROPERTY_TARGETTEMPERATURE = 12,
    HIGH_SPEED_BLENDER_PROPERTY_CURRENTTEMPERATURE = 13,
    HIGH_SPEED_BLENDER_PROPERTY_APPOINTMENTTASKCOMPLETED = 14,
    HIGH_SPEED_BLENDER_PROPERTY_OPERATIONTIME = 15,
    HIGH_SPEED_BLENDER_PROPERTY_HEATPRESERVATIONTIME = 16,
    HIGH_SPEED_BLENDER_PROPERTY_REMAINTIME = 17,
    HIGH_SPEED_BLENDER_PROPERTY_HIGHSPEEDBLENDERSTEPSTATUS = 18,
    HIGH_SPEED_BLENDER_PROPERTY_CONTACTSTATUS = 19,
    HIGH_SPEED_BLENDER_PROPERTY_PRESERVINGHEATDURATION = 20,
    HIGH_SPEED_BLENDER_PROPERTY_APPOINTMENTREMAINTIME = 21,
    HIGH_SPEED_BLENDER_PROPERTY_RUNNINGDURATION = 22,
    HIGH_SPEED_BLENDER_PROPERTY_TIMEDISPLAY = 23,
    HIGH_SPEED_BLENDER_PROPERTY_HORSERACELAMPDISPLAY = 24,
    HIGH_SPEED_BLENDER_PROPERTY_CUPTYPE = 25
};

enum HIGH_SPEED_BLENDER_ACTION {
    HIGH_SPEED_BLENDER_ACTION_SELF_CLEANING = 9
};

struct high_speed_blender_properties {
    bool power;
    enum high_speed_blender_high_speed_blender_mode highspeedblendermode;
    uint32_t processingspeed;
    bool vacuumstorageenabled;
    bool vacuumgrindenabled;
    bool vacuumfruitenabled;
    enum high_speed_blender_machine_status machinestatus;
    enum high_speed_blender_blender_operation_mode blenderoperationmode;
    enum high_speed_blender_high_speed_blender_job_status highspeedblenderjobstatus;
    bool heatpreservationmode;
    uint32_t targettemperature;
    uint32_t currenttemperature;
    struct high_speed_blender_appointment_task_completed *appointmenttaskcompleted;
    uint32_t operationtime;
    uint32_t heatpreservationtime;
    uint32_t remaintime;
    enum high_speed_blender_high_speed_blender_step_status highspeedblenderstepstatus;
    bool contactstatus;
    uint32_t preservingheatduration;
    uint32_t appointmentremaintime;
    uint32_t runningduration;
    bool timedisplay;
    bool horseracelampdisplay;
    enum high_speed_blender_cup_type cuptype;
};

/**
 * @brief high speed blender service initialization
 * @param properties [high speed blender service properties]
 * @return int32_t   [initialize result]
*/
int32_t high_speed_blender_service_init(const struct high_speed_blender_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of high speed blender service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t high_speed_blender_properties_write_cb(size_t count, uint32_t *enumerate, struct high_speed_blender_properties *properties);

/**
 * @brief update properties of high speed blender service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t high_speed_blender_properties_update(size_t count, uint32_t *enumerate, struct high_speed_blender_properties *properties);

/**
 * @brief self cleaning action start callback of high speed blender service
 * @param ctx          [action context]
 * @param action       [self cleaning action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t high_speed_blender_self_cleaning_start_cb(struct hey_action_ctx *ctx, struct high_speed_blender_self_cleaning_in *action, void **user_context);

/**
 * @brief self cleaning action send message of high speed blender service
 * @param ctx      [action context]
 * @param action   [self cleaning action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t high_speed_blender_self_cleaning_send(struct hey_action_ctx *ctx, struct high_speed_blender_self_cleaning_out *action);

/**
 * @brief self cleaning action stop of high speed blender service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t high_speed_blender_self_cleaning_stop(struct hey_action_ctx *ctx);

/**
 * @brief self cleaning action stop callback of high speed blender service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void high_speed_blender_self_cleaning_stop_cb(void *user_context);

#endif /* HIGH_SPEED_BLENDER_SERVICE_H */
