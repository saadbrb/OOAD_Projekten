cmake_minimum_required(VERSION 3.16)
project(Strategy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inheritance main.cpp Navigation.cpp Navigation.h NaviEconomic.cpp NaviEconomic.h NaviFast.cpp NaviFast.h NaviScenic.cpp NaviScenic.h)
