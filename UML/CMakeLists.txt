cmake_minimum_required(VERSION 3.20)
project(Observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observer main.cpp Subject.cpp Observer.h BatteryApp.cpp BatteryApp.h BatteryLogger.cpp BatteryLogger.h SystemBattery.cpp SystemBattery.h)
