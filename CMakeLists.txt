cmake_minimum_required(VERSION 3.22.1)

project(sdl2_hello_world)

add_executable(
    ${PROJECT_NAME} 
    src/main.cpp    
)

target_link_libraries(
    ${PROJECT_NAME} 
    SDL2
    SDL2_image
)

set_target_properties(
    ${PROJECT_NAME} 
    PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/
)

if(WIN32 OR WIN64)
    set_target_properties(
        ${PROJECT_NAME} 
        PROPERTIES 
        SUFFIX ".exe"
    )
endif()

if(UNIX)
    set_target_properties(
        ${PROJECT_NAME} 
        PROPERTIES 
        SUFFIX ".bin"
    )
