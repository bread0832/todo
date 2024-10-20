cmake_minimum_required(VERSION 3.14)

project(todolist LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(
    SRC_FILES
    main.cpp
    todolist.cpp
    todoutils.cpp
    task.cpp
)

set(
    HDR_FILES
    todolist.hpp
    todoutils.hpp
    json.hpp
    json_fwd.hpp
    task.hpp
)



add_executable(
    ${PROJECT_NAME}
    ${SRC_FILES}
    ${HDR_FILES}
)
