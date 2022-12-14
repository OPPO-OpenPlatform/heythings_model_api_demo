/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: devCapabilityDescription.proto */

#ifndef DEV_CAPABILITY_DESCRIPTION_SERVICE_H
#define DEV_CAPABILITY_DESCRIPTION_SERVICE_H

#include "hey/types.h"

struct dev_capability_description_services {
    uint32_t siid;
    size_t n_iid;
    uint32_t *iid;
};

enum DEV_CAPABILITY_DESCRIPTION_PROPERTY {
    DEV_CAPABILITY_DESCRIPTION_PROPERTY_SERVICES = 1
};

struct dev_capability_description_properties {
    size_t n_services;
    struct hey_array_node **services;
};

/**
 * @brief dev capability description service initialization
 * @param properties [dev capability description service properties]
 * @return int32_t   [initialize result]
*/
int32_t dev_capability_description_service_init(const struct dev_capability_description_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
struct dev_capability_description_services *dev_capability_description_services_unpack(const uint8_t *data, size_t len);
void dev_capability_description_services_free_unpacked(struct dev_capability_description_services *data);
// less than 0 means failure
int32_t dev_capability_description_services_get_packed_size(const struct dev_capability_description_services *data);
// less than 0 means failure
int32_t dev_capability_description_services_pack(const struct dev_capability_description_services *data, uint8_t *out);

/**
 * @brief properties write callback of dev capability description service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t dev_capability_description_properties_write_cb(size_t count, uint32_t *enumerate, struct dev_capability_description_properties *properties);

/**
 * @brief arrayNode properties add callback of dev capability description service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t dev_capability_description_services_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of dev capability description service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t dev_capability_description_services_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of dev capability description service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t dev_capability_description_services_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief update properties of dev capability description service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t dev_capability_description_properties_update(size_t count, uint32_t *enumerate, struct dev_capability_description_properties *properties);

#endif /* DEV_CAPABILITY_DESCRIPTION_SERVICE_H */
