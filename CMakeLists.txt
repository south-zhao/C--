cmake_minimum_required(VERSION 3.22)
project(C__)

set(CMAKE_CXX_STANDARD 14)

add_executable(public public.cpp)
add_executable(xianding xianding.cpp)
add_executable(2-27 timu/2-27.cpp)
add_executable(main main.cpp)
add_executable(point point.cpp)


add_executable(client head/client.h head/client.cpp head/test.cpp)
add_executable(stock head/stock.h head/stock.cpp head/unstock.cpp)
add_executable(xyz head/xyz.h head/xyz.cpp head/unxyz.cpp)
add_executable(jisqi jisqi.cpp)
add_executable(protos protos.cpp)
add_executable(Bank review/Bank.cpp)
add_executable(Student Student.cpp)
add_executable(4-1 review/4-1.cpp)
add_executable(congzai learn/congzai.cpp)
add_executable(3-14 review/3-14.cpp)
add_executable(3-12 review/3-12.cpp)