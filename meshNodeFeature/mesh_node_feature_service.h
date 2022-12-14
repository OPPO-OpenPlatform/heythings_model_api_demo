/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: meshNodeFeature.proto */

#ifndef MESH_NODE_FEATURE_SERVICE_H
#define MESH_NODE_FEATURE_SERVICE_H

#include "hey/types.h"

struct mesh_node_feature_mesh_net_index {
    uint32_t netidx;
};

struct mesh_node_feature_mesh_app_index {
    uint32_t appidx;
};

struct mesh_model_mesh_model_publish {
    uint32_t dst;
    uint32_t key;
};

struct mesh_model_mesh_group {
    uint32_t group;
};

struct mesh_element_mesh_model {
    uint32_t companyid;
    uint32_t modelid;
    struct mesh_model_mesh_model_publish *pub;
    size_t n_appkeyidx;
    uint32_t *appkeyidx;
    size_t n_groups;
    uint32_t *groups;
};

struct mesh_node_feature_mesh_element {
    uint32_t addr;
    size_t n_meshmodel;
    struct mesh_element_mesh_model **meshmodel;
};

enum MESH_NODE_FEATURE_PROPERTY {
    MESH_NODE_FEATURE_PROPERTY_PRIMARYELEMADDR = 1,
    MESH_NODE_FEATURE_PROPERTY_MESHELEMENT = 2,
    MESH_NODE_FEATURE_PROPERTY_MESHNETINDEX = 3,
    MESH_NODE_FEATURE_PROPERTY_MESHAPPINDEX = 4,
    MESH_NODE_FEATURE_PROPERTY_FEATURE = 5
};

struct mesh_node_feature_properties {
    uint32_t primaryelemaddr;
    size_t n_meshelement;
    struct hey_array_node **meshelement;
    size_t n_meshnetindex;
    struct hey_array_node **meshnetindex;
    size_t n_meshappindex;
    struct hey_array_node **meshappindex;
    uint32_t feature;
};

/**
 * @brief mesh node feature service initialization
 * @param properties [mesh node feature service properties]
 * @return int32_t   [initialize result]
*/
int32_t mesh_node_feature_service_init(const struct mesh_node_feature_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
struct mesh_node_feature_mesh_net_index *mesh_node_feature_mesh_net_index_unpack(const uint8_t *data, size_t len);
void mesh_node_feature_mesh_net_index_free_unpacked(struct mesh_node_feature_mesh_net_index *data);
// less than 0 means failure
int32_t mesh_node_feature_mesh_net_index_get_packed_size(const struct mesh_node_feature_mesh_net_index *data);
// less than 0 means failure
int32_t mesh_node_feature_mesh_net_index_pack(const struct mesh_node_feature_mesh_net_index *data, uint8_t *out);

struct mesh_node_feature_mesh_app_index *mesh_node_feature_mesh_app_index_unpack(const uint8_t *data, size_t len);
void mesh_node_feature_mesh_app_index_free_unpacked(struct mesh_node_feature_mesh_app_index *data);
// less than 0 means failure
int32_t mesh_node_feature_mesh_app_index_get_packed_size(const struct mesh_node_feature_mesh_app_index *data);
// less than 0 means failure
int32_t mesh_node_feature_mesh_app_index_pack(const struct mesh_node_feature_mesh_app_index *data, uint8_t *out);

struct mesh_node_feature_mesh_element *mesh_node_feature_mesh_element_unpack(const uint8_t *data, size_t len);
void mesh_node_feature_mesh_element_free_unpacked(struct mesh_node_feature_mesh_element *data);
// less than 0 means failure
int32_t mesh_node_feature_mesh_element_get_packed_size(const struct mesh_node_feature_mesh_element *data);
// less than 0 means failure
int32_t mesh_node_feature_mesh_element_pack(const struct mesh_node_feature_mesh_element *data, uint8_t *out);

/**
 * @brief properties write callback of mesh node feature service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t mesh_node_feature_properties_write_cb(size_t count, uint32_t *enumerate, struct mesh_node_feature_properties *properties);

/**
 * @brief arrayNode properties add callback of mesh node feature service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t mesh_node_feature_meshelement_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of mesh node feature service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshelement_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of mesh node feature service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshelement_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of mesh node feature service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t mesh_node_feature_meshnetindex_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of mesh node feature service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshnetindex_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of mesh node feature service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshnetindex_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief arrayNode properties add callback of mesh node feature service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t mesh_node_feature_meshappindex_array_add_cb(size_t len, uint8_t *value);

/**
 * @brief arrayNode properties delete callback of mesh node feature service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshappindex_array_del_cb(size_t n_id, uint32_t *ids);

/**
 * @brief arrayNode properties replace callback of mesh node feature service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshappindex_array_replace_cb(uint32_t id, size_t len, uint8_t *value);

/**
 * @brief update properties of mesh node feature service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t mesh_node_feature_properties_update(size_t count, uint32_t *enumerate, struct mesh_node_feature_properties *properties);

#endif /* MESH_NODE_FEATURE_SERVICE_H */
