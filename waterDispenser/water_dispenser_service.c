/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: waterDispenser.proto */

#include <errno.h>
#include <assert.h>
#include "waterDispenser.pb-c.h"
#include "water_dispenser_service.h"
#include "hey/schema.h"

#define WATER_DISPENSER_SERVICE (86 * 256)
#define PROP_IID_CNT 25

static const struct hey_schema_property water_dispenser_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 3, .type = HEY_PROPERTY_TYPE_GENERIC },
    [3] = { .iid = 4, .type = HEY_PROPERTY_TYPE_GENERIC },
    [4] = { .iid = 5, .type = HEY_PROPERTY_TYPE_GENERIC },
    [5] = { .iid = 6, .type = HEY_PROPERTY_TYPE_GENERIC },
    [6] = { .iid = 7, .type = HEY_PROPERTY_TYPE_GENERIC },
    [7] = { .iid = 8, .type = HEY_PROPERTY_TYPE_GENERIC },
    [8] = { .iid = 9, .type = HEY_PROPERTY_TYPE_ARRAY },
    [9] = { .iid = 10, .type = HEY_PROPERTY_TYPE_ARRAY },
    [10] = { .iid = 11, .type = HEY_PROPERTY_TYPE_GENERIC },
    [11] = { .iid = 12, .type = HEY_PROPERTY_TYPE_GENERIC },
    [12] = { .iid = 13, .type = HEY_PROPERTY_TYPE_GENERIC },
    [13] = { .iid = 14, .type = HEY_PROPERTY_TYPE_GENERIC },
    [14] = { .iid = 15, .type = HEY_PROPERTY_TYPE_GENERIC },
    [15] = { .iid = 16, .type = HEY_PROPERTY_TYPE_GENERIC },
    [16] = { .iid = 17, .type = HEY_PROPERTY_TYPE_GENERIC },
    [17] = { .iid = 18, .type = HEY_PROPERTY_TYPE_GENERIC },
    [18] = { .iid = 19, .type = HEY_PROPERTY_TYPE_GENERIC },
    [19] = { .iid = 20, .type = HEY_PROPERTY_TYPE_GENERIC },
    [20] = { .iid = 21, .type = HEY_PROPERTY_TYPE_GENERIC },
    [21] = { .iid = 22, .type = HEY_PROPERTY_TYPE_GENERIC },
    [22] = { .iid = 23, .type = HEY_PROPERTY_TYPE_GENERIC },
    [23] = { .iid = 24, .type = HEY_PROPERTY_TYPE_GENERIC },
    [24] = { .iid = 25, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static struct hey_service *water_dispenser_service;

static Iot__Service__WaterDispenser__UserDefineTemp *_water_dispenser_user_define_temp = NULL;
struct water_dispenser_user_define_temp *water_dispenser_user_define_temp_unpack(const uint8_t *data, size_t len)
{
    _water_dispenser_user_define_temp = iot__service__water_dispenser__user_define_temp__unpack(NULL, len, data);
    if (NULL == _water_dispenser_user_define_temp) {
        return NULL;
    }
    struct water_dispenser_user_define_temp *hey_struct = malloc(sizeof(struct water_dispenser_user_define_temp));
    if (NULL == hey_struct) {
        goto out1;
    }
    hey_struct->status = _water_dispenser_user_define_temp->status;
    hey_struct->temperature = _water_dispenser_user_define_temp->temperature;
    return hey_struct;
out1:
    iot__service__water_dispenser__user_define_temp__free_unpacked(_water_dispenser_user_define_temp, NULL);
    return NULL;
}

void water_dispenser_user_define_temp_free_unpacked(struct water_dispenser_user_define_temp *data)
{
    assert(NULL != data);
    iot__service__water_dispenser__user_define_temp__free_unpacked(_water_dispenser_user_define_temp, NULL);
    free(data);
}

int32_t water_dispenser_user_define_temp_get_packed_size(const struct water_dispenser_user_define_temp *data)
{
    assert(data);
    int ret = 0;
    Iot__Service__WaterDispenser__UserDefineTemp *pb_struct = malloc(sizeof(Iot__Service__WaterDispenser__UserDefineTemp));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__water_dispenser__user_define_temp__init(pb_struct);
    pb_struct->status = data->status;
    pb_struct->temperature = data->temperature;
    ret = iot__service__water_dispenser__user_define_temp__get_packed_size(pb_struct);
    free(pb_struct);
    return ret;
}

int32_t water_dispenser_user_define_temp_pack(const struct water_dispenser_user_define_temp *data, uint8_t *out)
{
    assert(data);
    int ret = 0;
    Iot__Service__WaterDispenser__UserDefineTemp *pb_struct = malloc(sizeof(Iot__Service__WaterDispenser__UserDefineTemp));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__water_dispenser__user_define_temp__init(pb_struct);
    pb_struct->status = data->status;
    pb_struct->temperature = data->temperature;
    ret = iot__service__water_dispenser__user_define_temp__pack(pb_struct, out);
    free(pb_struct);
    return ret;
}

static Iot__Service__WaterDispenser__WaterQuantity *_water_dispenser_water_quantity = NULL;
struct water_dispenser_water_quantity *water_dispenser_water_quantity_unpack(const uint8_t *data, size_t len)
{
    _water_dispenser_water_quantity = iot__service__water_dispenser__water_quantity__unpack(NULL, len, data);
    if (NULL == _water_dispenser_water_quantity) {
        return NULL;
    }
    struct water_dispenser_water_quantity *hey_struct = malloc(sizeof(struct water_dispenser_water_quantity));
    if (NULL == hey_struct) {
        goto out1;
    }
    hey_struct->quantity = _water_dispenser_water_quantity->quantity;
    return hey_struct;
out1:
    iot__service__water_dispenser__water_quantity__free_unpacked(_water_dispenser_water_quantity, NULL);
    return NULL;
}

void water_dispenser_water_quantity_free_unpacked(struct water_dispenser_water_quantity *data)
{
    assert(NULL != data);
    iot__service__water_dispenser__water_quantity__free_unpacked(_water_dispenser_water_quantity, NULL);
    free(data);
}

int32_t water_dispenser_water_quantity_get_packed_size(const struct water_dispenser_water_quantity *data)
{
    assert(data);
    int ret = 0;
    Iot__Service__WaterDispenser__WaterQuantity *pb_struct = malloc(sizeof(Iot__Service__WaterDispenser__WaterQuantity));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__water_dispenser__water_quantity__init(pb_struct);
    pb_struct->quantity = data->quantity;
    ret = iot__service__water_dispenser__water_quantity__get_packed_size(pb_struct);
    free(pb_struct);
    return ret;
}

int32_t water_dispenser_water_quantity_pack(const struct water_dispenser_water_quantity *data, uint8_t *out)
{
    assert(data);
    int ret = 0;
    Iot__Service__WaterDispenser__WaterQuantity *pb_struct = malloc(sizeof(Iot__Service__WaterDispenser__WaterQuantity));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__water_dispenser__water_quantity__init(pb_struct);
    pb_struct->quantity = data->quantity;
    ret = iot__service__water_dispenser__water_quantity__pack(pb_struct, out);
    free(pb_struct);
    return ret;
}

static int32_t service_water_dispenser_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                           size_t len, uint8_t *value)
{
    Iot__Service__WaterDispenser__Properties *props = iot__service__water_dispenser__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct water_dispenser_properties properties = { 0 };
    struct hey_array_node **userdefinetemp = NULL;
    struct hey_array_node **waterquantity = NULL;
    properties.power = props->power;
    properties.watertype = props->watertype;
    properties.screendisplayenabled = props->screendisplayenabled;
    properties.heatenabled = props->heatenabled;
    properties.heatstatus = props->heatstatus;
    properties.coolenabled = props->coolenabled;
    properties.coolstatus = props->coolstatus;
    properties.heatpreservationtime = props->heatpreservationtime;
    if (props->n_userdefinetemp) {
        userdefinetemp = calloc(props->n_userdefinetemp, sizeof(struct hey_array_node *));
        if (userdefinetemp == NULL) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < props->n_userdefinetemp; i++) {
            userdefinetemp[i] = malloc(sizeof(struct hey_array_node));
            if (userdefinetemp[i] == NULL) {
                ret = ENOMEM;
                goto out;
            }
            userdefinetemp[i]->id = props->userdefinetemp[i]->id;
            userdefinetemp[i]->data.data = props->userdefinetemp[i]->data.data;
            userdefinetemp[i]->data.len = props->userdefinetemp[i]->data.len;
        }
        properties.n_userdefinetemp = props->n_userdefinetemp;
        properties.userdefinetemp = userdefinetemp;
    }
    if (props->n_waterquantity) {
        waterquantity = calloc(props->n_waterquantity, sizeof(struct hey_array_node *));
        if (waterquantity == NULL) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < props->n_waterquantity; i++) {
            waterquantity[i] = malloc(sizeof(struct hey_array_node));
            if (waterquantity[i] == NULL) {
                ret = ENOMEM;
                goto out;
            }
            waterquantity[i]->id = props->waterquantity[i]->id;
            waterquantity[i]->data.data = props->waterquantity[i]->data.data;
            waterquantity[i]->data.len = props->waterquantity[i]->data.len;
        }
        properties.n_waterquantity = props->n_waterquantity;
        properties.waterquantity = waterquantity;
    }
    properties.heattime = props->heattime;
    properties.machinestatus = props->machinestatus;
    properties.childlockenabled = props->childlockenabled;
    properties.sterilizationenabled = props->sterilizationenabled;
    properties.sterilizationleftdays = props->sterilizationleftdays;
    properties.sterilizationperiod = props->sterilizationperiod;
    properties.sterilizationpercent = props->sterilizationpercent;
    properties.waterflowstatus = props->waterflowstatus;
    properties.operationmode = props->operationmode;
    properties.autoseason = props->autoseason;
    properties.teatemp = props->teatemp;
    properties.coffeetemp = props->coffeetemp;
    properties.honeytemp = props->honeytemp;
    properties.milktemp = props->milktemp;
    properties.currenttemperature = props->currenttemperature;
    ret = water_dispenser_properties_write_cb(n_iid, iids, &properties);

