cmake_minimum_required(VERSION 3.25)
project(vcpkg-dcmtk LANGUAGES CXX)

find_package(Boost 1.53 REQUIRED COMPONENTS filesystem)
add_library(foo SHARED foo.cxx)
target_include_directories(foo PRIVATE ${Boost_INCLUDE_DIRS})
#target_link_libraries(foo PRIVATE Boost::filesystem)