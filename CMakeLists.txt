cmake_minimum_required(VERSION 3.5)

project(assignment-2-1-input-output LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    assignment-2-1-input-output
    submission.h
    main.cpp
)

install(TARGETS assignment-2-1-input-output
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/sample_input1.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/sample_input2.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/sample_input3.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Tests/input1.txt
      DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Tests/input2.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Tests/input3.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
