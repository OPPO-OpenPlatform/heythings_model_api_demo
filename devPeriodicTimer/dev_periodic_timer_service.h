/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: devPeriodicTimer.proto */

#ifndef DEV_PERIODIC_TIMER_SERVICE_H
#define DEV_PERIODIC_TIMER_SERVICE_H

#include "hey/types.h"

enum dev_periodic_timer_action_out_periodic_timer_execute_code {
    DEV_PERIODIC_TIMER_ACTION_OUT_PERIODIC_TIMER_EXECUTE_CODE_SUCCESS = 0,
    DEV_PERIODIC_TIMER_ACTION_OUT_PERIODIC_TIMER_EXECUTE_CODE_FAIL = 1
};

struct dev_periodic_timer_config {
    uint32_t siid;
    size_t n_iid;
    uint32_t *iid;
    struct hey_binary_data data;
};

struct dev_periodic_timer_periodic_timer {
    bool status;
    char *name;
    uint32_t repeat;
    uint32_t hour;
    uint32_t min;
    uint32_t sec;
    size_t n_config;
    struct dev_periodic_timer_config **config;
    uint64_t settingtime;
};

struct dev_periodic_timer_periodic_timer_execute_in {
    size_t n_config;
    struct dev_periodic_timer_config **config;
};

struct dev_periodic_timer_periodic_timer_execute_out {
    enum dev_periodic_timer_action_out_periodic_timer_execute_code code;
};

enum DEV_PERIODIC_TIMER_PROPERTY {
    DEV_PERIODIC_TIMER_PROPERTY_PERIODICTIMER = 1
};

enum DEV_PERIODIC_TIMER_ACTION {
    DEV_PERIODIC_TIMER_ACTION_PERIODIC_TIMER_EXECUTE = 2
};

struct dev_periodic_timer_properties {
    size_t n_periodictimer;
    struct hey_array_node **periodictimer;
};

/**
 * @brief dev periodic timer service initialization
 * @param properties [dev periodic timer service properties]
 * @return int32_t   [initialize result]
*/
int32_t dev_periodic_timer_service_init(const struct dev_periodic_timer_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
struct dev_periodic_timer_periodic_timer *dev_periodic_timer_periodic_timer_unpack(const uint8_t *data, size_t len);
void dev_periodic_timer_periodic_timer_free_unpacked(struct dev_periodic_timer_periodic_timer *data);
// less than 0 means failure
int32_t dev_periodic_timer_periodic_timer_get_packed_size(const struct dev_periodic_timer_periodic_timer *data);
// less than 0 means failure
int32_t dev_periodic_timer_periodic_timer_pack(const struct dev_periodic_timer_periodic_timer *data, uint8_t *out);

/**
 * @brief properties write callback of dev periodic timer service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t dev_periodic_timer_properties_write_cb(size_t count, uint32_t *enumerate, struct dev_periodic_timer_properties *properties);

/**
 * @brief arrayNode properties add callback of dev periodic timer service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t dev_periodic_timer_periodictimer_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of dev periodic timer service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t dev_periodic_timer_periodictimer_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of dev periodic timer service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t dev_periodic_timer_periodictimer_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief update properties of dev periodic timer service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t dev_periodic_timer_properties_update(size_t count, uint32_t *enumerate, struct dev_periodic_timer_properties *properties);

/**
 * @brief periodic timer execute action start callback of dev periodic timer service
 * @param ctx          [action context]
 * @param action       [periodic timer execute action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t dev_periodic_timer_periodic_timer_execute_start_cb(struct hey_action_ctx *ctx, struct dev_periodic_timer_periodic_timer_execute_in *action, void **user_context);

/**
 * @brief periodic timer execute action send message of dev periodic timer service
 * @param ctx      [action context]
 * @param action   [periodic timer execute action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t dev_periodic_timer_periodic_timer_execute_send(struct hey_action_ctx *ctx, struct dev_periodic_timer_periodic_timer_execute_out *action);

/**
 * @brief periodic timer execute action stop of dev periodic timer service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t dev_periodic_timer_periodic_timer_execute_stop(struct hey_action_ctx *ctx);

/**
 * @brief periodic timer execute action stop callback of dev periodic timer service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void dev_periodic_timer_periodic_timer_execute_stop_cb(void *user_context);

#endif /* DEV_PERIODIC_TIMER_SERVICE_H */
