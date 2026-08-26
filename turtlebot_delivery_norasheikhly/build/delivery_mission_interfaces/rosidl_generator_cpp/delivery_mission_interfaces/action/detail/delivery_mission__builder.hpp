// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delivery_mission_interfaces:action/DeliveryMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delivery_mission_interfaces/action/delivery_mission.hpp"


#ifndef DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__BUILDER_HPP_
#define DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "delivery_mission_interfaces/action/detail/delivery_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_Goal_timeout
{
public:
  explicit Init_DeliveryMission_Goal_timeout(::delivery_mission_interfaces::action::DeliveryMission_Goal & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_Goal timeout(::delivery_mission_interfaces::action::DeliveryMission_Goal::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_Goal msg_;
};

class Init_DeliveryMission_Goal_delivery_time
{
public:
  explicit Init_DeliveryMission_Goal_delivery_time(::delivery_mission_interfaces::action::DeliveryMission_Goal & msg)
  : msg_(msg)
  {}
  Init_DeliveryMission_Goal_timeout delivery_time(::delivery_mission_interfaces::action::DeliveryMission_Goal::_delivery_time_type arg)
  {
    msg_.delivery_time = std::move(arg);
    return Init_DeliveryMission_Goal_timeout(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_Goal msg_;
};

class Init_DeliveryMission_Goal_pickup_duration
{
public:
  explicit Init_DeliveryMission_Goal_pickup_duration(::delivery_mission_interfaces::action::DeliveryMission_Goal & msg)
  : msg_(msg)
  {}
  Init_DeliveryMission_Goal_delivery_time pickup_duration(::delivery_mission_interfaces::action::DeliveryMission_Goal::_pickup_duration_type arg)
  {
    msg_.pickup_duration = std::move(arg);
    return Init_DeliveryMission_Goal_delivery_time(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_Goal msg_;
};

class Init_DeliveryMission_Goal_speed
{
public:
  Init_DeliveryMission_Goal_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_Goal_pickup_duration speed(::delivery_mission_interfaces::action::DeliveryMission_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_DeliveryMission_Goal_pickup_duration(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_Goal>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_Goal_speed();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_Result_message
{
public:
  explicit Init_DeliveryMission_Result_message(::delivery_mission_interfaces::action::DeliveryMission_Result & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_Result message(::delivery_mission_interfaces::action::DeliveryMission_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_Result msg_;
};

class Init_DeliveryMission_Result_success
{
public:
  Init_DeliveryMission_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_Result_message success(::delivery_mission_interfaces::action::DeliveryMission_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DeliveryMission_Result_message(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_Result>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_Result_success();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_Feedback_pickup_progress
{
public:
  explicit Init_DeliveryMission_Feedback_pickup_progress(::delivery_mission_interfaces::action::DeliveryMission_Feedback & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_Feedback pickup_progress(::delivery_mission_interfaces::action::DeliveryMission_Feedback::_pickup_progress_type arg)
  {
    msg_.pickup_progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_Feedback msg_;
};

class Init_DeliveryMission_Feedback_remaining_time
{
public:
  Init_DeliveryMission_Feedback_remaining_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_Feedback_pickup_progress remaining_time(::delivery_mission_interfaces::action::DeliveryMission_Feedback::_remaining_time_type arg)
  {
    msg_.remaining_time = std::move(arg);
    return Init_DeliveryMission_Feedback_pickup_progress(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_Feedback>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_Feedback_remaining_time();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_SendGoal_Request_goal
{
public:
  explicit Init_DeliveryMission_SendGoal_Request_goal(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request goal(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request msg_;
};

class Init_DeliveryMission_SendGoal_Request_goal_id
{
public:
  Init_DeliveryMission_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_SendGoal_Request_goal goal_id(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DeliveryMission_SendGoal_Request_goal(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_SendGoal_Request_goal_id();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_SendGoal_Response_stamp
{
public:
  explicit Init_DeliveryMission_SendGoal_Response_stamp(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response stamp(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response msg_;
};

class Init_DeliveryMission_SendGoal_Response_accepted
{
public:
  Init_DeliveryMission_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_SendGoal_Response_stamp accepted(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DeliveryMission_SendGoal_Response_stamp(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_SendGoal_Response_accepted();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_SendGoal_Event_response
{
public:
  explicit Init_DeliveryMission_SendGoal_Event_response(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event response(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event msg_;
};

class Init_DeliveryMission_SendGoal_Event_request
{
public:
  explicit Init_DeliveryMission_SendGoal_Event_request(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_DeliveryMission_SendGoal_Event_response request(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DeliveryMission_SendGoal_Event_response(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event msg_;
};

class Init_DeliveryMission_SendGoal_Event_info
{
public:
  Init_DeliveryMission_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_SendGoal_Event_request info(::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DeliveryMission_SendGoal_Event_request(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_SendGoal_Event_info();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_GetResult_Request_goal_id
{
public:
  Init_DeliveryMission_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Request goal_id(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_GetResult_Request>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_GetResult_Request_goal_id();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_GetResult_Response_result
{
public:
  explicit Init_DeliveryMission_GetResult_Response_result(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Response result(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Response msg_;
};

class Init_DeliveryMission_GetResult_Response_status
{
public:
  Init_DeliveryMission_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_GetResult_Response_result status(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DeliveryMission_GetResult_Response_result(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_GetResult_Response>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_GetResult_Response_status();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_GetResult_Event_response
{
public:
  explicit Init_DeliveryMission_GetResult_Event_response(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event response(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event msg_;
};

class Init_DeliveryMission_GetResult_Event_request
{
public:
  explicit Init_DeliveryMission_GetResult_Event_request(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_DeliveryMission_GetResult_Event_response request(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DeliveryMission_GetResult_Event_response(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event msg_;
};

class Init_DeliveryMission_GetResult_Event_info
{
public:
  Init_DeliveryMission_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_GetResult_Event_request info(::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DeliveryMission_GetResult_Event_request(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_GetResult_Event>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_GetResult_Event_info();
}

}  // namespace delivery_mission_interfaces


namespace delivery_mission_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryMission_FeedbackMessage_feedback
{
public:
  explicit Init_DeliveryMission_FeedbackMessage_feedback(::delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage feedback(::delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage msg_;
};

class Init_DeliveryMission_FeedbackMessage_goal_id
{
public:
  Init_DeliveryMission_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryMission_FeedbackMessage_feedback goal_id(::delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DeliveryMission_FeedbackMessage_feedback(msg_);
  }

private:
  ::delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage>()
{
  return delivery_mission_interfaces::action::builder::Init_DeliveryMission_FeedbackMessage_goal_id();
}

}  // namespace delivery_mission_interfaces

#endif  // DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__BUILDER_HPP_
