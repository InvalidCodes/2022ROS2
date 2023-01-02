cmake_minimum_required(VERSION 3.5)
project(more_interfaces)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(rclcpp REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

add_executable(publish_address_book
  src/publish_address_book.cpp
)

ament_target_dependencies(publish_address_book
  "rclcpp"
)

install(TARGETS publish_address_book
 DESTINATION lib/${PROJECT_NAME})

# list all interfaces
set(msg_files
  "msg/AddressBook.msg"
)

# generate all lists
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
)
rosidl_target_interfaces(publish_address_book
  ${PROJECT_NAME} "rosidl_typesupport_cpp"
)

# export message runtime dependency
ament_export_dependencies(rosidl_default_runtime)

ament_package()
