/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: fireHydrant.proto */

#include <errno.h>
#include <assert.h>
#include "fireHydrant.pb-c.h"
#include "fire_hydrant_service.h"
#include "hey/schema.h"

#define FIRE_HYDRANT_SERVICE 
#define PROP_IID_CNT 3

static const struct hey_schema_property fire_hydrant_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 3, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static struct hey_service *fire_hydrant_service;

static int32_t service_fire_hydrant_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                        size_t len, uint8_t *value)
{
    Iot__Service__FireHydrant__Properties *props = iot__service__fire_hydrant__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct fire_hydrant_properties properties = { 0 };
    properties.power = props->power;
    properties.faultsta = props->faultsta;
    properties.openclosestate = props->openclosestate;
    ret = fire_hydrant_properties_write_cb(n_iid, iids, &properties);

    iot__service__fire_hydrant__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_fire_hydrant_properties_write_cb
};

static int fire_hydrant_service_register(Iot__Service__FireHydrant__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__fire_hydrant__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__fire_hydrant__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)fire_hydrant_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    fire_hydrant_service = hey_service_register(FIRE_HYDRANT_SERVICE, &schema_srv, NULL);
    if (NULL == fire_hydrant_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of fire hydrant service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t fire_hydrant_properties_update(size_t count, uint32_t *enumerate, struct fire_hydrant_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__FireHydrant__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__FireHydrant__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__fire_hydrant__properties__init(props);
    props->power = properties->power;
    props->faultsta = properties->faultsta;
    props->openclosestate = properties->openclosestate;

    size_t buf_len;
    buf_len = iot__service__fire_hydrant__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__fire_hydrant__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(fire_hydrant_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief fire hydrant service initialization
 * @param properties [fire hydrant service properties]
 * @return int32_t   [initialize result]
*/
int32_t fire_hydrant_service_init(const struct fire_hydrant_properties *properties)
{
    int ret = 0;
    Iot__Service__FireHydrant__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__FireHydrant__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__fire_hydrant__properties__init(props);
    if (NULL != properties) {
        props->power = properties->power;
        props->faultsta = properties->faultsta;
        props->openclosestate = properties->openclosestate;
    }

    ret = fire_hydrant_service_register(props);

out:
    free(props);
    return ret;
}
