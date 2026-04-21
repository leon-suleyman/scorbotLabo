#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to scorbot_msgs__msg__JointTrajectory

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// num_juntas x points
    pub points: Vec<i32>,

}



impl Default for JointTrajectory {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointTrajectory::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory {
  type RmwMsg = super::msg::rmw::JointTrajectory;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        points: msg.points.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        points: msg.points.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      points: msg.points
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to scorbot_msgs__msg__JointVelocities

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointVelocities {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_velocities: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub scaled_flag: bool,

}



impl Default for JointVelocities {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointVelocities::default())
  }
}

impl rosidl_runtime_rs::Message for JointVelocities {
  type RmwMsg = super::msg::rmw::JointVelocities;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joint_velocities: msg.joint_velocities.into(),
        scaled_flag: msg.scaled_flag,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joint_velocities: msg.joint_velocities.as_slice().into(),
      scaled_flag: msg.scaled_flag,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      joint_velocities: msg.joint_velocities
          .into_iter()
          .collect(),
      scaled_flag: msg.scaled_flag,
    }
  }
}


// Corresponds to scorbot_msgs__msg__TrajectoryPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: Vec<i32>,

}



impl Default for TrajectoryPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TrajectoryPoint::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectoryPoint {
  type RmwMsg = super::msg::rmw::TrajectoryPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        positions: msg.positions.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        positions: msg.positions.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      positions: msg.positions
          .into_iter()
          .collect(),
    }
  }
}


