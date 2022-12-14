/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: glycolPump.proto */

#ifndef GLYCOL_PUMP_SERVICE_H
#define GLYCOL_PUMP_SERVICE_H

#include "hey/types.h"

enum GLYCOL_PUMP_PROPERTY {
    GLYCOL_PUMP_PROPERTY_POWER = 1,
    GLYCOL_PUMP_PROPERTY_MANNULAUTOSTA = 2,
    GLYCOL_PUMP_PROPERTY_FAULTSTA = 3,
    GLYCOL_PUMP_PROPERTY_DEVABNORMALSTA = 4,
    GLYCOL_PUMP_PROPERTY_FREQSETTING = 5,
    GLYCOL_PUMP_PROPERTY_FREQFEEDBACK = 6
};

struct glycol_pump_properties {
    bool power;
    bool mannulautosta;
    bool faultsta;
    bool devabnormalsta;
    uint32_t freqsetting;
    uint32_t freqfeedback;
};

/**
 * @brief glycol pump service initialization
 * @param properties [glycol pump service properties]
 * @return int32_t   [initialize result]
*/
int32_t glycol_pump_service_init(const struct glycol_pump_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of glycol pump service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t glycol_pump_properties_write_cb(size_t count, uint32_t *enumerate, struct glycol_pump_properties *properties);

/**
 * @brief update properties of glycol pump service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t glycol_pump_properties_update(size_t count, uint32_t *enumerate, struct glycol_pump_properties *properties);

#endif /* GLYCOL_PUMP_SERVICE_H */
