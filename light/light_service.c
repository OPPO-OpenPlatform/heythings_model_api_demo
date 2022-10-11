/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: light.proto */

#include <errno.h>
#include <assert.h>
#include "light.pb-c.h"
#include "light_service.h"
#include "hey/schema.h"

#define LIGHT_SERVICE (2 * 256)
#define PROP_IID_CNT 16
#define ACT_IID_CNT 1

static const struct hey_schema_property light_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 3, .type = HEY_PROPERTY_TYPE_GENERIC },
    [3] = { .iid = 4, .type = HEY_PROPERTY_TYPE_GENERIC },
    [4] = { .iid = 5, .type = HEY_PROPERTY_TYPE_GENERIC },
    [5] = { .iid = 6, .type = HEY_PROPERTY_TYPE_GENERIC },
    [6] = { .iid = 7, .type = HEY_PROPERTY_TYPE_GENERIC },
    [7] = { .iid = 9, .type = HEY_PROPERTY_TYPE_GENERIC },
    [8] = { .iid = 11, .type = HEY_PROPERTY_TYPE_GENERIC },
    [9] = { .iid = 12, .type = HEY_PROPERTY_TYPE_ARRAY },
    [10] = { .iid = 13, .type = HEY_PROPERTY_TYPE_GENERIC },
    [11] = { .iid = 14, .type = HEY_PROPERTY_TYPE_GENERIC },
    [12] = { .iid = 15, .type = HEY_PROPERTY_TYPE_GENERIC },
    [13] = { .iid = 16, .type = HEY_PROPERTY_TYPE_GENERIC },
    [14] = { .iid = 17, .type = HEY_PROPERTY_TYPE_GENERIC },
    [15] = { .iid = 18, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static struct hey_service *light_service;

static int32_t action_light_language_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Light__ActionInLightLanguage *light_language = iot__service__light__action_in_light_language__unpack(NULL, len, value);
    if (NULL == light_language) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct light_light_language_in action = { 0 };
    action.mode = light_language->mode;
    ret = light_light_language_start_cb(ctx, &action, user_context);

    iot__service__light__action_in_light_language__free_unpacked(light_language, NULL);
    return ret;
}

static void action_light_language_stop_cb(void *cb_data, void *user_context)
{
    light_light_language_stop_cb(user_context);
}

