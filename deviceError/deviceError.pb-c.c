/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: deviceError.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "deviceError.pb-c.h"
void   iot__service__device_error__error_no__init
                     (Iot__Service__DeviceError__ErrorNo         *message)
{
  static const Iot__Service__DeviceError__ErrorNo init_value = IOT__SERVICE__DEVICE_ERROR__ERROR_NO__INIT;
  *message = init_value;
}
size_t iot__service__device_error__error_no__get_packed_size
                     (const Iot__Service__DeviceError__ErrorNo *message)
{
  assert(message->base.descriptor == &iot__service__device_error__error_no__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__device_error__error_no__pack
                     (const Iot__Service__DeviceError__ErrorNo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__device_error__error_no__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__device_error__error_no__pack_to_buffer
                     (const Iot__Service__DeviceError__ErrorNo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__device_error__error_no__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__DeviceError__ErrorNo *
       iot__service__device_error__error_no__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__DeviceError__ErrorNo *)
     protobuf_c_message_unpack (&iot__service__device_error__error_no__descriptor,
                                allocator, len, data);
}
void   iot__service__device_error__error_no__free_unpacked
                     (Iot__Service__DeviceError__ErrorNo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__device_error__error_no__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__device_error__current_error_no__init
                     (Iot__Service__DeviceError__CurrentErrorNo         *message)
{
  static const Iot__Service__DeviceError__CurrentErrorNo init_value = IOT__SERVICE__DEVICE_ERROR__CURRENT_ERROR_NO__INIT;
  *message = init_value;
}
size_t iot__service__device_error__current_error_no__get_packed_size
                     (const Iot__Service__DeviceError__CurrentErrorNo *message)
{
  assert(message->base.descriptor == &iot__service__device_error__current_error_no__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__device_error__current_error_no__pack
                     (const Iot__Service__DeviceError__CurrentErrorNo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__device_error__current_error_no__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__device_error__current_error_no__pack_to_buffer
                     (const Iot__Service__DeviceError__CurrentErrorNo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__device_error__current_error_no__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__DeviceError__CurrentErrorNo *
       iot__service__device_error__current_error_no__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__DeviceError__CurrentErrorNo *)
     protobuf_c_message_unpack (&iot__service__device_error__current_error_no__descriptor,
                                allocator, len, data);
}
void   iot__service__device_error__current_error_no__free_unpacked
                     (Iot__Service__DeviceError__CurrentErrorNo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__device_error__current_error_no__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__device_error__event_device_fault__init
                     (Iot__Service__DeviceError__EventDeviceFault         *message)
{
  static const Iot__Service__DeviceError__EventDeviceFault init_value = IOT__SERVICE__DEVICE_ERROR__EVENT_DEVICE_FAULT__INIT;
  *message = init_value;
}
size_t iot__service__device_error__event_device_fault__get_packed_size
                     (const Iot__Service__DeviceError__EventDeviceFault *message)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_fault__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__device_error__event_device_fault__pack
                     (const Iot__Service__DeviceError__EventDeviceFault *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_fault__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__device_error__event_device_fault__pack_to_buffer
                     (const Iot__Service__DeviceError__EventDeviceFault *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_fault__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__DeviceError__EventDeviceFault *
       iot__service__device_error__event_device_fault__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__DeviceError__EventDeviceFault *)
     protobuf_c_message_unpack (&iot__service__device_error__event_device_fault__descriptor,
                                allocator, len, data);
}
void   iot__service__device_error__event_device_fault__free_unpacked
                     (Iot__Service__DeviceError__EventDeviceFault *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__device_error__event_device_fault__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__device_error__event_device_message__init
                     (Iot__Service__DeviceError__EventDeviceMessage         *message)
{
  static const Iot__Service__DeviceError__EventDeviceMessage init_value = IOT__SERVICE__DEVICE_ERROR__EVENT_DEVICE_MESSAGE__INIT;
  *message = init_value;
}
size_t iot__service__device_error__event_device_message__get_packed_size
                     (const Iot__Service__DeviceError__EventDeviceMessage *message)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__device_error__event_device_message__pack
                     (const Iot__Service__DeviceError__EventDeviceMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__device_error__event_device_message__pack_to_buffer
                     (const Iot__Service__DeviceError__EventDeviceMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__DeviceError__EventDeviceMessage *
       iot__service__device_error__event_device_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__DeviceError__EventDeviceMessage *)
     protobuf_c_message_unpack (&iot__service__device_error__event_device_message__descriptor,
                                allocator, len, data);
}
void   iot__service__device_error__event_device_message__free_unpacked
                     (Iot__Service__DeviceError__EventDeviceMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__device_error__event_device_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__device_error__event_device_alert__init
                     (Iot__Service__DeviceError__EventDeviceAlert         *message)
{
  static const Iot__Service__DeviceError__EventDeviceAlert init_value = IOT__SERVICE__DEVICE_ERROR__EVENT_DEVICE_ALERT__INIT;
  *message = init_value;
}
size_t iot__service__device_error__event_device_alert__get_packed_size
                     (const Iot__Service__DeviceError__EventDeviceAlert *message)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_alert__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__device_error__event_device_alert__pack
                     (const Iot__Service__DeviceError__EventDeviceAlert *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_alert__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__device_error__event_device_alert__pack_to_buffer
                     (const Iot__Service__DeviceError__EventDeviceAlert *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__device_error__event_device_alert__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__DeviceError__EventDeviceAlert *
       iot__service__device_error__event_device_alert__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__DeviceError__EventDeviceAlert *)
     protobuf_c_message_unpack (&iot__service__device_error__event_device_alert__descriptor,
                                allocator, len, data);
}
void   iot__service__device_error__event_device_alert__free_unpacked
                     (Iot__Service__DeviceError__EventDeviceAlert *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__device_error__event_device_alert__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__device_error__properties__init
                     (Iot__Service__DeviceError__Properties         *message)
{
  static const Iot__Service__DeviceError__Properties init_value = IOT__SERVICE__DEVICE_ERROR__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__device_error__properties__get_packed_size
                     (const Iot__Service__DeviceError__Properties *message)
{
  assert(message->base.descriptor == &iot__service__device_error__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__device_error__properties__pack
                     (const Iot__Service__DeviceError__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__device_error__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__device_error__properties__pack_to_buffer
                     (const Iot__Service__DeviceError__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__device_error__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__DeviceError__Properties *
       iot__service__device_error__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__DeviceError__Properties *)
     protobuf_c_message_unpack (&iot__service__device_error__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__device_error__properties__free_unpacked
                     (Iot__Service__DeviceError__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__device_error__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__device_error__error_no__field_descriptors[2] =
{
  {
    "errorNo",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__DeviceError__ErrorNo, errorno),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "errorName",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__DeviceError__ErrorNo, errorname),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__device_error__error_no__field_indices_by_name[] = {
  1,   /* field[1] = errorName */
  0,   /* field[0] = errorNo */
};
static const ProtobufCIntRange iot__service__device_error__error_no__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__device_error__error_no__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.deviceError.ErrorNo",
  "ErrorNo",
  "Iot__Service__DeviceError__ErrorNo",
  "iot.service.deviceError",
  sizeof(Iot__Service__DeviceError__ErrorNo),
  2,
  iot__service__device_error__error_no__field_descriptors,
  iot__service__device_error__error_no__field_indices_by_name,
  1,  iot__service__device_error__error_no__number_ranges,
  (ProtobufCMessageInit) iot__service__device_error__error_no__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__device_error__current_error_no__field_descriptors[2] =
{
  {
    "time",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__DeviceError__CurrentErrorNo, time),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "errorNo",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__DeviceError__CurrentErrorNo, errorno),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__device_error__current_error_no__field_indices_by_name[] = {
  1,   /* field[1] = errorNo */
  0,   /* field[0] = time */
};
static const ProtobufCIntRange iot__service__device_error__current_error_no__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__device_error__current_error_no__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.deviceError.CurrentErrorNo",
  "CurrentErrorNo",
  "Iot__Service__DeviceError__CurrentErrorNo",
  "iot.service.deviceError",
  sizeof(Iot__Service__DeviceError__CurrentErrorNo),
  2,
  iot__service__device_error__current_error_no__field_descriptors,
  iot__service__device_error__current_error_no__field_indices_by_name,
  1,  iot__service__device_error__current_error_no__number_ranges,
  (ProtobufCMessageInit) iot__service__device_error__current_error_no__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__device_error__event_device_fault__field_descriptors[1] =
{
  {
    "faultNo",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__DeviceError__EventDeviceFault, faultno),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__device_error__event_device_fault__field_indices_by_name[] = {
  0,   /* field[0] = faultNo */
};
static const ProtobufCIntRange iot__service__device_error__event_device_fault__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__device_error__event_device_fault__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.deviceError.EventDeviceFault",
  "EventDeviceFault",
  "Iot__Service__DeviceError__EventDeviceFault",
  "iot.service.deviceError",
  sizeof(Iot__Service__DeviceError__EventDeviceFault),
  1,
  iot__service__device_error__event_device_fault__field_descriptors,
  iot__service__device_error__event_device_fault__field_indices_by_name,
  1,  iot__service__device_error__event_device_fault__number_ranges,
  (ProtobufCMessageInit) iot__service__device_error__event_device_fault__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__device_error__event_device_message__field_descriptors[1] =
{
  {
    "messageNo",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__DeviceError__EventDeviceMessage, messageno),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__device_error__event_device_message__field_indices_by_name[] = {
  0,   /* field[0] = messageNo */
};
static const ProtobufCIntRange iot__service__device_error__event_device_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__device_error__event_device_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.deviceError.EventDeviceMessage",
  "EventDeviceMessage",
  "Iot__Service__DeviceError__EventDeviceMessage",
  "iot.service.deviceError",
  sizeof(Iot__Service__DeviceError__EventDeviceMessage),
  1,
  iot__service__device_error__event_device_message__field_descriptors,
  iot__service__device_error__event_device_message__field_indices_by_name,
  1,  iot__service__device_error__event_device_message__number_ranges,
  (ProtobufCMessageInit) iot__service__device_error__event_device_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__device_error__event_device_alert__field_descriptors[1] =
{
  {
    "AlertNo",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__DeviceError__EventDeviceAlert, alertno),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__device_error__event_device_alert__field_indices_by_name[] = {
  0,   /* field[0] = AlertNo */
};
static const ProtobufCIntRange iot__service__device_error__event_device_alert__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__device_error__event_device_alert__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.deviceError.EventDeviceAlert",
  "EventDeviceAlert",
  "Iot__Service__DeviceError__EventDeviceAlert",
  "iot.service.deviceError",
  sizeof(Iot__Service__DeviceError__EventDeviceAlert),
  1,
  iot__service__device_error__event_device_alert__field_descriptors,
  iot__service__device_error__event_device_alert__field_indices_by_name,
  1,  iot__service__device_error__event_device_alert__number_ranges,
  (ProtobufCMessageInit) iot__service__device_error__event_device_alert__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__device_error__properties__field_descriptors[2] =
{
  {
    "errorNo",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__DeviceError__Properties, n_errorno),
    offsetof(Iot__Service__DeviceError__Properties, errorno),
    &array_node__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "currentErrorNo",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__DeviceError__Properties, n_currenterrorno),
    offsetof(Iot__Service__DeviceError__Properties, currenterrorno),
    &array_node__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__device_error__properties__field_indices_by_name[] = {
  1,   /* field[1] = currentErrorNo */
  0,   /* field[0] = errorNo */
};
static const ProtobufCIntRange iot__service__device_error__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__device_error__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.deviceError.Properties",
  "Properties",
  "Iot__Service__DeviceError__Properties",
  "iot.service.deviceError",
  sizeof(Iot__Service__DeviceError__Properties),
  2,
  iot__service__device_error__properties__field_descriptors,
  iot__service__device_error__properties__field_indices_by_name,
  1,  iot__service__device_error__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__device_error__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
