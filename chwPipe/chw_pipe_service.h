/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: chwPipe.proto */

#ifndef CHW_PIPE_SERVICE_H
#define CHW_PIPE_SERVICE_H

#include "hey/types.h"

enum CHW_PIPE_PROPERTY {
    CHW_PIPE_PROPERTY_SUPPLYWATERTEMP = 1,
    CHW_PIPE_PROPERTY_SUPPLYWATERPRES = 2,
    CHW_PIPE_PROPERTY_SUPPLYWATERRATE = 3,
    CHW_PIPE_PROPERTY_RETURNWATERTEMP = 4,
    CHW_PIPE_PROPERTY_RETURNWATERPRES = 5,
    CHW_PIPE_PROPERTY_RETURNWATERRATE = 6,
    CHW_PIPE_PROPERTY_COOLINGCAPACITY = 7
};

struct chw_pipe_properties {
    uint32_t supplywatertemp;
    uint32_t supplywaterpres;
    uint32_t supplywaterrate;
    uint32_t returnwatertemp;
    uint32_t returnwaterpres;
    uint32_t returnwaterrate;
    uint32_t coolingcapacity;
};

/**
 * @brief chw pipe service initialization
 * @param properties [chw pipe service properties]
 * @return int32_t   [initialize result]
*/
int32_t chw_pipe_service_init(const struct chw_pipe_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of chw pipe service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t chw_pipe_properties_write_cb(size_t count, uint32_t *enumerate, struct chw_pipe_properties *properties);

/**
 * @brief update properties of chw pipe service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t chw_pipe_properties_update(size_t count, uint32_t *enumerate, struct chw_pipe_properties *properties);

#endif /* CHW_PIPE_SERVICE_H */
