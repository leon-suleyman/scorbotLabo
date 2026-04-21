#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "scorbot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__scorbot_msgs__msg__JointTrajectory() -> *const std::ffi::c_void;
}

#[link(name = "scorbot_msgs__rosidl_generator_c")]
extern "C" {
    fn scorbot_msgs__msg__JointTrajectory__init(msg: *mut JointTrajectory) -> bool;
    fn scorbot_msgs__msg__JointTrajectory__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory>, size: usize) -> bool;
    fn scorbot_msgs__msg__JointTrajectory__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory>);
    fn scorbot_msgs__msg__JointTrajectory__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory>) -> bool;
}

// Corresponds to scorbot_msgs__msg__JointTrajectory
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// num_juntas x points
    pub points: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for JointTrajectory {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !scorbot_msgs__msg__JointTrajectory__init(&mut msg as *mut _) {
        panic!("Call to scorbot_msgs__msg__JointTrajectory__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__JointTrajectory__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__JointTrajectory__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__JointTrajectory__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory where Self: Sized {
  const TYPE_NAME: &'static str = "scorbot_msgs/msg/JointTrajectory";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__scorbot_msgs__msg__JointTrajectory() }
  }
}


#[link(name = "scorbot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__scorbot_msgs__msg__JointVelocities() -> *const std::ffi::c_void;
}

#[link(name = "scorbot_msgs__rosidl_generator_c")]
extern "C" {
    fn scorbot_msgs__msg__JointVelocities__init(msg: *mut JointVelocities) -> bool;
    fn scorbot_msgs__msg__JointVelocities__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointVelocities>, size: usize) -> bool;
    fn scorbot_msgs__msg__JointVelocities__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointVelocities>);
    fn scorbot_msgs__msg__JointVelocities__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointVelocities>, out_seq: *mut rosidl_runtime_rs::Sequence<JointVelocities>) -> bool;
}

// Corresponds to scorbot_msgs__msg__JointVelocities
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointVelocities {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_velocities: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub scaled_flag: bool,

}



impl Default for JointVelocities {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !scorbot_msgs__msg__JointVelocities__init(&mut msg as *mut _) {
        panic!("Call to scorbot_msgs__msg__JointVelocities__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointVelocities {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__JointVelocities__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__JointVelocities__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__JointVelocities__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointVelocities {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointVelocities where Self: Sized {
  const TYPE_NAME: &'static str = "scorbot_msgs/msg/JointVelocities";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__scorbot_msgs__msg__JointVelocities() }
  }
}


#[link(name = "scorbot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__scorbot_msgs__msg__TrajectoryPoint() -> *const std::ffi::c_void;
}

#[link(name = "scorbot_msgs__rosidl_generator_c")]
extern "C" {
    fn scorbot_msgs__msg__TrajectoryPoint__init(msg: *mut TrajectoryPoint) -> bool;
    fn scorbot_msgs__msg__TrajectoryPoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPoint>, size: usize) -> bool;
    fn scorbot_msgs__msg__TrajectoryPoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPoint>);
    fn scorbot_msgs__msg__TrajectoryPoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrajectoryPoint>, out_seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPoint>) -> bool;
}

// Corresponds to scorbot_msgs__msg__TrajectoryPoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for TrajectoryPoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !scorbot_msgs__msg__TrajectoryPoint__init(&mut msg as *mut _) {
        panic!("Call to scorbot_msgs__msg__TrajectoryPoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrajectoryPoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__TrajectoryPoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__TrajectoryPoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scorbot_msgs__msg__TrajectoryPoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrajectoryPoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrajectoryPoint where Self: Sized {
  const TYPE_NAME: &'static str = "scorbot_msgs/msg/TrajectoryPoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__scorbot_msgs__msg__TrajectoryPoint() }
  }
}


