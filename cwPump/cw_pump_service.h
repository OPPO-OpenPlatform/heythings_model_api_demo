/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: cwPump.proto */

#ifndef CW_PUMP_SERVICE_H
#define CW_PUMP_SERVICE_H

#include "hey/types.h"

enum CW_PUMP_PROPERTY {
    CW_PUMP_PROPERTY_POWER = 1,
    CW_PUMP_PROPERTY_MANNULAUTOSTA = 2,
    CW_PUMP_PROPERTY_FAULTSTA = 3,
    CW_PUMP_PROPERTY_FREQSETTING = 4,
    CW_PUMP_PROPERTY_FREQFEEDBACK = 5,
    CW_PUMP_PROPERTY_DEVAVAILABLE = 6,
    CW_PUMP_PROPERTY_DEVABNORMALSTA = 7,
    CW_PUMP_PROPERTY_WATERFLOWSTA = 8
};

struct cw_pump_properties {
    bool power;
    bool mannulautosta;
    bool faultsta;
    uint32_t freqsetting;
    uint32_t freqfeedback;
    bool devavailable;
    bool devabnormalsta;
    bool waterflowsta;
};

/**
 * @brief cw pump service initialization
 * @param properties [cw pump service properties]
 * @return int32_t   [initialize result]
*/
int32_t cw_pump_service_init(const struct cw_pump_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of cw pump service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t cw_pump_properties_write_cb(size_t count, uint32_t *enumerate, struct cw_pump_properties *properties);

/**
 * @brief update properties of cw pump service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t cw_pump_properties_update(size_t count, uint32_t *enumerate, struct cw_pump_properties *properties);

#endif /* CW_PUMP_SERVICE_H */
