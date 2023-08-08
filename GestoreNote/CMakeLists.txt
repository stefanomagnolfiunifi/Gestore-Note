cmake_minimum_required(VERSION 3.23)
project(GestoreNote)

set(CMAKE_CXX_STANDARD 14)

add_executable(GestoreNote main.cpp Nota.cpp Nota.h Observer.h Subject.h ImportantCollection.cpp ImportantCollection.h VariousCollection.cpp VariousCollection.h)
