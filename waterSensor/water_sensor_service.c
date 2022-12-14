/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: waterSensor.proto */

#include <errno.h>
#include <assert.h>
#include "waterSensor.pb-c.h"
#include "water_sensor_service.h"
#include "hey/schema.h"

#define WATER_SENSOR_SERVICE (32 * 256)
#define PROP_IID_CNT 1
#define EV_IID_CNT 2

static const struct hey_schema_property water_sensor_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static const uint32_t water_sensor_event_iids[] = { 2, 3 };
static struct hey_service *water_sensor_service;

static int32_t service_water_sensor_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                        size_t len, uint8_t *value)
{
    Iot__Service__WaterSensor__Properties *props = iot__service__water_sensor__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct water_sensor_properties properties = { 0 };
    properties.alarmstate = props->alarmstate;
    ret = water_sensor_properties_write_cb(n_iid, iids, &properties);

    iot__service__water_sensor__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_water_sensor_properties_write_cb
};

static int water_sensor_service_register(Iot__Service__WaterSensor__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__water_sensor__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__water_sensor__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)water_sensor_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.events.iids = (uint32_t *)water_sensor_event_iids;
    schema_srv.events.n_iid = EV_IID_CNT;
    water_sensor_service = hey_service_register(WATER_SENSOR_SERVICE, &schema_srv, NULL);
    if (NULL == water_sensor_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of water sensor service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t water_sensor_properties_update(size_t count, uint32_t *enumerate, struct water_sensor_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__WaterSensor__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__WaterSensor__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__water_sensor__properties__init(props);
    props->alarmstate = properties->alarmstate;

    size_t buf_len;
    buf_len = iot__service__water_sensor__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__water_sensor__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(water_sensor_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief water sensor service initialization
 * @param properties [water sensor service properties]
 * @return int32_t   [initialize result]
*/
int32_t water_sensor_service_init(const struct water_sensor_properties *properties)
{
    int ret = 0;
    Iot__Service__WaterSensor__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__WaterSensor__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__water_sensor__properties__init(props);
    if (NULL != properties) {
        props->alarmstate = properties->alarmstate;
    }

    ret = water_sensor_service_register(props);

out:
    free(props);
    return ret;
}

/**
 * @brief water detected notify of water sensor service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t water_sensor_water_detected_notify(struct water_sensor_event_water_detected *event, struct hey_event_notify_attr *attr)
{
    int64_t ret = -1;

    struct hey_event_notify_content content = {
        .iid = WATER_SENSOR_EVENT_WATER_DETECTED,
        .importance = attr->importance,
        .uuid = attr->uuid,
        .ref_uuid = attr->ref_uuid,
        .timestamp = attr->timestamp,
        .len = 0,
        .value = NULL,
    };
    ret = hey_event_notify(water_sensor_service, &content, water_sensor_water_detected_notify_result_cb, attr->ctx);

    return ret;
}

/**
 * @brief no water notify of water sensor service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t water_sensor_no_water_notify(struct water_sensor_event_no_water *event, struct hey_event_notify_attr *attr)
{
    int64_t ret = -1;

    struct hey_event_notify_content content = {
        .iid = WATER_SENSOR_EVENT_NO_WATER,
        .importance = attr->importance,
        .uuid = attr->uuid,
        .ref_uuid = attr->ref_uuid,
        .timestamp = attr->timestamp,
        .len = 0,
        .value = NULL,
    };
    ret = hey_event_notify(water_sensor_service, &content, water_sensor_no_water_notify_result_cb, attr->ctx);

    return ret;
}
