cmake_minimum_required(VERSION 3.23)
project(GestoreNote)

set(CMAKE_CXX_STANDARD 14)

add_executable(GestoreNote main.cpp Nota.cpp Nota.h Observer.h Subject.h ImportantCollection.cpp ImportantCollection.h VariousCollection.cpp VariousCollection.h Collection.h CounterObserver.h)

add_subdirectory(test)
set(SOURCE_FILES Nota.cpp Nota.h Observer.h Subject.h ImportantCollection.cpp ImportantCollection.h VariousCollection.cpp VariousCollection.h Collection.h CounterObserver.h)
add_executable(my_executable main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(my_executable core)