cmake_minimum_required (VERSION 2.6)

project (EPI)

set (SOURCE_FILES
    src/EPI.cpp
    src/Utilities/get_int_array.cpp
    src/Primitive/closest_int_same_bit_count.cpp
    src/Primitive/count_bits.cpp
    src/Primitive/division.cpp
    src/Primitive/is_palindromic.cpp
    src/Primitive/multiply.cpp
    src/Primitive/orientation.cpp
    src/Primitive/parity.cpp
    src/Primitive/power.cpp
    src/Primitive/rectangle_intersection.cpp
    src/Primitive/reverse_bits.cpp
    src/Primitive/reverse_digits.cpp
    src/Primitive/swap_bits.cpp
    src/Primitive/uniform_random.cpp
	src/Arrays/even_odd.cpp
    src/Arrays/dnfp.cpp
    src/Arrays/naive_dnfp.cpp
    src/Arrays/buy_and_sell_stock.cpp
	)

include_directories(Headers)
#include_directories(${CMAKE_CURRENT_SOURCE_DIRECTORY})
#file(GLOB SOURCE_FILES "src/*.cpp", "src/Primitive/*.cpp")
#file(GLOB SOURCE_FILES "src/Utilities/*.cpp")
#file(GLOB SOURCE_FILES "src/Arrays/*.cpp")
set(CMAKE_CXX_FLAGS "-std=c++11 -g")
message("CMAKE_CXX_FLAGS are ${CMAKE_CXX_FLAGS}")
message("directories are ${SOURCE_FILES}")
add_executable(EPI ${SOURCE_FILES})
