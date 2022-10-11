/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: refrigerator.proto */

#ifndef REFRIGERATOR_SERVICE_H
#define REFRIGERATOR_SERVICE_H

#include "hey/types.h"

enum refrigerator_refrigerator_level {
    REFRIGERATOR_REFRIGERATOR_LEVEL_NONE = 0,
    REFRIGERATOR_REFRIGERATOR_LEVEL_LEVELONE = 1,
    REFRIGERATOR_REFRIGERATOR_LEVEL_LEVELTWO = 2,
    REFRIGERATOR_REFRIGERATOR_LEVEL_LEVELTHREE = 3,
    REFRIGERATOR_REFRIGERATOR_LEVEL_LEVELFOUR = 4,
    REFRIGERATOR_REFRIGERATOR_LEVEL_LEVELFIVE = 5
};

enum REFRIGERATOR_PROPERTY {
    REFRIGERATOR_PROPERTY_POWER = 1,
    REFRIGERATOR_PROPERTY_DEVLABLE = 2,
    REFRIGERATOR_PROPERTY_REFRIGERATORLEVEL = 3,
    REFRIGERATOR_PROPERTY_CURRENTTEMPERATURE = 4,
    REFRIGERATOR_PROPERTY_TARGETTEMPERATURE = 5,
    REFRIGERATOR_PROPERTY_QUICKREFRIGERATINGMODE = 6,
    REFRIGERATOR_PROPERTY_HIGHHUMIDITYMODE = 7,
    REFRIGERATOR_PROPERTY_LIGHTWAVEPRESERVATIONMODE = 8,
    REFRIGERATOR_PROPERTY_RADARMODEENABLED = 9,
    REFRIGERATOR_PROPERTY_STERILIZATIONENABLED = 10,
    REFRIGERATOR_PROPERTY_SUPERFRESHNESSENABLED = 11,
    REFRIGERATOR_PROPERTY_ODORLESSNESSENABLED = 12,
    REFRIGERATOR_PROPERTY_CLEANFRUITENABLED = 13,
    REFRIGERATOR_PROPERTY_COLMOCLEANFRUIT = 14,
    REFRIGERATOR_PROPERTY_EFFICIENTSTERILIZATION = 15,
    REFRIGERATOR_PROPERTY_HUMIDITYCONTROLENABLED = 16,
    REFRIGERATOR_PROPERTY_SFCOMPARTMENTPOWER = 17,
    REFRIGERATOR_PROPERTY_SFCOMPARTMENTTEMP = 18,
    REFRIGERATOR_PROPERTY_SFCOMPARTMENTCURRENTTEMP = 19,
    REFRIGERATOR_PROPERTY_TCOMPARTMENTPOWER = 20,
    REFRIGERATOR_PROPERTY_WSCOMPARTMENTPOWER = 21
};

struct refrigerator_properties {
    bool power;
    char *devlable;
    enum refrigerator_refrigerator_level refrigeratorlevel;
    int32_t currenttemperature;
    int32_t targettemperature;
    bool quickrefrigeratingmode;
    bool highhumiditymode;
    bool lightwavepreservationmode;
    bool radarmodeenabled;
    bool sterilizationenabled;
    bool superfreshnessenabled;
    bool odorlessnessenabled;
    bool cleanfruitenabled;
    bool colmocleanfruit;
    bool efficientsterilization;
    bool humiditycontrolenabled;
    bool sfcompartmentpower;
    int32_t sfcompartmenttemp;
    int32_t sfcompartmentcurrenttemp;
    bool tcompartmentpower;
    bool wscompartmentpower;
};

/**
 * @brief refrigerator service initialization
 * @param properties [refrigerator service properties]
 * @return int32_t   [initialize result]
*/
int32_t refrigerator_service_init(const struct refrigerator_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of refrigerator service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t refrigerator_properties_write_cb(size_t count, uint32_t *enumerate, struct refrigerator_properties *properties);

/**
 * @brief update properties of refrigerator service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t refrigerator_properties_update(size_t count, uint32_t *enumerate, struct refrigerator_properties *properties);

#endif /* REFRIGERATOR_SERVICE_H */
