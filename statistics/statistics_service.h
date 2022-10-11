#ifndef STATISTICS_SERVICE_H
#define STATISTICS_SERVICE_H

#include "hey_schema_common.h"

enum statistics_data_type {
  /*
   *电量统计，对应message为EnergyConsumptionData
   */
    STATISTICS_DATA_TYPE_ENERGY_CONSUMPTION_DATA = 0,
  /*
   *埋点数据，对应message为EventTrackingData
   */
    STATISTICS_DATA_TYPE_EVENT_TRACKING_DATA = 1
};

struct statistics_energy_consumption_data {
    uint64_t timestamp;
    uint32_t value;
};

struct statistics_event_tracking_data {
    uint64_t timestamp;
    char *key;
    struct hey_binary_data value;
};

struct statistics_statistics_data {
    uint32_t siid;
    enum statistics_data_type datatype;
    size_t n_data;
    struct hey_binary_data *data;
};

enum STATISTICS_PROPERTY {
    STATISTICS_PROPERTY_STATISTICSDATA = 1
};

struct statistics_properties {
    size_t n_statisticsdata;
    struct hey_array_node **statisticsdata;
};

/**
 * @brief statistics service initialization
 * @param properties [statistics service properties]
 * @return int       [initialize result]
*/
int statistics_service_init(const struct statistics_properties *properties);

/**
 * @brief properties write callback of statistics service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int       [be writed result, 0 means success]
*/
int statistics_properties_write_cb(size_t count, unsigned int *enumerate, struct statistics_properties *properties);

/**
 * @brief update properties of statistics service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int       [update result]
 */
int statistics_properties_update(size_t count, unsigned int *enumerate, struct statistics_properties *properties);

#endif /* STATISTICS_SERVICE_H */
