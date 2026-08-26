
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_Goal() -> *const std::ffi::c_void;
}

#[link(name = "delivery_mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn delivery_mission_interfaces__action__DeliveryMission_Goal__init(msg: *mut DeliveryMission_Goal) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Goal>, size: usize) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Goal>);
    fn delivery_mission_interfaces__action__DeliveryMission_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryMission_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Goal>) -> bool;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryMission_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_duration: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delivery_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout: f32,

}



impl Default for DeliveryMission_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delivery_mission_interfaces__action__DeliveryMission_Goal__init(&mut msg as *mut _) {
        panic!("Call to delivery_mission_interfaces__action__DeliveryMission_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryMission_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryMission_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryMission_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "delivery_mission_interfaces/action/DeliveryMission_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_Goal() }
  }
}


#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_Result() -> *const std::ffi::c_void;
}

#[link(name = "delivery_mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn delivery_mission_interfaces__action__DeliveryMission_Result__init(msg: *mut DeliveryMission_Result) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Result>, size: usize) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Result>);
    fn delivery_mission_interfaces__action__DeliveryMission_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryMission_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Result>) -> bool;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryMission_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for DeliveryMission_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delivery_mission_interfaces__action__DeliveryMission_Result__init(&mut msg as *mut _) {
        panic!("Call to delivery_mission_interfaces__action__DeliveryMission_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryMission_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryMission_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryMission_Result where Self: Sized {
  const TYPE_NAME: &'static str = "delivery_mission_interfaces/action/DeliveryMission_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_Result() }
  }
}


#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "delivery_mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn delivery_mission_interfaces__action__DeliveryMission_Feedback__init(msg: *mut DeliveryMission_Feedback) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Feedback>, size: usize) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Feedback>);
    fn delivery_mission_interfaces__action__DeliveryMission_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryMission_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_Feedback>) -> bool;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryMission_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_progress: f32,

}



impl Default for DeliveryMission_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delivery_mission_interfaces__action__DeliveryMission_Feedback__init(&mut msg as *mut _) {
        panic!("Call to delivery_mission_interfaces__action__DeliveryMission_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryMission_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryMission_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryMission_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "delivery_mission_interfaces/action/DeliveryMission_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_Feedback() }
  }
}


#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "delivery_mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__init(msg: *mut DeliveryMission_FeedbackMessage) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_FeedbackMessage>, size: usize) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_FeedbackMessage>);
    fn delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryMission_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_FeedbackMessage>) -> bool;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryMission_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::DeliveryMission_Feedback,

}



impl Default for DeliveryMission_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryMission_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryMission_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryMission_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "delivery_mission_interfaces/action/DeliveryMission_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_FeedbackMessage() }
  }
}




#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "delivery_mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__init(msg: *mut DeliveryMission_SendGoal_Request) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_SendGoal_Request>, size: usize) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_SendGoal_Request>);
    fn delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryMission_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_SendGoal_Request>) -> bool;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryMission_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::DeliveryMission_Goal,

}



impl Default for DeliveryMission_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryMission_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryMission_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryMission_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "delivery_mission_interfaces/action/DeliveryMission_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Request() }
  }
}


#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "delivery_mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__init(msg: *mut DeliveryMission_SendGoal_Response) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_SendGoal_Response>, size: usize) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_SendGoal_Response>);
    fn delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryMission_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_SendGoal_Response>) -> bool;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryMission_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for DeliveryMission_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryMission_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryMission_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryMission_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "delivery_mission_interfaces/action/DeliveryMission_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_SendGoal_Response() }
  }
}


#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "delivery_mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__init(msg: *mut DeliveryMission_GetResult_Request) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_GetResult_Request>, size: usize) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_GetResult_Request>);
    fn delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryMission_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_GetResult_Request>) -> bool;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryMission_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for DeliveryMission_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryMission_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryMission_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryMission_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "delivery_mission_interfaces/action/DeliveryMission_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_GetResult_Request() }
  }
}


#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "delivery_mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__init(msg: *mut DeliveryMission_GetResult_Response) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_GetResult_Response>, size: usize) -> bool;
    fn delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_GetResult_Response>);
    fn delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryMission_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryMission_GetResult_Response>) -> bool;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryMission_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::DeliveryMission_Result,

}



impl Default for DeliveryMission_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryMission_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delivery_mission_interfaces__action__DeliveryMission_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryMission_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryMission_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "delivery_mission_interfaces/action/DeliveryMission_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_GetResult_Response() }
  }
}






#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct DeliveryMission_SendGoal;

impl rosidl_runtime_rs::Service for DeliveryMission_SendGoal {
    type Request = DeliveryMission_SendGoal_Request;
    type Response = DeliveryMission_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_SendGoal() }
    }
}




#[link(name = "delivery_mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to delivery_mission_interfaces__action__DeliveryMission_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct DeliveryMission_GetResult;

impl rosidl_runtime_rs::Service for DeliveryMission_GetResult {
    type Request = DeliveryMission_GetResult_Request;
    type Response = DeliveryMission_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__delivery_mission_interfaces__action__DeliveryMission_GetResult() }
    }
}


