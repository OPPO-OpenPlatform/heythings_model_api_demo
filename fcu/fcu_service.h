/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: fcu.proto */

#ifndef FCU_SERVICE_H
#define FCU_SERVICE_H

#include "hey/types.h"

enum FCU_PROPERTY {
    FCU_PROPERTY_POWER = 1,
    FCU_PROPERTY_MANNULAUTOSTA = 2,
    FCU_PROPERTY_FAULTSTA = 3,
    FCU_PROPERTY_WINDSPEED = 4,
    FCU_PROPERTY_FREQSETTING = 5,
    FCU_PROPERTY_FREQFEEDBACK = 6,
    FCU_PROPERTY_VLVOPENING = 7,
    FCU_PROPERTY_VLVFEEDBACK = 8
};

struct fcu_properties {
    bool power;
    bool mannulautosta;
    bool faultsta;
    uint32_t windspeed;
    uint32_t freqsetting;
    uint32_t freqfeedback;
    uint32_t vlvopening;
    uint32_t vlvfeedback;
};

/**
 * @brief fcu service initialization
 * @param properties [fcu service properties]
 * @return int32_t   [initialize result]
*/
int32_t fcu_service_init(const struct fcu_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of fcu service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t fcu_properties_write_cb(size_t count, uint32_t *enumerate, struct fcu_properties *properties);

/**
 * @brief update properties of fcu service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t fcu_properties_update(size_t count, uint32_t *enumerate, struct fcu_properties *properties);

#endif /* FCU_SERVICE_H */
