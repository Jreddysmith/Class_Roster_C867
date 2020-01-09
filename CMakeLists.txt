cmake_minimum_required(VERSION 3.15)
project(class_roster_c867)

set(CMAKE_CXX_STANDARD 14)

add_executable(class_roster_c867 main.cpp Student.cpp Student.h NetworkStudent.cpp NetworkStudent.h SecurityStudent.cpp SecurityStudent.h SoftwareStudent.cpp SoftwareStudent.h Roster.cpp Roster.h Degree.h)