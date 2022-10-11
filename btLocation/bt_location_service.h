/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: btLocation.proto */

#ifndef BT_LOCATION_SERVICE_H
#define BT_LOCATION_SERVICE_H

#include "hey/types.h"

enum BT_LOCATION_PROPERTY {
    BT_LOCATION_PROPERTY_BEACONCHANNEL = 1,
    BT_LOCATION_PROPERTY_RSSI1M = 2
};

struct bt_location_properties {
    uint32_t beaconchannel;
    uint32_t rssi1m;
};

/**
 * @brief bt location service initialization
 * @param properties [bt location service properties]
 * @return int32_t   [initialize result]
*/
int32_t bt_location_service_init(const struct bt_location_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of bt location service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t bt_location_properties_write_cb(size_t count, uint32_t *enumerate, struct bt_location_properties *properties);

/**
 * @brief update properties of bt location service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t bt_location_properties_update(size_t count, uint32_t *enumerate, struct bt_location_properties *properties);

#endif /* BT_LOCATION_SERVICE_H */