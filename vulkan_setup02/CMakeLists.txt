cmake_minimum_required(VERSION 3.11.0)

project(VulkanTest02 VERSION 0.1.0)

# Set path for GLFW
set(GLFW_PATH "${PROJECT_SOURCE_DIR}/library/glfw")

# Set path for GLM
set(GLM_PATH "${PROJECT_SOURCE_DIR}/library/glm")

# Vulkan setups Include, paths etc
set(VK_SDK_PATH "C:/VulkanSDK/1.3.261.1")

if(DEFINED VK_SDK_PATH)
    set(VK_INCLUDE "${VK_SDK_PATH}/Include")
    set(VK_LIB "${VK_SDK_PATH}/Lib")
    set(VK_FOUND "True")
endif()

if(NOT VK_FOUND)
    message(FATAL_ERROR "Could not find Vulkan library")
else()
    message(STATUS "Using vulkan lib at ${VK_LIB} ")
endif()

# Glfw setups includes and lib
if(DEFINED GLFW_PATH)
    message(STATUS "Using GLFW path specified")
    set(GLFW_INCLUDE "${GLFW_PATH}/include")
    set(GLFW_LIB "${GLFW_PATH}/lib-vc2019")
endif()

if(NOT GLFW_LIB)
    message(FATAL_ERROR "Could not find glfw library!")
else()
    message(STATUS "Using glfw lib at: ${GLFW_LIB}")
endif()

# include_directories(${PROJECT_SOURCE_DIR})

# file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} src/main.cpp)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

# set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/build")
target_include_directories(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE_DIR}/src
    ${VK_INCLUDE}
    ${GLFW_INCLUDE}
    ${GLM_PATH}
)

target_link_directories(${PROJECT_NAME} BEFORE PUBLIC
    ${VK_LIB}
    ${GLFW_LIB}
)

target_link_libraries(${PROJECT_NAME} glfw3 vulkan-1)