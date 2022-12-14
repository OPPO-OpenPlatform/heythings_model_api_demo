/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: weightScale.proto */

#ifndef WEIGHT_SCALE_SERVICE_H
#define WEIGHT_SCALE_SERVICE_H

#include "hey/types.h"

enum weight_scale_job_status {
    WEIGHT_SCALE_JOB_STATUS_STANDBY_STATUS = 0,
    WEIGHT_SCALE_JOB_STATUS_PREACTIVE_STATUS = 1,
    WEIGHT_SCALE_JOB_STATUS_WORK_STATUS = 2,
    WEIGHT_SCALE_JOB_STATUS_PAUSE_STATUS = 3,
    WEIGHT_SCALE_JOB_STATUS_CANCEL_STATUS = 4,
    WEIGHT_SCALE_JOB_STATUS_COMPLETE_STATUS = 5
};

enum weight_scale_gender {
    WEIGHT_SCALE_GENDER_UNKNOWN = 0,
    WEIGHT_SCALE_GENDER_MALE = 1,
    WEIGHT_SCALE_GENDER_FEMALE = 2
};

enum weight_scale_weight_unit {
    WEIGHT_SCALE_WEIGHT_UNIT_KG = 0,
    WEIGHT_SCALE_WEIGHT_UNIT_CATTY = 1
};

struct weight_scale_weighing_measure_results {
    uint64_t utc;
    uint32_t weight;
    uint32_t impedance;
};

struct weight_scale_age {
    uint32_t year;
    uint32_t moon;
    uint32_t day;
};

struct weight_scale_weight_scale_user_list {
    uint32_t userid;
    uint32_t weight;
    uint32_t targetweight;
    uint32_t bodylength;
    enum weight_scale_gender gender;
    struct weight_scale_age *age;
};

struct weight_scale_get_offline_body_fat_scale_records_in {
    uint64_t begintime;
};

struct weight_scale_get_offline_body_fat_scale_records_data_out {
    uint64_t utc;
    uint32_t userid;
    uint32_t weight;
    uint32_t impedance;
};

struct weight_scale_get_offline_body_fat_scale_records_out {
    size_t n_data;
    struct weight_scale_get_offline_body_fat_scale_records_data_out **data;
};

enum WEIGHT_SCALE_PROPERTY {
    WEIGHT_SCALE_PROPERTY_JOBSTATUS = 1,
    WEIGHT_SCALE_PROPERTY_WEIGHINGMEASURERESULTS = 2,
    WEIGHT_SCALE_PROPERTY_CURRENTUSERID = 3,
    WEIGHT_SCALE_PROPERTY_WEIGHTSCALEUSERLIST = 4,
    WEIGHT_SCALE_PROPERTY_WEIGHTUNIT = 5,
    WEIGHT_SCALE_PROPERTY_MEASUREBODYFATENABLED = 6
};

enum WEIGHT_SCALE_ACTION {
    WEIGHT_SCALE_ACTION_GET_OFFLINE_BODY_FAT_SCALE_RECORDS = 7
};

struct weight_scale_properties {
    enum weight_scale_job_status jobstatus;
    struct weight_scale_weighing_measure_results *weighingmeasureresults;
    uint32_t currentuserid;
    size_t n_weightscaleuserlist;
    struct hey_array_node **weightscaleuserlist;
    enum weight_scale_weight_unit weightunit;
    bool measurebodyfatenabled;
};

/**
 * @brief weight scale service initialization
 * @param properties [weight scale service properties]
 * @return int32_t   [initialize result]
*/
int32_t weight_scale_service_init(const struct weight_scale_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
struct weight_scale_weight_scale_user_list *weight_scale_weight_scale_user_list_unpack(const uint8_t *data, size_t len);
void weight_scale_weight_scale_user_list_free_unpacked(struct weight_scale_weight_scale_user_list *data);
// less than 0 means failure
int32_t weight_scale_weight_scale_user_list_get_packed_size(const struct weight_scale_weight_scale_user_list *data);
// less than 0 means failure
int32_t weight_scale_weight_scale_user_list_pack(const struct weight_scale_weight_scale_user_list *data, uint8_t *out);

/**
 * @brief properties write callback of weight scale service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t weight_scale_properties_write_cb(size_t count, uint32_t *enumerate, struct weight_scale_properties *properties);

/**
 * @brief arrayNode properties add callback of weight scale service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t weight_scale_weightscaleuserlist_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of weight scale service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t weight_scale_weightscaleuserlist_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of weight scale service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t weight_scale_weightscaleuserlist_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief update properties of weight scale service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t weight_scale_properties_update(size_t count, uint32_t *enumerate, struct weight_scale_properties *properties);

/**
 * @brief get offline body fat scale records action start callback of weight scale service
 * @param ctx          [action context]
 * @param action       [get offline body fat scale records action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t weight_scale_get_offline_body_fat_scale_records_start_cb(struct hey_action_ctx *ctx, struct weight_scale_get_offline_body_fat_scale_records_in *action, void **user_context);

/**
 * @brief get offline body fat scale records action send message of weight scale service
 * @param ctx      [action context]
 * @param action   [get offline body fat scale records action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t weight_scale_get_offline_body_fat_scale_records_send(struct hey_action_ctx *ctx, struct weight_scale_get_offline_body_fat_scale_records_out *action);

/**
 * @brief get offline body fat scale records action stop of weight scale service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t weight_scale_get_offline_body_fat_scale_records_stop(struct hey_action_ctx *ctx);

/**
 * @brief get offline body fat scale records action stop callback of weight scale service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void weight_scale_get_offline_body_fat_scale_records_stop_cb(void *user_context);

#endif /* WEIGHT_SCALE_SERVICE_H */
