/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: plateExchanger.proto */

#ifndef PLATE_EXCHANGER_SERVICE_H
#define PLATE_EXCHANGER_SERVICE_H

#include "hey/types.h"

enum PLATE_EXCHANGER_PROPERTY {
    PLATE_EXCHANGER_PROPERTY_SUPPLYWATERTEMP = 1,
    PLATE_EXCHANGER_PROPERTY_SUPPLYWATERPRES = 2,
    PLATE_EXCHANGER_PROPERTY_RETURNWATERTEMP = 3,
    PLATE_EXCHANGER_PROPERTY_RETURNWATERPRES = 4,
    PLATE_EXCHANGER_PROPERTY_SUPPLYWATERRATE = 5,
    PLATE_EXCHANGER_PROPERTY_RETURNWATERRATE = 6,
    PLATE_EXCHANGER_PROPERTY_TARGETSUPPLYWATERTEMP = 7
};

struct plate_exchanger_properties {
    uint32_t supplywatertemp;
    uint32_t supplywaterpres;
    uint32_t returnwatertemp;
    uint32_t returnwaterpres;
    uint32_t supplywaterrate;
    uint32_t returnwaterrate;
    uint32_t targetsupplywatertemp;
};

/**
 * @brief plate exchanger service initialization
 * @param properties [plate exchanger service properties]
 * @return int32_t   [initialize result]
*/
int32_t plate_exchanger_service_init(const struct plate_exchanger_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of plate exchanger service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t plate_exchanger_properties_write_cb(size_t count, uint32_t *enumerate, struct plate_exchanger_properties *properties);

/**
 * @brief update properties of plate exchanger service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t plate_exchanger_properties_update(size_t count, uint32_t *enumerate, struct plate_exchanger_properties *properties);

#endif /* PLATE_EXCHANGER_SERVICE_H */
