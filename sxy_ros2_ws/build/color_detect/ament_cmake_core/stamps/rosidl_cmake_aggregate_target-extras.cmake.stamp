# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target color_detect::color_detect
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${color_detect_TARGETS}.
if(color_detect_TARGETS AND NOT TARGET color_detect::color_detect)
  add_library(color_detect::color_detect INTERFACE IMPORTED)
  set_target_properties(color_detect::color_detect PROPERTIES
    INTERFACE_LINK_LIBRARIES "${color_detect_TARGETS}")
endif()
