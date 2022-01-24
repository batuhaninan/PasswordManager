cmake_minimum_required(VERSION 2.8.12)
project(PasswordManager)

add_definitions("-std=c++17")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
include_directories(src)
conan_basic_setup()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(
  PasswordManager
  
  main.cpp
  
  src/DB/Database.cpp
  src/DB/Database.hpp
  
  src/DB/initDB.cpp
  src/DB/initDB.hpp
  
  src/GUI/initGUI.cpp
  src/GUI/initGUI.hpp
  
  src/GUI/Pages/editpage.cpp
  src/GUI/Pages/editpage.h
  
  src/GUI/Pages/login.cpp
  src/GUI/Pages/login.h
  
  src/GUI/Pages/mainpage.cpp
  src/GUI/Pages/mainpage.h
  
  src/GUI/Pages/signup.cpp
  src/GUI/Pages/signup.h
)
target_link_libraries(PasswordManager ${CONAN_LIBS} Qt5::Widgets)
