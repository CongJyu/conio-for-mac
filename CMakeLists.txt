cmake_minimum_required(VERSION 3.5.0)
project(conio-for-mac VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)

add_executable(conio-for-mac main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