out:
    if (userdefinetemp) {
        for (int i = 0; i < props->n_userdefinetemp; i++) {
            free(userdefinetemp[i]);
        }
        free(userdefinetemp);
    }
    if (waterquantity) {
        for (int i = 0; i < props->n_waterquantity; i++) {
            free(waterquantity[i]);
        }
        free(waterquantity);
    }
    iot__service__water_dispenser__properties__free_unpacked(props, NULL);
    return ret;
}

static int32_t service_water_dispenser_properties_array_add_cb(void *cb_data, uint32_t iid, size_t len, uint8_t *value)
{
    switch(iid) {
    case WATER_DISPENSER_PROPERTY_USERDEFINETEMP:
        return water_dispenser_userdefinetemp_array_add_cb(len, value);
    case WATER_DISPENSER_PROPERTY_WATERQUANTITY:
        return water_dispenser_waterquantity_array_add_cb(len, value);
    default:
        return -1;
    }
}

static int32_t service_water_dispenser_properties_array_del_cb(void *cb_data, uint32_t iid, size_t n_id, uint32_t *ids)
{
    switch(iid) {
    case WATER_DISPENSER_PROPERTY_USERDEFINETEMP:
        return water_dispenser_userdefinetemp_array_del_cb(n_id, ids);
    case WATER_DISPENSER_PROPERTY_WATERQUANTITY:
        return water_dispenser_waterquantity_array_del_cb(n_id, ids);
    default:
        return -1;
    }
}

