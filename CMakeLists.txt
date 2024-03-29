cmake_minimum_required(VERSION 3.13)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

# GoogleTest Include #
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

#SpdLog Include #
add_subdirectory(lib/spdlog-1.x)
include_directories(lib/spdlog-1.x/include)

add_executable(HelloWorld
        src/main.cpp
        src/pointers/Pointers.cpp
        src/util/list/List.cpp
        src/util/list/List.h
        src/util/list/node/Node.cpp
        src/util/list/node/Node.h
        src/util/collector/Collector.cpp
        src/util/collector/Collector.h
        src/util/collector/clist/CList.cpp
        src/util/collector/clist/CList.h
        src/util/collector/clist/cnode/CNode.cpp
        src/util/collector/clist/cnode/CNode.h
        test/util/list/ListTest.cpp
        test/util/list/node/NodeTest.cpp
        test/util/collector/clist/cnode/CNodeTest.cpp
        test/util/collector/clist/CListTest.cpp)

target_link_libraries(HelloWorld gtest gtest_main)