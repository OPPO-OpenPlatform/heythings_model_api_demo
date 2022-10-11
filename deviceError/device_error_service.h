/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: deviceError.proto */

#ifndef DEVICE_ERROR_SERVICE_H
#define DEVICE_ERROR_SERVICE_H

#include "hey/types.h"

struct device_error_error_no {
    char *errorno;
    char *errorname;
};

struct device_error_current_error_no {
    char *time;
    char *errorno;
};

struct device_error_event_device_fault {
    char *faultno;
};

struct device_error_event_device_message {
    char *messageno;
};

struct device_error_event_device_alert {
    char *alertno;
};

enum DEVICE_ERROR_PROPERTY {
    DEVICE_ERROR_PROPERTY_ERRORNO = 1,
    DEVICE_ERROR_PROPERTY_CURRENTERRORNO = 2
};

enum DEVICE_ERROR_EVENT {
    DEVICE_ERROR_EVENT_DEVICE_FAULT = 3,
    DEVICE_ERROR_EVENT_DEVICE_MESSAGE = 4,
    DEVICE_ERROR_EVENT_DEVICE_ALERT = 5
};

struct device_error_properties {
    size_t n_errorno;
    struct hey_array_node **errorno;
    size_t n_currenterrorno;
    struct hey_array_node **currenterrorno;
};

/**
 * @brief device error service initialization
 * @param properties [device error service properties]
 * @return int32_t   [initialize result]
*/
int32_t device_error_service_init(const struct device_error_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
struct device_error_error_no *device_error_error_no_unpack(const uint8_t *data, size_t len);
void device_error_error_no_free_unpacked(struct device_error_error_no *data);
// less than 0 means failure
int32_t device_error_error_no_get_packed_size(const struct device_error_error_no *data);
// less than 0 means failure
int32_t device_error_error_no_pack(const struct device_error_error_no *data, uint8_t *out);

struct device_error_current_error_no *device_error_current_error_no_unpack(const uint8_t *data, size_t len);
void device_error_current_error_no_free_unpacked(struct device_error_current_error_no *data);
// less than 0 means failure
int32_t device_error_current_error_no_get_packed_size(const struct device_error_current_error_no *data);
// less than 0 means failure
int32_t device_error_current_error_no_pack(const struct device_error_current_error_no *data, uint8_t *out);

/**
 * @brief properties write callback of device error service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t device_error_properties_write_cb(size_t count, uint32_t *enumerate, struct device_error_properties *properties);

/**
 * @brief arrayNode properties add callback of device error service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t device_error_errorno_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of device error service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t device_error_errorno_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of device error service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t device_error_errorno_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of device error service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t device_error_currenterrorno_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of device error service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t device_error_currenterrorno_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of device error service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t device_error_currenterrorno_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief update properties of device error service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t device_error_properties_update(size_t count, uint32_t *enumerate, struct device_error_properties *properties);

/**
 * @brief device fault notify of device error service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t device_error_device_fault_notify(struct device_error_event_device_fault *event, struct hey_event_notify_attr *attr);

/**
 * @brief device fault notify result callback of device error service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void device_error_device_fault_notify_result_cb(struct hey_job_ctx *ctx, int32_t result);

/**
 * @brief device message notify of device error service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t device_error_device_message_notify(struct device_error_event_device_message *event, struct hey_event_notify_attr *attr);

/**
 * @brief device message notify result callback of device error service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void device_error_device_message_notify_result_cb(struct hey_job_ctx *ctx, int32_t result);

/**
 * @brief device alert notify of device error service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t device_error_device_alert_notify(struct device_error_event_device_alert *event, struct hey_event_notify_attr *attr);

/**
 * @brief device alert notify result callback of device error service
 * @param ctx    [registered callback context by user]
 * @param result [the result of notify, 0 means success]
 * @return none
*/
void device_error_device_alert_notify_result_cb(struct hey_job_ctx *ctx, int32_t result);

#endif /* DEVICE_ERROR_SERVICE_H */
