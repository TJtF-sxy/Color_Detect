cmake_minimum_required(VERSION 3.8)
project(color_detect)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/SetColor.srv"
)

add_executable(image_publisher src/image_publisher.cpp)
ament_target_dependencies(image_publisher rclcpp sensor_msgs cv_bridge)
target_link_libraries(image_publisher ${OpenCV_LIBS})

add_executable(color_detector src/color_detector.cpp)
ament_target_dependencies(color_detector rclcpp sensor_msgs std_msgs cv_bridge)
target_link_libraries(color_detector ${OpenCV_LIBS})
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(color_detector "${cpp_typesupport_target}")

install(TARGETS
  image_publisher
  color_detector
  DESTINATION lib/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()