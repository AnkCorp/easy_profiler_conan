cmake_minimum_required(VERSION 2.8.12)
project(PackageTest CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(example example.cpp)
target_compile_definitions(example PUBLIC -DBUILD_WITH_EASY_PROFILER)
target_link_libraries(example ${CONAN_LIBS} Threads::Threads)

# CTest is a testing tool that can be used to test your project.
# enable_testing()
# add_test(NAME example
#          WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin
#          COMMAND example)
