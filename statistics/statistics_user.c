#include "schema/statistics/statistics_service.h"

/**
 * @brief properties write callback of statistics service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int       [be writed result, 0 means success]
 */
int statistics_properties_write_cb(size_t count, unsigned int *enumerate, struct statistics_properties *properties)
{
    // This is handled by the application layer

    return -1;
}
