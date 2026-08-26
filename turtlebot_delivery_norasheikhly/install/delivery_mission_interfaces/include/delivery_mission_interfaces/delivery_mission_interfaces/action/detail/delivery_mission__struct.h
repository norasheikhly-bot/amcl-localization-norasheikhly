// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delivery_mission_interfaces:action/DeliveryMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delivery_mission_interfaces/action/delivery_mission.h"


#ifndef DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__STRUCT_H_
#define DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_Goal
{
  float speed;
  float pickup_duration;
  float delivery_time;
  float timeout;
} delivery_mission_interfaces__action__DeliveryMission_Goal;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_Goal.
typedef struct delivery_mission_interfaces__action__DeliveryMission_Goal__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_Result
{
  bool success;
  rosidl_runtime_c__String message;
} delivery_mission_interfaces__action__DeliveryMission_Result;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_Result.
typedef struct delivery_mission_interfaces__action__DeliveryMission_Result__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_Feedback
{
  float remaining_time;
  float pickup_progress;
} delivery_mission_interfaces__action__DeliveryMission_Feedback;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_Feedback.
typedef struct delivery_mission_interfaces__action__DeliveryMission_Feedback__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  delivery_mission_interfaces__action__DeliveryMission_Goal goal;
} delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request.
typedef struct delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response.
typedef struct delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence request;
  delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence response;
} delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event.
typedef struct delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} delivery_mission_interfaces__action__DeliveryMission_GetResult_Request;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_GetResult_Request.
typedef struct delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_GetResult_Response
{
  int8_t status;
  delivery_mission_interfaces__action__DeliveryMission_Result result;
} delivery_mission_interfaces__action__DeliveryMission_GetResult_Response;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_GetResult_Response.
typedef struct delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  delivery_mission_interfaces__action__DeliveryMission_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  delivery_mission_interfaces__action__DeliveryMission_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence request;
  delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence response;
} delivery_mission_interfaces__action__DeliveryMission_GetResult_Event;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_GetResult_Event.
typedef struct delivery_mission_interfaces__action__DeliveryMission_GetResult_Event__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.h"

/// Struct defined in action/DeliveryMission in the package delivery_mission_interfaces.
typedef struct delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  delivery_mission_interfaces__action__DeliveryMission_Feedback feedback;
} delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage;

// Struct for a sequence of delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage.
typedef struct delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__Sequence
{
  delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__STRUCT_H_
