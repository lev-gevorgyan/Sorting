cmake_minimum_required(VERSION 3.19)
project(Sorting)

set(CMAKE_CXX_STANDARD 20)

add_executable(Sorting main.cpp "Merge Sort/Merge.cpp" "Merge Sort/Merge.h" "Quick Sort/Quick.cpp" "Quick Sort/Quick.h" "Heap Sort/Heap/Heap.cpp" "Heap Sort/Heap/Heap.h")