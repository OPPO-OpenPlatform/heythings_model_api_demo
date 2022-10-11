/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: devCountDown.proto */

#ifndef DEV_COUNT_DOWN_SERVICE_H
#define DEV_COUNT_DOWN_SERVICE_H

#include "hey/types.h"

struct dev_count_down_config {
    uint32_t siid;
    size_t n_iid;
    uint32_t *iid;
    struct hey_binary_data data;
};

struct dev_count_down_count_down {
    bool status;
    char *name;
    uint32_t timeleft;
    size_t n_config;
    struct dev_count_down_config **config;
    uint32_t settingtime;
};

enum DEV_COUNT_DOWN_PROPERTY {
    DEV_COUNT_DOWN_PROPERTY_COUNTDOWN = 1
};

struct dev_count_down_properties {
    size_t n_countdown;
    struct hey_array_node **countdown;
};

/**
 * @brief dev count down service initialization
 * @param properties [dev count down service properties]
 * @return int32_t   [initialize result]
*/
int32_t dev_count_down_service_init(const struct dev_count_down_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
struct dev_count_down_count_down *dev_count_down_count_down_unpack(const uint8_t *data, size_t len);
void dev_count_down_count_down_free_unpacked(struct dev_count_down_count_down *data);
// less than 0 means failure
int32_t dev_count_down_count_down_get_packed_size(const struct dev_count_down_count_down *data);
// less than 0 means failure
int32_t dev_count_down_count_down_pack(const struct dev_count_down_count_down *data, uint8_t *out);

/**
 * @brief properties write callback of dev count down service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t dev_count_down_properties_write_cb(size_t count, uint32_t *enumerate, struct dev_count_down_properties *properties);

/**
 * @brief arrayNode properties add callback of dev count down service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t dev_count_down_countdown_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of dev count down service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t dev_count_down_countdown_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of dev count down service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t dev_count_down_countdown_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief update properties of dev count down service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t dev_count_down_properties_update(size_t count, uint32_t *enumerate, struct dev_count_down_properties *properties);

#endif /* DEV_COUNT_DOWN_SERVICE_H */
