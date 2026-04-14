#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "universal_teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__universal_teleop_msgs__msg__Control() -> *const std::ffi::c_void;
}

#[link(name = "universal_teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn universal_teleop_msgs__msg__Control__init(msg: *mut Control) -> bool;
    fn universal_teleop_msgs__msg__Control__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Control>, size: usize) -> bool;
    fn universal_teleop_msgs__msg__Control__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Control>);
    fn universal_teleop_msgs__msg__Control__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Control>, out_seq: *mut rosidl_runtime_rs::Sequence<Control>) -> bool;
}

// Corresponds to universal_teleop_msgs__msg__Control
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Control {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f32,

}



impl Default for Control {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !universal_teleop_msgs__msg__Control__init(&mut msg as *mut _) {
        panic!("Call to universal_teleop_msgs__msg__Control__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Control {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { universal_teleop_msgs__msg__Control__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { universal_teleop_msgs__msg__Control__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { universal_teleop_msgs__msg__Control__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Control {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Control where Self: Sized {
  const TYPE_NAME: &'static str = "universal_teleop_msgs/msg/Control";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__universal_teleop_msgs__msg__Control() }
  }
}


#[link(name = "universal_teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__universal_teleop_msgs__msg__Event() -> *const std::ffi::c_void;
}

#[link(name = "universal_teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn universal_teleop_msgs__msg__Event__init(msg: *mut Event) -> bool;
    fn universal_teleop_msgs__msg__Event__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Event>, size: usize) -> bool;
    fn universal_teleop_msgs__msg__Event__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Event>);
    fn universal_teleop_msgs__msg__Event__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Event>, out_seq: *mut rosidl_runtime_rs::Sequence<Event>) -> bool;
}

// Corresponds to universal_teleop_msgs__msg__Event
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Event {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: bool,

}



impl Default for Event {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !universal_teleop_msgs__msg__Event__init(&mut msg as *mut _) {
        panic!("Call to universal_teleop_msgs__msg__Event__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Event {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { universal_teleop_msgs__msg__Event__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { universal_teleop_msgs__msg__Event__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { universal_teleop_msgs__msg__Event__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Event {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Event where Self: Sized {
  const TYPE_NAME: &'static str = "universal_teleop_msgs/msg/Event";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__universal_teleop_msgs__msg__Event() }
  }
}


