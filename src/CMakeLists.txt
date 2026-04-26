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
