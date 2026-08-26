// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from delivery_mission_interfaces:action/DeliveryMission.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
#include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
#include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_Goal_type_support_ids_t;

static const _DeliveryMission_Goal_type_support_ids_t _DeliveryMission_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_Goal_type_support_symbol_names_t _DeliveryMission_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_Goal)),
  }
};

typedef struct _DeliveryMission_Goal_type_support_data_t
{
  void * data[2];
} _DeliveryMission_Goal_type_support_data_t;

static _DeliveryMission_Goal_type_support_data_t _DeliveryMission_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_Goal_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_Goal__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_Goal__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_Goal)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_Result_type_support_ids_t;

static const _DeliveryMission_Result_type_support_ids_t _DeliveryMission_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_Result_type_support_symbol_names_t _DeliveryMission_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_Result)),
  }
};

typedef struct _DeliveryMission_Result_type_support_data_t
{
  void * data[2];
} _DeliveryMission_Result_type_support_data_t;

static _DeliveryMission_Result_type_support_data_t _DeliveryMission_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_Result_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_Result__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_Result__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_Result)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_Feedback_type_support_ids_t;

static const _DeliveryMission_Feedback_type_support_ids_t _DeliveryMission_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_Feedback_type_support_symbol_names_t _DeliveryMission_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_Feedback)),
  }
};

typedef struct _DeliveryMission_Feedback_type_support_data_t
{
  void * data[2];
} _DeliveryMission_Feedback_type_support_data_t;

static _DeliveryMission_Feedback_type_support_data_t _DeliveryMission_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_Feedback_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_Feedback__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_Feedback__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_Feedback)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_SendGoal_Request_type_support_ids_t;

static const _DeliveryMission_SendGoal_Request_type_support_ids_t _DeliveryMission_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_SendGoal_Request_type_support_symbol_names_t _DeliveryMission_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Request)),
  }
};

typedef struct _DeliveryMission_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DeliveryMission_SendGoal_Request_type_support_data_t;

static _DeliveryMission_SendGoal_Request_type_support_data_t _DeliveryMission_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_SendGoal_Request_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Request)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_SendGoal_Response_type_support_ids_t;

static const _DeliveryMission_SendGoal_Response_type_support_ids_t _DeliveryMission_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_SendGoal_Response_type_support_symbol_names_t _DeliveryMission_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Response)),
  }
};

typedef struct _DeliveryMission_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DeliveryMission_SendGoal_Response_type_support_data_t;

static _DeliveryMission_SendGoal_Response_type_support_data_t _DeliveryMission_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_SendGoal_Response_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Response)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_SendGoal_Event_type_support_ids_t;

static const _DeliveryMission_SendGoal_Event_type_support_ids_t _DeliveryMission_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_SendGoal_Event_type_support_symbol_names_t _DeliveryMission_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Event)),
  }
};

typedef struct _DeliveryMission_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _DeliveryMission_SendGoal_Event_type_support_data_t;

static _DeliveryMission_SendGoal_Event_type_support_data_t _DeliveryMission_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_SendGoal_Event_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal_Event)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _DeliveryMission_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_SendGoal_type_support_ids_t;

static const _DeliveryMission_SendGoal_type_support_ids_t _DeliveryMission_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_SendGoal_type_support_symbol_names_t _DeliveryMission_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal)),
  }
};

typedef struct _DeliveryMission_SendGoal_type_support_data_t
{
  void * data[2];
} _DeliveryMission_SendGoal_type_support_data_t;

static _DeliveryMission_SendGoal_type_support_data_t _DeliveryMission_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_SendGoal_service_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DeliveryMission_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DeliveryMission_SendGoal_Request_message_type_support_handle,
  &DeliveryMission_SendGoal_Response_message_type_support_handle,
  &DeliveryMission_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delivery_mission_interfaces,
    action,
    DeliveryMission_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delivery_mission_interfaces,
    action,
    DeliveryMission_SendGoal
  ),
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_GetResult_Request_type_support_ids_t;

static const _DeliveryMission_GetResult_Request_type_support_ids_t _DeliveryMission_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_GetResult_Request_type_support_symbol_names_t _DeliveryMission_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Request)),
  }
};

