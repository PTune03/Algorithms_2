cmake_minimum_required(VERSION 3.20)
project(Algorithms_2)

set(CMAKE_CXX_STANDARD 23)

add_executable(Algorithms_2 main.cpp Sequence.cpp Sequence.h ArraySequence.hpp ListSequence.hpp Errors.h LinkedList.hpp DynamicArray.hpp menu.cpp menu.h TestsDynamicArray.hpp TestsLinkedList.hpp TestsArraySequence.hpp TestsListSequence.hpp Tests.cpp Tests.hpp)
