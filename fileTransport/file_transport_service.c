/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: fileTransport.proto */

#include <errno.h>
#include <assert.h>
#include "fileTransport.pb-c.h"
#include "file_transport_service.h"
#include "hey/schema.h"

#define FILE_TRANSPORT_SERVICE (71 * 256)
#define ACT_IID_CNT 2

static struct hey_service *file_transport_service;

static int32_t action_file_upload_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__FileTransport__ActionInFileUpload *file_upload = iot__service__file_transport__action_in_file_upload__unpack(NULL, len, value);
    if (NULL == file_upload) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct file_transport_file_upload_in action = { 0 };
    action.send_type_case = file_upload->send_type_case;
    struct file_transport_file_upload_file_info_in file;
    switch (action.send_type_case) {
    case FILE_TRANSPORT_FILE_UPLOAD_SEND_TYPE_IN_NOT_SET:
        break;
    case FILE_TRANSPORT_FILE_UPLOAD_SEND_TYPE_IN_FILE:
        file.name = file_upload->file->name;
        file.size = file_upload->file->size;
        action.file = &file;
        break;
    case FILE_TRANSPORT_FILE_UPLOAD_SEND_TYPE_IN_CHUNK:
        action.chunk.data = file_upload->chunk.data;
        action.chunk.len = file_upload->chunk.len;
        break;
    case FILE_TRANSPORT_FILE_UPLOAD_SEND_TYPE_IN_FINAL:
        break;
    default:
        break;
    }
    ret = file_transport_file_upload_start_cb(ctx, &action, user_context);

    iot__service__file_transport__action_in_file_upload__free_unpacked(file_upload, NULL);
    return ret;
}

static int32_t action_file_upload_message_cb(void *cb_data, void *user_context, size_t len, uint8_t *value)
{
    int32_t ret = -1;
    Iot__Service__FileTransport__ActionInFileUpload *file_upload = iot__service__file_transport__action_in_file_upload__unpack(NULL, len, value);
    if (NULL == file_upload) {
        return EINVAL;
    }

    struct file_transport_file_upload_in action = { 0 };
    action.send_type_case = file_upload->send_type_case;
    struct file_transport_file_upload_file_info_in file;
    switch (action.send_type_case) {
    case FILE_TRANSPORT_FILE_UPLOAD_SEND_TYPE_IN_NOT_SET:
        break;
    case FILE_TRANSPORT_FILE_UPLOAD_SEND_TYPE_IN_FILE:
        file.name = file_upload->file->name;
        file.size = file_upload->file->size;
        action.file = &file;
        break;
    case FILE_TRANSPORT_FILE_UPLOAD_SEND_TYPE_IN_CHUNK:
        action.chunk.data = file_upload->chunk.data;
        action.chunk.len = file_upload->chunk.len;
        break;
    case FILE_TRANSPORT_FILE_UPLOAD_SEND_TYPE_IN_FINAL:
        break;
    default:
        break;
    }
    ret = file_transport_file_upload_message_cb(user_context, &action);

    iot__service__file_transport__action_in_file_upload__free_unpacked(file_upload, NULL);
    return ret;
}

static void action_file_upload_stop_cb(void *cb_data, void *user_context)
{
    file_transport_file_upload_stop_cb(user_context);
}