typedef struct _DeliveryMission_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DeliveryMission_GetResult_Request_type_support_data_t;

static _DeliveryMission_GetResult_Request_type_support_data_t _DeliveryMission_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_GetResult_Request_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Request)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_GetResult_Response_type_support_ids_t;

static const _DeliveryMission_GetResult_Response_type_support_ids_t _DeliveryMission_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_GetResult_Response_type_support_symbol_names_t _DeliveryMission_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Response)),
  }
};

typedef struct _DeliveryMission_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DeliveryMission_GetResult_Response_type_support_data_t;

static _DeliveryMission_GetResult_Response_type_support_data_t _DeliveryMission_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_GetResult_Response_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Response)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_GetResult_Event_type_support_ids_t;

static const _DeliveryMission_GetResult_Event_type_support_ids_t _DeliveryMission_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_GetResult_Event_type_support_symbol_names_t _DeliveryMission_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Event)),
  }
};

typedef struct _DeliveryMission_GetResult_Event_type_support_data_t
{
  void * data[2];
} _DeliveryMission_GetResult_Event_type_support_data_t;

static _DeliveryMission_GetResult_Event_type_support_data_t _DeliveryMission_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_GetResult_Event_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Event__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Event__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_GetResult_Event)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _DeliveryMission_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_GetResult_type_support_ids_t;

static const _DeliveryMission_GetResult_type_support_ids_t _DeliveryMission_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_GetResult_type_support_symbol_names_t _DeliveryMission_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_GetResult)),
  }
};

typedef struct _DeliveryMission_GetResult_type_support_data_t
{
  void * data[2];
} _DeliveryMission_GetResult_type_support_data_t;

static _DeliveryMission_GetResult_type_support_data_t _DeliveryMission_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_GetResult_service_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DeliveryMission_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DeliveryMission_GetResult_Request_message_type_support_handle,
  &DeliveryMission_GetResult_Response_message_type_support_handle,
  &DeliveryMission_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delivery_mission_interfaces,
    action,
    DeliveryMission_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delivery_mission_interfaces,
    action,
    DeliveryMission_GetResult
  ),
  &delivery_mission_interfaces__action__DeliveryMission_GetResult__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_GetResult)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DeliveryMission_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeliveryMission_FeedbackMessage_type_support_ids_t;

static const _DeliveryMission_FeedbackMessage_type_support_ids_t _DeliveryMission_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeliveryMission_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeliveryMission_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeliveryMission_FeedbackMessage_type_support_symbol_names_t _DeliveryMission_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_mission_interfaces, action, DeliveryMission_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_mission_interfaces, action, DeliveryMission_FeedbackMessage)),
  }
};

typedef struct _DeliveryMission_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DeliveryMission_FeedbackMessage_type_support_data_t;

static _DeliveryMission_FeedbackMessage_type_support_data_t _DeliveryMission_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeliveryMission_FeedbackMessage_message_typesupport_map = {
  2,
  "delivery_mission_interfaces",
  &_DeliveryMission_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DeliveryMission_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DeliveryMission_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeliveryMission_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeliveryMission_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delivery_mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_FeedbackMessage)() {
  return &::delivery_mission_interfaces::action::rosidl_typesupport_c::DeliveryMission_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "delivery_mission_interfaces/action/delivery_mission.h"
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__type_support.h"

static rosidl_action_type_support_t _delivery_mission_interfaces__action__DeliveryMission__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &delivery_mission_interfaces__action__DeliveryMission__get_type_hash,
  &delivery_mission_interfaces__action__DeliveryMission__get_type_description,
  &delivery_mission_interfaces__action__DeliveryMission__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission)()
{
  // Thread-safe by always writing the same values to the static struct
  _delivery_mission_interfaces__action__DeliveryMission__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_SendGoal)();
  _delivery_mission_interfaces__action__DeliveryMission__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_GetResult)();
  _delivery_mission_interfaces__action__DeliveryMission__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _delivery_mission_interfaces__action__DeliveryMission__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, delivery_mission_interfaces, action, DeliveryMission_FeedbackMessage)();
  _delivery_mission_interfaces__action__DeliveryMission__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_delivery_mission_interfaces__action__DeliveryMission__typesupport_c;
}

#ifdef __cplusplus
}
#endif
