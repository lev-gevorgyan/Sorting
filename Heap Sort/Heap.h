#ifndef SORTING_HEAP_H
#define SORTING_HEAP_H

#include <vector>

class Heap
{
private:
    int * _hp;
    size_t _size;

    int left(int);
    int right(int);
    void maxHeapify(int);
    void buildMaxHeap();
public:
    void sort();
    Heap(int * a, size_t size) : _hp{a} , _size{size}
    {}
};

#endif //SORTING_HEAP_H