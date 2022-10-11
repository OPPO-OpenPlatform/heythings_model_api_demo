/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: faf.proto */

#ifndef FAF_SERVICE_H
#define FAF_SERVICE_H

#include "hey/types.h"

enum FAF_PROPERTY {
    FAF_PROPERTY_POWER = 1,
    FAF_PROPERTY_MANNULAUTOSTA = 2,
    FAF_PROPERTY_FAULTSTA = 3,
    FAF_PROPERTY_CURRENTTEMPERATURE = 4,
    FAF_PROPERTY_CURRENTTEMPERATURE2 = 5,
    FAF_PROPERTY_TARGETTEMPERATURE = 6,
    FAF_PROPERTY_CURRENTHUMIDITY = 7,
    FAF_PROPERTY_TARGETHUMIDITY = 8,
    FAF_PROPERTY_FREQSETTING = 9,
    FAF_PROPERTY_FREQFEEDBACK = 10,
    FAF_PROPERTY_MINIMUMFREQ = 11,
    FAF_PROPERTY_VLVOPENING = 12,
    FAF_PROPERTY_VLVFEEDBACK = 13,
    FAF_PROPERTY_MAXVLVOPENING = 14
};

struct faf_properties {
    bool power;
    bool mannulautosta;
    bool faultsta;
    uint32_t currenttemperature;
    uint32_t currenttemperature2;
    uint32_t targettemperature;
    uint32_t currenthumidity;
    uint32_t targethumidity;
    uint32_t freqsetting;
    uint32_t freqfeedback;
    uint32_t minimumfreq;
    uint32_t vlvopening;
    uint32_t vlvfeedback;
    uint32_t maxvlvopening;
};

/**
 * @brief faf service initialization
 * @param properties [faf service properties]
 * @return int32_t   [initialize result]
*/
int32_t faf_service_init(const struct faf_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of faf service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t faf_properties_write_cb(size_t count, uint32_t *enumerate, struct faf_properties *properties);

/**
 * @brief update properties of faf service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t faf_properties_update(size_t count, uint32_t *enumerate, struct faf_properties *properties);

#endif /* FAF_SERVICE_H */