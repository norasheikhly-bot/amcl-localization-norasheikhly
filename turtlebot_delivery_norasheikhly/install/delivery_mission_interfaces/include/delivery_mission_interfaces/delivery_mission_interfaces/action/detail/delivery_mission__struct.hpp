// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delivery_mission_interfaces:action/DeliveryMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delivery_mission_interfaces/action/delivery_mission.hpp"


#ifndef DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__STRUCT_HPP_
#define DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Goal __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Goal __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_Goal_
{
  using Type = DeliveryMission_Goal_<ContainerAllocator>;

  explicit DeliveryMission_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->pickup_duration = 0.0f;
      this->delivery_time = 0.0f;
      this->timeout = 0.0f;
    }
  }

  explicit DeliveryMission_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->pickup_duration = 0.0f;
      this->delivery_time = 0.0f;
      this->timeout = 0.0f;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _pickup_duration_type =
    float;
  _pickup_duration_type pickup_duration;
  using _delivery_time_type =
    float;
  _delivery_time_type delivery_time;
  using _timeout_type =
    float;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__pickup_duration(
    const float & _arg)
  {
    this->pickup_duration = _arg;
    return *this;
  }
  Type & set__delivery_time(
    const float & _arg)
  {
    this->delivery_time = _arg;
    return *this;
  }
  Type & set__timeout(
    const float & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Goal
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Goal
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_Goal_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->pickup_duration != other.pickup_duration) {
      return false;
    }
    if (this->delivery_time != other.delivery_time) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_Goal_

// alias to use template instance with default allocator
using DeliveryMission_Goal =
  delivery_mission_interfaces::action::DeliveryMission_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces


#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Result __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Result __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_Result_
{
  using Type = DeliveryMission_Result_<ContainerAllocator>;

  explicit DeliveryMission_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit DeliveryMission_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Result
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Result
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_Result_

// alias to use template instance with default allocator
using DeliveryMission_Result =
  delivery_mission_interfaces::action::DeliveryMission_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces


#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Feedback __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_Feedback_
{
  using Type = DeliveryMission_Feedback_<ContainerAllocator>;

  explicit DeliveryMission_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_time = 0.0f;
      this->pickup_progress = 0.0f;
    }
  }

  explicit DeliveryMission_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_time = 0.0f;
      this->pickup_progress = 0.0f;
    }
  }

  // field types and members
  using _remaining_time_type =
    float;
  _remaining_time_type remaining_time;
  using _pickup_progress_type =
    float;
  _pickup_progress_type pickup_progress;

  // setters for named parameter idiom
  Type & set__remaining_time(
    const float & _arg)
  {
    this->remaining_time = _arg;
    return *this;
  }
  Type & set__pickup_progress(
    const float & _arg)
  {
    this->pickup_progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Feedback
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_Feedback
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_Feedback_ & other) const
  {
    if (this->remaining_time != other.remaining_time) {
      return false;
    }
    if (this->pickup_progress != other.pickup_progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_Feedback_

// alias to use template instance with default allocator
using DeliveryMission_Feedback =
  delivery_mission_interfaces::action::DeliveryMission_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "delivery_mission_interfaces/action/detail/delivery_mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_SendGoal_Request_
{
  using Type = DeliveryMission_SendGoal_Request_<ContainerAllocator>;

  explicit DeliveryMission_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DeliveryMission_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const delivery_mission_interfaces::action::DeliveryMission_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_SendGoal_Request_

// alias to use template instance with default allocator
using DeliveryMission_SendGoal_Request =
  delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_SendGoal_Response_
{
  using Type = DeliveryMission_SendGoal_Response_<ContainerAllocator>;

  explicit DeliveryMission_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DeliveryMission_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_SendGoal_Response_

// alias to use template instance with default allocator
using DeliveryMission_SendGoal_Response =
  delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_SendGoal_Event_
{
  using Type = DeliveryMission_SendGoal_Event_<ContainerAllocator>;

  explicit DeliveryMission_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DeliveryMission_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Event
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_SendGoal_Event_

// alias to use template instance with default allocator
using DeliveryMission_SendGoal_Event =
  delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces

namespace delivery_mission_interfaces
{

namespace action
{

struct DeliveryMission_SendGoal
{
  using Request = delivery_mission_interfaces::action::DeliveryMission_SendGoal_Request;
  using Response = delivery_mission_interfaces::action::DeliveryMission_SendGoal_Response;
  using Event = delivery_mission_interfaces::action::DeliveryMission_SendGoal_Event;
};

}  // namespace action

}  // namespace delivery_mission_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Request __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_GetResult_Request_
{
  using Type = DeliveryMission_GetResult_Request_<ContainerAllocator>;

  explicit DeliveryMission_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DeliveryMission_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Request
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Request
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_GetResult_Request_

// alias to use template instance with default allocator
using DeliveryMission_GetResult_Request =
  delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Response __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_GetResult_Response_
{
  using Type = DeliveryMission_GetResult_Response_<ContainerAllocator>;

  explicit DeliveryMission_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DeliveryMission_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const delivery_mission_interfaces::action::DeliveryMission_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Response
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Response
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_GetResult_Response_

// alias to use template instance with default allocator
using DeliveryMission_GetResult_Response =
  delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Event __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_GetResult_Event_
{
  using Type = DeliveryMission_GetResult_Event_<ContainerAllocator>;

  explicit DeliveryMission_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DeliveryMission_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delivery_mission_interfaces::action::DeliveryMission_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delivery_mission_interfaces::action::DeliveryMission_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Event
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_GetResult_Event
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_GetResult_Event_

// alias to use template instance with default allocator
using DeliveryMission_GetResult_Event =
  delivery_mission_interfaces::action::DeliveryMission_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces

namespace delivery_mission_interfaces
{

namespace action
{

struct DeliveryMission_GetResult
{
  using Request = delivery_mission_interfaces::action::DeliveryMission_GetResult_Request;
  using Response = delivery_mission_interfaces::action::DeliveryMission_GetResult_Response;
  using Event = delivery_mission_interfaces::action::DeliveryMission_GetResult_Event;
};

}  // namespace action

}  // namespace delivery_mission_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "delivery_mission_interfaces/action/detail/delivery_mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage __declspec(deprecated)
#endif

namespace delivery_mission_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DeliveryMission_FeedbackMessage_
{
  using Type = DeliveryMission_FeedbackMessage_<ContainerAllocator>;

  explicit DeliveryMission_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DeliveryMission_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const delivery_mission_interfaces::action::DeliveryMission_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage
    std::shared_ptr<delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryMission_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryMission_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryMission_FeedbackMessage_

// alias to use template instance with default allocator
using DeliveryMission_FeedbackMessage =
  delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace delivery_mission_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace delivery_mission_interfaces
{

namespace action
{

struct DeliveryMission
{
  /// The goal message defined in the action definition.
  using Goal = delivery_mission_interfaces::action::DeliveryMission_Goal;
  /// The result message defined in the action definition.
  using Result = delivery_mission_interfaces::action::DeliveryMission_Result;
  /// The feedback message defined in the action definition.
  using Feedback = delivery_mission_interfaces::action::DeliveryMission_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = delivery_mission_interfaces::action::DeliveryMission_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = delivery_mission_interfaces::action::DeliveryMission_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = delivery_mission_interfaces::action::DeliveryMission_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DeliveryMission DeliveryMission;

}  // namespace action

}  // namespace delivery_mission_interfaces

#endif  // DELIVERY_MISSION_INTERFACES__ACTION__DETAIL__DELIVERY_MISSION__STRUCT_HPP_
