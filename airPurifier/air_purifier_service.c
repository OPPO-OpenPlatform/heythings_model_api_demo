/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: airPurifier.proto */

#include <errno.h>
#include <assert.h>
#include "airPurifier.pb-c.h"
#include "air_purifier_service.h"
#include "hey/schema.h"

#define AIR_PURIFIER_SERVICE (12 * 256)
#define PROP_IID_CNT 15

static const struct hey_schema_property air_purifier_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 3, .type = HEY_PROPERTY_TYPE_GENERIC },
    [3] = { .iid = 4, .type = HEY_PROPERTY_TYPE_GENERIC },
    [4] = { .iid = 5, .type = HEY_PROPERTY_TYPE_GENERIC },
    [5] = { .iid = 6, .type = HEY_PROPERTY_TYPE_GENERIC },
    [6] = { .iid = 7, .type = HEY_PROPERTY_TYPE_GENERIC },
    [7] = { .iid = 8, .type = HEY_PROPERTY_TYPE_GENERIC },
    [8] = { .iid = 9, .type = HEY_PROPERTY_TYPE_GENERIC },
    [9] = { .iid = 10, .type = HEY_PROPERTY_TYPE_GENERIC },
    [10] = { .iid = 11, .type = HEY_PROPERTY_TYPE_GENERIC },
    [11] = { .iid = 12, .type = HEY_PROPERTY_TYPE_GENERIC },
    [12] = { .iid = 13, .type = HEY_PROPERTY_TYPE_GENERIC },
    [13] = { .iid = 14, .type = HEY_PROPERTY_TYPE_GENERIC },
    [14] = { .iid = 15, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static struct hey_service *air_purifier_service;

static int32_t service_air_purifier_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                        size_t len, uint8_t *value)
{
    Iot__Service__AirPurifier__Properties *props = iot__service__air_purifier__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct air_purifier_properties properties = { 0 };
    properties.power = props->power;
    properties.apmode = props->apmode;
    properties.sterilizationenabled = props->sterilizationenabled;
    properties.childlockenabled = props->childlockenabled;
    properties.hosting = props->hosting;
    properties.pm2out = props->pm2out;
    properties.pm2upper = props->pm2upper;
    properties.pm2lower = props->pm2lower;
    properties.appointmentpoweron = props->appointmentpoweron;
    properties.anionenabled = props->anionenabled;
    properties.brightness = props->brightness;
    properties.mute = props->mute;
    properties.detectpm2p5 = props->detectpm2p5;
    properties.detecthcho = props->detecthcho;
    properties.appointmentpoweroff = props->appointmentpoweroff;
    ret = air_purifier_properties_write_cb(n_iid, iids, &properties);

    iot__service__air_purifier__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_air_purifier_properties_write_cb
};

static int air_purifier_service_register(Iot__Service__AirPurifier__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__air_purifier__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__air_purifier__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)air_purifier_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    air_purifier_service = hey_service_register(AIR_PURIFIER_SERVICE, &schema_srv, NULL);
    if (NULL == air_purifier_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of air purifier service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t air_purifier_properties_update(size_t count, uint32_t *enumerate, struct air_purifier_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__AirPurifier__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__AirPurifier__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__air_purifier__properties__init(props);
    props->power = properties->power;
    props->apmode = properties->apmode;
    props->sterilizationenabled = properties->sterilizationenabled;
    props->childlockenabled = properties->childlockenabled;
    props->hosting = properties->hosting;
    props->pm2out = properties->pm2out;
    props->pm2upper = properties->pm2upper;
    props->pm2lower = properties->pm2lower;
    props->appointmentpoweron = properties->appointmentpoweron;
    props->anionenabled = properties->anionenabled;
    props->brightness = properties->brightness;
    props->mute = properties->mute;
    props->detectpm2p5 = properties->detectpm2p5;
    props->detecthcho = properties->detecthcho;
    props->appointmentpoweroff = properties->appointmentpoweroff;

    size_t buf_len;
    buf_len = iot__service__air_purifier__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__air_purifier__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(air_purifier_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief air purifier service initialization
 * @param properties [air purifier service properties]
 * @return int32_t   [initialize result]
*/
int32_t air_purifier_service_init(const struct air_purifier_properties *properties)
{
    int ret = 0;
    Iot__Service__AirPurifier__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__AirPurifier__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__air_purifier__properties__init(props);
    if (NULL != properties) {
        props->power = properties->power;
        props->apmode = properties->apmode;
        props->sterilizationenabled = properties->sterilizationenabled;
        props->childlockenabled = properties->childlockenabled;
        props->hosting = properties->hosting;
        props->pm2out = properties->pm2out;
        props->pm2upper = properties->pm2upper;
        props->pm2lower = properties->pm2lower;
        props->appointmentpoweron = properties->appointmentpoweron;
        props->anionenabled = properties->anionenabled;
        props->brightness = properties->brightness;
        props->mute = properties->mute;
        props->detectpm2p5 = properties->detectpm2p5;
        props->detecthcho = properties->detecthcho;
        props->appointmentpoweroff = properties->appointmentpoweroff;
    }

    ret = air_purifier_service_register(props);

out:
    free(props);
    return ret;
}
