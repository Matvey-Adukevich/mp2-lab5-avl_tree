cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(samples_antlr)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDebugDLL")

set(TARGET parser)


set(ANTLR_DIR "D:/study/AaSD/mp2-lab5-avl_tree/antlr-4.13.2")
set(ANTLR_INCLUDE "D:/study/AaSD/mp2-lab5-avl_tree/antlr4-cpp-runtime-4.13.2-source/runtime/src")

set(ANTLR_LIB "D:/study/AaSD/mp2-lab5-avl_tree/antlr_sln/runtime/Debug/antlr4-runtime.lib")

file(GLOB TARGET_SRC "*.cpp" "*.c*")
file(GLOB TARGET_HD "*.h" "*.h*")
add_executable(${TARGET} ${TARGET_SRC} ${TARGET_HD})

target_include_directories(${TARGET} PUBLIC ${ANTLR_INCLUDE})
target_link_libraries(${TARGET} ${ANTLR_LIB})