/**
 * @brief light language action send message of light service
 * @param ctx      [action context]
 * @param action   [light language action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t light_light_language_send(struct hey_action_ctx *ctx, struct light_light_language_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief light language action stop of light service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t light_light_language_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static Iot__Service__Light__SceneCttBrightness *_light_scene_ctt_brightness = NULL;
struct light_scene_ctt_brightness *light_scene_ctt_brightness_unpack(const uint8_t *data, size_t len)
{
    _light_scene_ctt_brightness = iot__service__light__scene_ctt_brightness__unpack(NULL, len, data);
    if (NULL == _light_scene_ctt_brightness) {
        return NULL;
    }
    struct light_scene_ctt_brightness *hey_struct = malloc(sizeof(struct light_scene_ctt_brightness));
    if (NULL == hey_struct) {
        goto out1;
    }
    hey_struct->lightmode = _light_scene_ctt_brightness->lightmode;
    hey_struct->colortemp = _light_scene_ctt_brightness->colortemp;
    hey_struct->brightness = _light_scene_ctt_brightness->brightness;
    return hey_struct;
out1:
    iot__service__light__scene_ctt_brightness__free_unpacked(_light_scene_ctt_brightness, NULL);
    return NULL;
}

void light_scene_ctt_brightness_free_unpacked(struct light_scene_ctt_brightness *data)
{
    assert(NULL != data);
    iot__service__light__scene_ctt_brightness__free_unpacked(_light_scene_ctt_brightness, NULL);
    free(data);
}

int32_t light_scene_ctt_brightness_get_packed_size(const struct light_scene_ctt_brightness *data)
{
    assert(data);
    int ret = 0;
    Iot__Service__Light__SceneCttBrightness *pb_struct = malloc(sizeof(Iot__Service__Light__SceneCttBrightness));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__light__scene_ctt_brightness__init(pb_struct);
    pb_struct->lightmode = data->lightmode;
    pb_struct->colortemp = data->colortemp;
    pb_struct->brightness = data->brightness;
    ret = iot__service__light__scene_ctt_brightness__get_packed_size(pb_struct);
    free(pb_struct);
    return ret;
}

int32_t light_scene_ctt_brightness_pack(const struct light_scene_ctt_brightness *data, uint8_t *out)
{
    assert(data);
    int ret = 0;
    Iot__Service__Light__SceneCttBrightness *pb_struct = malloc(sizeof(Iot__Service__Light__SceneCttBrightness));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__light__scene_ctt_brightness__init(pb_struct);
    pb_struct->lightmode = data->lightmode;
    pb_struct->colortemp = data->colortemp;
    pb_struct->brightness = data->brightness;
    ret = iot__service__light__scene_ctt_brightness__pack(pb_struct, out);
    free(pb_struct);
    return ret;
}

static int32_t service_light_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                 size_t len, uint8_t *value)
{
    Iot__Service__Light__Properties *props = iot__service__light__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct light_properties properties = { 0 };
    struct light_rgb colorrgb = { 0 };
    struct light_free_control_night_light freecontrolnightlight = { 0 };
    struct hey_array_node **scenecttbrightness = NULL;
    struct light_study_time_setting studytimesetting = { 0 };
    struct light_light_study_mode lightstudymode = { 0 };
    if (props->colorrgb) {
        colorrgb.r = props->colorrgb->r;
        colorrgb.g = props->colorrgb->g;
        colorrgb.b = props->colorrgb->b;
    }
    if (props->freecontrolnightlight) {
        freecontrolnightlight.enable = props->freecontrolnightlight->enable;
        freecontrolnightlight.starthour = props->freecontrolnightlight->starthour;
        freecontrolnightlight.startmin = props->freecontrolnightlight->startmin;
        freecontrolnightlight.endhour = props->freecontrolnightlight->endhour;
        freecontrolnightlight.endmin = props->freecontrolnightlight->endmin;
    }
    if (props->studytimesetting) {
        studytimesetting.repeatnum = props->studytimesetting->repeatnum;
        studytimesetting.studytime = props->studytimesetting->studytime;
        studytimesetting.breaktime = props->studytimesetting->breaktime;
    }
    if (props->lightstudymode) {
        lightstudymode.mode = props->lightstudymode->mode;
        lightstudymode.duration = props->lightstudymode->duration;
        lightstudymode.settingtime = props->lightstudymode->settingtime;
    }
    properties.power = props->power;
    properties.brightness = props->brightness;
    properties.cct = props->cct;
    properties.lightmode = props->lightmode;
    properties.autocolortemperature = props->autocolortemperature;
    properties.colorrgb = &colorrgb;
    properties.colorsaturation = props->colorsaturation;
    properties.autobrightness = props->autobrightness;
    properties.freecontrolnightlight = &freecontrolnightlight;
    if (props->n_scenecttbrightness) {
        scenecttbrightness = calloc(props->n_scenecttbrightness, sizeof(struct hey_array_node *));
        if (scenecttbrightness == NULL) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < props->n_scenecttbrightness; i++) {
            scenecttbrightness[i] = malloc(sizeof(struct hey_array_node));
            if (scenecttbrightness[i] == NULL) {
                ret = ENOMEM;
                goto out;
            }
            scenecttbrightness[i]->id = props->scenecttbrightness[i]->id;
            scenecttbrightness[i]->data.data = props->scenecttbrightness[i]->data.data;
            scenecttbrightness[i]->data.len = props->scenecttbrightness[i]->data.len;
        }
        properties.n_scenecttbrightness = props->n_scenecttbrightness;
        properties.scenecttbrightness = scenecttbrightness;
    }
    properties.colorcttmode = props->colorcttmode;
    properties.studytimesetting = &studytimesetting;
    properties.appointmentpoweron = props->appointmentpoweron;
    properties.appointmentpoweroff = props->appointmentpoweroff;
    properties.lightturnoffdelayenabled = props->lightturnoffdelayenabled;
    properties.lightstudymode = &lightstudymode;
    ret = light_properties_write_cb(n_iid, iids, &properties);

out:
    if (scenecttbrightness) {
        for (int i = 0; i < props->n_scenecttbrightness; i++) {
            free(scenecttbrightness[i]);
        }
        free(scenecttbrightness);
    }
    iot__service__light__properties__free_unpacked(props, NULL);
    return ret;
}

static int32_t service_light_properties_array_add_cb(void *cb_data, uint32_t iid, size_t len, uint8_t *value)
{
    switch(iid) {
    case LIGHT_PROPERTY_SCENECTTBRIGHTNESS:
        return light_scenecttbrightness_array_add_cb(len, value);
    default:
        return -1;
    }
}

static int32_t service_light_properties_array_del_cb(void *cb_data, uint32_t iid, size_t n_id, uint32_t *ids)
{
    switch(iid) {
    case LIGHT_PROPERTY_SCENECTTBRIGHTNESS:
        return light_scenecttbrightness_array_del_cb(n_id, ids);
    default:
        return -1;
    }
}

static int32_t service_light_properties_array_replace_cb(void *cb_data, uint32_t iid, uint32_t id, size_t len, uint8_t *value)
{
    switch(iid) {
    case LIGHT_PROPERTY_SCENECTTBRIGHTNESS:
        return light_scenecttbrightness_array_replace_cb(id, len, value);
    default:
        return -1;
    }
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_light_properties_write_cb,
    .array_add = service_light_properties_array_add_cb,
    .array_del = service_light_properties_array_del_cb,
    .array_replace = service_light_properties_array_replace_cb,
};

static const struct hey_action_ctx_callbacks light_language_cbs = {
    .start = action_light_language_start_cb,
    .stop = action_light_language_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = LIGHT_ACTION_LIGHT_LANGUAGE, .type = HEY_ACTION_ONCE, .cbs = &light_language_cbs },
};

static int light_service_register(Iot__Service__Light__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__light__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__light__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)light_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    light_service = hey_service_register(LIGHT_SERVICE, &schema_srv, NULL);
    if (NULL == light_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of light service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t light_properties_update(size_t count, uint32_t *enumerate, struct light_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__Light__Properties *props = NULL;
    uint8_t *buf = NULL;
    Iot__Service__Light__RGB *colorrgb = NULL;
    Iot__Service__Light__FreeControlNightLight *freecontrolnightlight = NULL;
    ArrayNode **scenecttbrightness = NULL;
    Iot__Service__Light__StudyTimeSetting *studytimesetting = NULL;
    Iot__Service__Light__LightStudyMode *lightstudymode = NULL;
    props = malloc(sizeof(Iot__Service__Light__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__light__properties__init(props);
    if (properties->colorrgb) {
        colorrgb = malloc(sizeof(Iot__Service__Light__RGB));
        if (NULL == colorrgb) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__light__rgb__init(colorrgb);
        colorrgb->r = properties->colorrgb->r;
        colorrgb->g = properties->colorrgb->g;
        colorrgb->b = properties->colorrgb->b;
    }
    if (properties->freecontrolnightlight) {
        freecontrolnightlight = malloc(sizeof(Iot__Service__Light__FreeControlNightLight));
        if (NULL == freecontrolnightlight) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__light__free_control_night_light__init(freecontrolnightlight);
        freecontrolnightlight->enable = properties->freecontrolnightlight->enable;
        freecontrolnightlight->starthour = properties->freecontrolnightlight->starthour;
        freecontrolnightlight->startmin = properties->freecontrolnightlight->startmin;
        freecontrolnightlight->endhour = properties->freecontrolnightlight->endhour;
        freecontrolnightlight->endmin = properties->freecontrolnightlight->endmin;
    }
    if (properties->n_scenecttbrightness) {
        scenecttbrightness = calloc(properties->n_scenecttbrightness, sizeof(ArrayNode *));
        if (NULL == scenecttbrightness) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < properties->n_scenecttbrightness; i++) {
            scenecttbrightness[i] = malloc(sizeof(ArrayNode));
            if (NULL == scenecttbrightness[i]) {
                ret = ENOMEM;
                goto out;
            }
            array_node__init(scenecttbrightness[i]);
            scenecttbrightness[i]->id = properties->scenecttbrightness[i]->id;
            scenecttbrightness[i]->data.data = properties->scenecttbrightness[i]->data.data;
            scenecttbrightness[i]->data.len = properties->scenecttbrightness[i]->data.len;
        }
    }
    if (properties->studytimesetting) {
        studytimesetting = malloc(sizeof(Iot__Service__Light__StudyTimeSetting));
        if (NULL == studytimesetting) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__light__study_time_setting__init(studytimesetting);
        studytimesetting->repeatnum = properties->studytimesetting->repeatnum;
        studytimesetting->studytime = properties->studytimesetting->studytime;
        studytimesetting->breaktime = properties->studytimesetting->breaktime;
    }
    if (properties->lightstudymode) {
        lightstudymode = malloc(sizeof(Iot__Service__Light__LightStudyMode));
        if (NULL == lightstudymode) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__light__light_study_mode__init(lightstudymode);
        lightstudymode->mode = properties->lightstudymode->mode;
        lightstudymode->duration = properties->lightstudymode->duration;
        lightstudymode->settingtime = properties->lightstudymode->settingtime;
    }
    props->power = properties->power;
    props->brightness = properties->brightness;
    props->cct = properties->cct;
    props->lightmode = properties->lightmode;
    props->autocolortemperature = properties->autocolortemperature;
    props->colorrgb = colorrgb;
    props->colorsaturation = properties->colorsaturation;
    props->autobrightness = properties->autobrightness;
    props->freecontrolnightlight = freecontrolnightlight;
    props->n_scenecttbrightness = properties->n_scenecttbrightness;
    props->scenecttbrightness = scenecttbrightness;
    props->colorcttmode = properties->colorcttmode;
    props->studytimesetting = studytimesetting;
    props->appointmentpoweron = properties->appointmentpoweron;
    props->appointmentpoweroff = properties->appointmentpoweroff;
    props->lightturnoffdelayenabled = properties->lightturnoffdelayenabled;
    props->lightstudymode = lightstudymode;

    size_t buf_len;
    buf_len = iot__service__light__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__light__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(light_service, &content);

out:
    free(props);
    free(buf);
    free(colorrgb);
    free(freecontrolnightlight);
    if (scenecttbrightness) {
        for (int i = 0; i < properties->n_scenecttbrightness; i++) {
            free(scenecttbrightness[i]);
        }
        free(scenecttbrightness);
    }
    free(studytimesetting);
    free(lightstudymode);
    return ret;
}

/**
 * @brief light service initialization
 * @param properties [light service properties]
 * @return int32_t   [initialize result]
*/
int32_t light_service_init(const struct light_properties *properties)
{
    int ret = 0;
    Iot__Service__Light__Properties *props = NULL;
    Iot__Service__Light__RGB *colorrgb = NULL;
    Iot__Service__Light__FreeControlNightLight *freecontrolnightlight = NULL;
    ArrayNode **scenecttbrightness = NULL;
    Iot__Service__Light__StudyTimeSetting *studytimesetting = NULL;
    Iot__Service__Light__LightStudyMode *lightstudymode = NULL;
    props = malloc(sizeof(Iot__Service__Light__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__light__properties__init(props);
    if (NULL != properties) {
        if (properties->colorrgb) {
            colorrgb = malloc(sizeof(Iot__Service__Light__RGB));
            if (NULL == colorrgb) {
                ret = ENOMEM;
                goto out;
            }
            iot__service__light__rgb__init(colorrgb);
            colorrgb->r = properties->colorrgb->r;
            colorrgb->g = properties->colorrgb->g;
            colorrgb->b = properties->colorrgb->b;
        }
        if (properties->freecontrolnightlight) {
            freecontrolnightlight = malloc(sizeof(Iot__Service__Light__FreeControlNightLight));
            if (NULL == freecontrolnightlight) {
                ret = ENOMEM;
                goto out;
            }
            iot__service__light__free_control_night_light__init(freecontrolnightlight);
            freecontrolnightlight->enable = properties->freecontrolnightlight->enable;
            freecontrolnightlight->starthour = properties->freecontrolnightlight->starthour;
            freecontrolnightlight->startmin = properties->freecontrolnightlight->startmin;
            freecontrolnightlight->endhour = properties->freecontrolnightlight->endhour;
            freecontrolnightlight->endmin = properties->freecontrolnightlight->endmin;
        }
        if (properties->n_scenecttbrightness) {
            scenecttbrightness = calloc(properties->n_scenecttbrightness, sizeof(ArrayNode *));
            if (NULL == scenecttbrightness) {
                ret = ENOMEM;
                goto out;
            }
            for (int i = 0; i < properties->n_scenecttbrightness; i++) {
                scenecttbrightness[i] = malloc(sizeof(ArrayNode));
                if (NULL == scenecttbrightness[i]) {
                    ret = ENOMEM;
                    goto out;
                }
                array_node__init(scenecttbrightness[i]);
                scenecttbrightness[i]->id = properties->scenecttbrightness[i]->id;
                scenecttbrightness[i]->data.data = properties->scenecttbrightness[i]->data.data;
                scenecttbrightness[i]->data.len = properties->scenecttbrightness[i]->data.len;
            }
        }
        if (properties->studytimesetting) {
            studytimesetting = malloc(sizeof(Iot__Service__Light__StudyTimeSetting));
            if (NULL == studytimesetting) {
                ret = ENOMEM;
                goto out;
            }
            iot__service__light__study_time_setting__init(studytimesetting);
            studytimesetting->repeatnum = properties->studytimesetting->repeatnum;
            studytimesetting->studytime = properties->studytimesetting->studytime;
            studytimesetting->breaktime = properties->studytimesetting->breaktime;
        }
        if (properties->lightstudymode) {
            lightstudymode = malloc(sizeof(Iot__Service__Light__LightStudyMode));
            if (NULL == lightstudymode) {
                ret = ENOMEM;
                goto out;
            }
            iot__service__light__light_study_mode__init(lightstudymode);
            lightstudymode->mode = properties->lightstudymode->mode;
            lightstudymode->duration = properties->lightstudymode->duration;
            lightstudymode->settingtime = properties->lightstudymode->settingtime;
        }
        props->power = properties->power;
        props->brightness = properties->brightness;
        props->cct = properties->cct;
        props->lightmode = properties->lightmode;
        props->autocolortemperature = properties->autocolortemperature;
        props->colorrgb = colorrgb;
        props->colorsaturation = properties->colorsaturation;
        props->autobrightness = properties->autobrightness;
        props->freecontrolnightlight = freecontrolnightlight;
        props->n_scenecttbrightness = properties->n_scenecttbrightness;
        props->scenecttbrightness = scenecttbrightness;
        props->colorcttmode = properties->colorcttmode;
        props->studytimesetting = studytimesetting;
        props->appointmentpoweron = properties->appointmentpoweron;
        props->appointmentpoweroff = properties->appointmentpoweroff;
        props->lightturnoffdelayenabled = properties->lightturnoffdelayenabled;
        props->lightstudymode = lightstudymode;
    }

    ret = light_service_register(props);

out:
    free(props);
    free(colorrgb);
    free(freecontrolnightlight);
    if (scenecttbrightness) {
        for (int i = 0; i < properties->n_scenecttbrightness; i++) {
            free(scenecttbrightness[i]);
        }
        free(scenecttbrightness);
    }
    free(studytimesetting);
    free(lightstudymode);
    return ret;
}