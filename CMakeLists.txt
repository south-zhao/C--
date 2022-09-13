cmake_minimum_required(VERSION 3.22)
project(C__)

set(CMAKE_CXX_STANDARD 14)

add_executable(public public.cpp)
add_executable(xianding xianding.cpp)
add_executable(2-27 timu/2-27.cpp)
add_executable(main main.cpp)
add_executable(point point.cpp)


add_executable(client head/client.h client.cpp test.cpp)
add_executable(stock head/stock.h stock.cpp unstock.cpp)
add_executable(xyz head/xyz.h xyz.cpp unxyz.cpp)
add_executable(jisqi jisqi.cpp)
add_executable(protos protos.cpp)