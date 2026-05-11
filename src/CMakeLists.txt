set(target ${MP2_LIBRARY})

file(GLOB hdrs "*.h*" "${MP2_INCLUDE}/*.h*")
file(GLOB srcs "*.cpp")

add_library(${target} STATIC ${srcs} ${hdrs})
target_link_libraries(${target} ${LIBRARY_DEPS})
add_executable(avl_tree_ main.cpp)
target_link_libraries(avl_tree_ ${MP2_LIBRARY})
#add_library(${PROJECT_NAME} STATIC 
#    TArithmeticExpression.cpp
# TStateMachineLexem.cpp "TStateMachineCorrect.cpp" "TVisitor.cpp")


target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr4-cpp-runtime-4.13.2-source/runtime/src
    ${CMAKE_CURRENT_SOURCE_DIR}/../parser
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr_sln/runtime/Debug/antlr4-runtime.lib
)