static int32_t service_water_dispenser_properties_array_replace_cb(void *cb_data, uint32_t iid, uint32_t id, size_t len, uint8_t *value)
{
    switch(iid) {
    case WATER_DISPENSER_PROPERTY_USERDEFINETEMP:
        return water_dispenser_userdefinetemp_array_replace_cb(id, len, value);
    case WATER_DISPENSER_PROPERTY_WATERQUANTITY:
        return water_dispenser_waterquantity_array_replace_cb(id, len, value);
    default:
        return -1;
    }
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_water_dispenser_properties_write_cb,
    .array_add = service_water_dispenser_properties_array_add_cb,
    .array_del = service_water_dispenser_properties_array_del_cb,
    .array_replace = service_water_dispenser_properties_array_replace_cb,
};

static int water_dispenser_service_register(Iot__Service__WaterDispenser__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__water_dispenser__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__water_dispenser__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)water_dispenser_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    water_dispenser_service = hey_service_register(WATER_DISPENSER_SERVICE, &schema_srv, NULL);
    if (NULL == water_dispenser_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of water dispenser service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t water_dispenser_properties_update(size_t count, uint32_t *enumerate, struct water_dispenser_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__WaterDispenser__Properties *props = NULL;
    uint8_t *buf = NULL;
    ArrayNode **userdefinetemp = NULL;
    ArrayNode **waterquantity = NULL;
    props = malloc(sizeof(Iot__Service__WaterDispenser__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__water_dispenser__properties__init(props);
    if (properties->n_userdefinetemp) {
        userdefinetemp = calloc(properties->n_userdefinetemp, sizeof(ArrayNode *));
        if (NULL == userdefinetemp) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < properties->n_userdefinetemp; i++) {
            userdefinetemp[i] = malloc(sizeof(ArrayNode));
            if (NULL == userdefinetemp[i]) {
                ret = ENOMEM;
                goto out;
            }
            array_node__init(userdefinetemp[i]);
            userdefinetemp[i]->id = properties->userdefinetemp[i]->id;
            userdefinetemp[i]->data.data = properties->userdefinetemp[i]->data.data;
            userdefinetemp[i]->data.len = properties->userdefinetemp[i]->data.len;
        }
    }
    if (properties->n_waterquantity) {
        waterquantity = calloc(properties->n_waterquantity, sizeof(ArrayNode *));
        if (NULL == waterquantity) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < properties->n_waterquantity; i++) {
            waterquantity[i] = malloc(sizeof(ArrayNode));
            if (NULL == waterquantity[i]) {
                ret = ENOMEM;
                goto out;
            }
            array_node__init(waterquantity[i]);
            waterquantity[i]->id = properties->waterquantity[i]->id;
            waterquantity[i]->data.data = properties->waterquantity[i]->data.data;
            waterquantity[i]->data.len = properties->waterquantity[i]->data.len;
        }
    }
    props->power = properties->power;
    props->watertype = properties->watertype;
    props->screendisplayenabled = properties->screendisplayenabled;
    props->heatenabled = properties->heatenabled;
    props->heatstatus = properties->heatstatus;
    props->coolenabled = properties->coolenabled;
    props->coolstatus = properties->coolstatus;
    props->heatpreservationtime = properties->heatpreservationtime;
    props->n_userdefinetemp = properties->n_userdefinetemp;
    props->userdefinetemp = userdefinetemp;
    props->n_waterquantity = properties->n_waterquantity;
    props->waterquantity = waterquantity;
    props->heattime = properties->heattime;
    props->machinestatus = properties->machinestatus;
    props->childlockenabled = properties->childlockenabled;
    props->sterilizationenabled = properties->sterilizationenabled;
    props->sterilizationleftdays = properties->sterilizationleftdays;
    props->sterilizationperiod = properties->sterilizationperiod;
    props->sterilizationpercent = properties->sterilizationpercent;
    props->waterflowstatus = properties->waterflowstatus;
    props->operationmode = properties->operationmode;
    props->autoseason = properties->autoseason;
    props->teatemp = properties->teatemp;
    props->coffeetemp = properties->coffeetemp;
    props->honeytemp = properties->honeytemp;
    props->milktemp = properties->milktemp;
    props->currenttemperature = properties->currenttemperature;

    size_t buf_len;
    buf_len = iot__service__water_dispenser__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__water_dispenser__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(water_dispenser_service, &content);

out:
    free(props);
    free(buf);
    if (userdefinetemp) {
        for (int i = 0; i < properties->n_userdefinetemp; i++) {
            free(userdefinetemp[i]);
        }
        free(userdefinetemp);
    }
    if (waterquantity) {
        for (int i = 0; i < properties->n_waterquantity; i++) {
            free(waterquantity[i]);
        }
        free(waterquantity);
    }
    return ret;
}

/**
 * @brief water dispenser service initialization
 * @param properties [water dispenser service properties]
 * @return int32_t   [initialize result]
*/
int32_t water_dispenser_service_init(const struct water_dispenser_properties *properties)
{
    int ret = 0;
    Iot__Service__WaterDispenser__Properties *props = NULL;
    ArrayNode **userdefinetemp = NULL;
    ArrayNode **waterquantity = NULL;
    props = malloc(sizeof(Iot__Service__WaterDispenser__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__water_dispenser__properties__init(props);
    if (NULL != properties) {
        if (properties->n_userdefinetemp) {
            userdefinetemp = calloc(properties->n_userdefinetemp, sizeof(ArrayNode *));
            if (NULL == userdefinetemp) {
                ret = ENOMEM;
                goto out;
            }
            for (int i = 0; i < properties->n_userdefinetemp; i++) {
                userdefinetemp[i] = malloc(sizeof(ArrayNode));
                if (NULL == userdefinetemp[i]) {
                    ret = ENOMEM;
                    goto out;
                }
                array_node__init(userdefinetemp[i]);
                userdefinetemp[i]->id = properties->userdefinetemp[i]->id;
                userdefinetemp[i]->data.data = properties->userdefinetemp[i]->data.data;
                userdefinetemp[i]->data.len = properties->userdefinetemp[i]->data.len;
            }
        }
        if (properties->n_waterquantity) {
            waterquantity = calloc(properties->n_waterquantity, sizeof(ArrayNode *));
            if (NULL == waterquantity) {
                ret = ENOMEM;
                goto out;
            }
            for (int i = 0; i < properties->n_waterquantity; i++) {
                waterquantity[i] = malloc(sizeof(ArrayNode));
                if (NULL == waterquantity[i]) {
                    ret = ENOMEM;
                    goto out;
                }
                array_node__init(waterquantity[i]);
                waterquantity[i]->id = properties->waterquantity[i]->id;
                waterquantity[i]->data.data = properties->waterquantity[i]->data.data;
                waterquantity[i]->data.len = properties->waterquantity[i]->data.len;
            }
        }
        props->power = properties->power;
        props->watertype = properties->watertype;
        props->screendisplayenabled = properties->screendisplayenabled;
        props->heatenabled = properties->heatenabled;
        props->heatstatus = properties->heatstatus;
        props->coolenabled = properties->coolenabled;
        props->coolstatus = properties->coolstatus;
        props->heatpreservationtime = properties->heatpreservationtime;
        props->n_userdefinetemp = properties->n_userdefinetemp;
        props->userdefinetemp = userdefinetemp;
        props->n_waterquantity = properties->n_waterquantity;
        props->waterquantity = waterquantity;
        props->heattime = properties->heattime;
        props->machinestatus = properties->machinestatus;
        props->childlockenabled = properties->childlockenabled;
        props->sterilizationenabled = properties->sterilizationenabled;
        props->sterilizationleftdays = properties->sterilizationleftdays;
        props->sterilizationperiod = properties->sterilizationperiod;
        props->sterilizationpercent = properties->sterilizationpercent;
        props->waterflowstatus = properties->waterflowstatus;
        props->operationmode = properties->operationmode;
        props->autoseason = properties->autoseason;
        props->teatemp = properties->teatemp;
        props->coffeetemp = properties->coffeetemp;
        props->honeytemp = properties->honeytemp;
        props->milktemp = properties->milktemp;
        props->currenttemperature = properties->currenttemperature;
    }

    ret = water_dispenser_service_register(props);

out:
    free(props);
    if (userdefinetemp) {
        for (int i = 0; i < properties->n_userdefinetemp; i++) {
            free(userdefinetemp[i]);
        }
        free(userdefinetemp);
    }
    if (waterquantity) {
        for (int i = 0; i < properties->n_waterquantity; i++) {
            free(waterquantity[i]);
        }
        free(waterquantity);
    }
    return ret;
}