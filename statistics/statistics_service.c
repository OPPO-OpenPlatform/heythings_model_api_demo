/**
 * Copyright (c) 2008-2021, OPPO Mobile Comm Corp., Ltd
 * VENDOR_EDIT
 * @file statistics_service.c
 * @brief
 * @version
 * @date 2021-4
 * @author
 */

#include <errno.h>

#include "statistics.pb-c.h"
#include "statistics_service.h"
#include "hey_schema_api.h"

#define STATISTICS_SERVICE 0xFF00
#define PROP_IID_CNT 1

static const unsigned int statistics_properties_iids[] = { 1 };
static struct hey_service *statistics_service;

static int service_statistics_properties_write_cb(void *cb_data, size_t n_iid, unsigned int *iids,
                                                  size_t len, unsigned char *value)
{
    Iot__Service__Statistics__Properties *props = iot__service__statistics__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    struct statistics_properties properties;
    struct hey_array_node *statisticsdata[props->n_statisticsdata];
    for (int i = 0; i < props->n_statisticsdata; i++) {
        statisticsdata[i]->id = props->statisticsdata[i]->id;
        statisticsdata[i]->data.data = props->statisticsdata[i]->data.data;
        statisticsdata[i]->data.len = props->statisticsdata[i]->data.len;
    }
    properties.n_statisticsdata = props->n_statisticsdata;
    properties.statisticsdata = &statisticsdata;
    int ret = statistics_properties_write_cb(n_iid, iids, &properties);

    iot__service__statistics__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_statistics_properties_write_cb
};

static int statistics_service_register(Iot__Service__Statistics__Properties *props)
{
    unsigned char *buf;
    size_t buf_len;
    buf_len = iot__service__statistics__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__statistics__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (unsigned int *)statistics_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    statistics_service = hey_service_register(STATISTICS_SERVICE, &schema_srv, NULL);
    if (NULL == statistics_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of statistics service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int       [update result]
 */
int statistics_properties_update(size_t count, unsigned int *enumerate, struct statistics_properties *properties)
{
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__Statistics__Properties *props = NULL;
    unsigned char *buf = NULL;
    ArrayNode **statisticsdata = NULL;
    props = malloc(sizeof(Iot__Service__Statistics__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__statistics__properties__init(props);
    if (properties->n_statisticsdata) {
        statisticsdata = calloc(1, properties->n_statisticsdata * sizeof(ArrayNode *));
        if (NULL == statisticsdata) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < properties->n_statisticsdata; i++) {
            statisticsdata[i] = malloc(sizeof(ArrayNode));
            if (NULL == statisticsdata[i]) {
                ret = ENOMEM;
                goto out;
            }
            array_node__init(statisticsdata[i]);
            statisticsdata[i]->id = properties->statisticsdata[i]->id;
            statisticsdata[i]->data.data = properties->statisticsdata[i]->data.data;
            statisticsdata[i]->data.len = properties->statisticsdata[i]->data.len;
        }
    }
    props->n_statisticsdata = properties->n_statisticsdata;
    props->statisticsdata = statisticsdata;

    size_t buf_len;
    buf_len = iot__service__statistics__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__statistics__properties__pack(props, buf);
    }

    struct hey_properties_update_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(statistics_service, &content);

out:
    free(props);
    free(buf);
    if (statisticsdata) {
        for (int i = 0; i < properties->n_statisticsdata; i++) {
            free(statisticsdata[i]);
        }
        free(statisticsdata);
    }
    return ret;
}

/**
 * @brief statistics service initialization
 * @param properties [statistics service properties]
 * @return int       [initialize result]
*/
int statistics_service_init(const struct statistics_properties *properties)
{
    int ret = 0;
    Iot__Service__Statistics__Properties *props = NULL;
    ArrayNode **statisticsdata = NULL;
    props = malloc(sizeof(Iot__Service__Statistics__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__statistics__properties__init(props);
    if (NULL != properties) {
        if (properties->n_statisticsdata) {
            statisticsdata = calloc(1, properties->n_statisticsdata * sizeof(ArrayNode *));
            if (NULL == statisticsdata) {
                ret = ENOMEM;
                goto out;
            }
            for (int i = 0; i < properties->n_statisticsdata; i++) {
                statisticsdata[i] = malloc(sizeof(ArrayNode));
                if (NULL == statisticsdata[i]) {
                    ret = ENOMEM;
                    goto out;
                }
                array_node__init(statisticsdata[i]);
                statisticsdata[i]->id = properties->statisticsdata[i]->id;
                statisticsdata[i]->data.data = properties->statisticsdata[i]->data.data;
                statisticsdata[i]->data.len = properties->statisticsdata[i]->data.len;
            }
        }
        props->n_statisticsdata = properties->n_statisticsdata;
        props->statisticsdata = statisticsdata;
    }

    ret = statistics_service_register(props);

out:
    free(props);
    if (statisticsdata) {
        for (int i = 0; i < properties->n_statisticsdata; i++) {
            free(statisticsdata[i]);
        }
        free(statisticsdata);
    }
    return ret;
}
