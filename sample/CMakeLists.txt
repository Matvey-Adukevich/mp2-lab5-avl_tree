file(GLOB PARSER_SRC "${CMAKE_CURRENT_SOURCE_DIR}/../parser/*.cpp")

add_executable(main main.cpp ${PARSER_SRC})

target_include_directories(main PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    ${CMAKE_CURRENT_SOURCE_DIR}/../parser
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr4-cpp-runtime-4.13.2-source/runtime/src
)

target_link_libraries(main PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr_sln/runtime/Debug/antlr4-runtime.lib
)

add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/../antlr_sln/runtime/Debug/antlr4-runtime.dll"
        $<TARGET_FILE_DIR:main>
)