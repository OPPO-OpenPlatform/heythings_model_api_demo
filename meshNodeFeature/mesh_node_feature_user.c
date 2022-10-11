#include "schema/meshNodeFeature/mesh_node_feature_service.h"
#include "heythings.h"
#include "heythings_task.h"

/**
 * @brief properties write callback of mesh node feature service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
 */
int32_t mesh_node_feature_properties_write_cb(size_t count, uint32_t *enumerate, struct mesh_node_feature_properties *properties)
{
    for (size_t i = 0; i < count; i++) {
        switch (enumerate[i]) {
        case MESH_NODE_FEATURE_PROPERTY_PRIMARYELEMADDR:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "primary Elem Addr = %d", properties->primaryelemaddr);
            break;
        case MESH_NODE_FEATURE_PROPERTY_MESHELEMENT:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case MESH_NODE_FEATURE_PROPERTY_MESHNETINDEX:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case MESH_NODE_FEATURE_PROPERTY_MESHAPPINDEX:
            // TODO at protoc-c/c_hey_schema.cc[401]
            break;
        case MESH_NODE_FEATURE_PROPERTY_FEATURE:
            hey_printf(HEY_LOG_LEVEL_NOTICE, "feature = %d", properties->feature);
            break;
        default:
            break;
        }
    }
    // 属性写回调需要调用 update 接口才能更新设备影子到服务端, 不要求在此处调用
    // 注意：如果业务有关联属性需要同时更新上报，建议只调用一次update接口，分开调用会增加同步时间
    return mesh_node_feature_properties_update(count, enumerate, properties);
}

/**
 * @brief arrayNode properties add callback of mesh node feature service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t mesh_node_feature_meshelement_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of mesh node feature service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshelement_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of mesh node feature service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshelement_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of mesh node feature service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t mesh_node_feature_meshnetindex_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of mesh node feature service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshnetindex_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of mesh node feature service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshnetindex_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties add callback of mesh node feature service
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [return array id, 0 or more than 0 means success]
*/
int32_t mesh_node_feature_meshappindex_array_add_cb(size_t len, uint8_t *value)
{
    return -1;
}

/**
 * @brief arrayNode properties delete callback of mesh node feature service
 * @param n_id     [nums of id that will be removed]
 * @param ids      [list of ids that will be removed]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshappindex_array_del_cb(size_t n_id, uint32_t *ids)
{
    return -1;
}

/**
 * @brief arrayNode properties replace callback of mesh node feature service
 * @param id       [array id that will be replaced]
 * @param len      [array data length]
 * @param value    [array data]
 * @return int32_t [0 means success]
*/
int32_t mesh_node_feature_meshappindex_array_replace_cb(uint32_t id, size_t len, uint8_t *value)
{
    return -1;
}
