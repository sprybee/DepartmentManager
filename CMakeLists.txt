cmake_minimum_required(VERSION 3.24)
project(DepartmentManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(DepartmentManager main.cpp Worker.cpp Worker.h WorkerLink.cpp WorkerLink.h Operator.h Operator.cpp)
