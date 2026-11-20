#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "color_detect__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__color_detect__srv__SetColor_Request() -> *const std::ffi::c_void;
}

#[link(name = "color_detect__rosidl_generator_c")]
extern "C" {
    fn color_detect__srv__SetColor_Request__init(msg: *mut SetColor_Request) -> bool;
    fn color_detect__srv__SetColor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetColor_Request>, size: usize) -> bool;
    fn color_detect__srv__SetColor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetColor_Request>);
    fn color_detect__srv__SetColor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetColor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetColor_Request>) -> bool;
}

// Corresponds to color_detect__srv__SetColor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetColor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: rosidl_runtime_rs::String,

}



impl Default for SetColor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !color_detect__srv__SetColor_Request__init(&mut msg as *mut _) {
        panic!("Call to color_detect__srv__SetColor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetColor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { color_detect__srv__SetColor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { color_detect__srv__SetColor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { color_detect__srv__SetColor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetColor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetColor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "color_detect/srv/SetColor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__color_detect__srv__SetColor_Request() }
  }
}


#[link(name = "color_detect__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__color_detect__srv__SetColor_Response() -> *const std::ffi::c_void;
}

#[link(name = "color_detect__rosidl_generator_c")]
extern "C" {
    fn color_detect__srv__SetColor_Response__init(msg: *mut SetColor_Response) -> bool;
    fn color_detect__srv__SetColor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetColor_Response>, size: usize) -> bool;
    fn color_detect__srv__SetColor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetColor_Response>);
    fn color_detect__srv__SetColor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetColor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetColor_Response>) -> bool;
}

// Corresponds to color_detect__srv__SetColor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetColor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetColor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !color_detect__srv__SetColor_Response__init(&mut msg as *mut _) {
        panic!("Call to color_detect__srv__SetColor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetColor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { color_detect__srv__SetColor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { color_detect__srv__SetColor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { color_detect__srv__SetColor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetColor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetColor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "color_detect/srv/SetColor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__color_detect__srv__SetColor_Response() }
  }
}






#[link(name = "color_detect__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__color_detect__srv__SetColor() -> *const std::ffi::c_void;
}

// Corresponds to color_detect__srv__SetColor
#[allow(missing_docs, non_camel_case_types)]
pub struct SetColor;

impl rosidl_runtime_rs::Service for SetColor {
    type Request = SetColor_Request;
    type Response = SetColor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__color_detect__srv__SetColor() }
    }
}