/**
 * @brief file upload action send message of file transport service
 * @param ctx      [action context]
 * @param action   [file upload action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t file_transport_file_upload_send(struct hey_action_ctx *ctx, struct file_transport_file_upload_out *action)
{
    int32_t ret = 0;
    Iot__Service__FileTransport__ActionOutFileUpload *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__FileTransport__ActionOutFileUpload));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__file_transport__action_out_file_upload__init(out);
    out->code = action->code;
    size_t buf_len = iot__service__file_transport__action_out_file_upload__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__file_transport__action_out_file_upload__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief file upload action stop of file transport service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t file_transport_file_upload_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_file_download_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__FileTransport__ActionInFileDownload *file_download = iot__service__file_transport__action_in_file_download__unpack(NULL, len, value);
    if (NULL == file_download) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct file_transport_file_download_in action = { 0 };
    action.message_case = file_download->message_case;
    struct file_transport_file_download_req_file_info_in reqfile;
    switch (action.message_case) {
    case FILE_TRANSPORT_FILE_DOWNLOAD_MESSAGE_IN_NOT_SET:
        break;
    case FILE_TRANSPORT_FILE_DOWNLOAD_MESSAGE_IN_REQFILE:
        reqfile.name = file_download->reqfile->name;
        action.reqfile = &reqfile;
        break;
    case FILE_TRANSPORT_FILE_DOWNLOAD_MESSAGE_IN_CODE:
        action.code = file_download->code;
        break;
    default:
        break;
    }
    ret = file_transport_file_download_start_cb(ctx, &action, user_context);

    iot__service__file_transport__action_in_file_download__free_unpacked(file_download, NULL);
    return ret;
}

static void action_file_download_stop_cb(void *cb_data, void *user_context)
{
    file_transport_file_download_stop_cb(user_context);
}

/**
 * @brief file download action send message of file transport service
 * @param ctx      [action context]
 * @param action   [file download action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t file_transport_file_download_send(struct hey_action_ctx *ctx, struct file_transport_file_download_out *action)
{
    int32_t ret = 0;
    Iot__Service__FileTransport__ActionOutFileDownload *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__FileTransport__ActionOutFileDownload));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__file_transport__action_out_file_download__init(out);
    out->message_case = action->message_case;
    switch (out->message_case) {
    case FILE_TRANSPORT_FILE_DOWNLOAD_MESSAGE_OUT_NOT_SET:
        break;
    case FILE_TRANSPORT_FILE_DOWNLOAD_MESSAGE_OUT_FILE: {
        out->file = malloc(sizeof(Iot__Service__FileTransport__ActionOutFileDownload__FileInfo));
        if (NULL == out->file) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__file_transport__action_out_file_download__file_info__init(out->file);
        out->file->name = action->file->name;
        out->file->size = action->file->size;
    } break;
    case FILE_TRANSPORT_FILE_DOWNLOAD_MESSAGE_OUT_CHUNK:
        out->chunk.data = action->chunk.data;
        out->chunk.len = action->chunk.len;
        break;
    case FILE_TRANSPORT_FILE_DOWNLOAD_MESSAGE_OUT_FINAL:
        break;
    default:
        break;
    }
    size_t buf_len = iot__service__file_transport__action_out_file_download__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__file_transport__action_out_file_download__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    if (out && out->file) {
        free(out->file);
    }
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief file download action stop of file transport service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t file_transport_file_download_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static const struct hey_action_ctx_callbacks file_upload_cbs = {
    .start = action_file_upload_start_cb,
    .message = action_file_upload_message_cb,
    .stop = action_file_upload_stop_cb
};

static const struct hey_action_ctx_callbacks file_download_cbs = {
    .start = action_file_download_start_cb,
    .stop = action_file_download_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = FILE_TRANSPORT_ACTION_FILE_UPLOAD, .type = HEY_ACTION_IN_STREAM_OUT_ONCE, .cbs = &file_upload_cbs },
    [1] = { .iid = FILE_TRANSPORT_ACTION_FILE_DOWNLOAD, .type = HEY_ACTION_IN_ONCE_OUT_STREAM, .cbs = &file_download_cbs },
};

static int file_transport_service_register(Iot__Service__FileTransport__Properties *props)
{
    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    file_transport_service = hey_service_register(FILE_TRANSPORT_SERVICE, &schema_srv, NULL);
    if (NULL == file_transport_service) {
        return errno;
    }

    return 0;
}

/**
 * @brief file transport service initialization
 * @param properties [file transport service properties]
 * @return int32_t   [initialize result]
*/
int32_t file_transport_service_init(const struct file_transport_properties *properties)
{
    return file_transport_service_register(NULL);
}