#include "Heap.h"

int Heap::right(int i) {
    return (2*i);
}

int Heap::left(int i) {
    return (2*i+1);
}

void Heap::maxHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int largest = i;
    if (l <= _size && _hp[l] > _hp[i])
        largest = l;
    else
        largest = i;
    if(r <= _size && _hp[r] > _hp[largest])
        largest = r;
    if(largest != i)
    {
        int temp = _hp[i];
        _hp[i] = _hp[largest];
        _hp[largest] = temp;
        maxHeapify(largest);
    }
}

void Heap::buildMaxHeap() {
    for(int i = _size/2; i>=1; i--)
    {
        maxHeapify(i);
    }
}

void Heap::sort() {
    buildMaxHeap();
    for(int i = _size; i > 1; --i)
    {
        int temp = _hp[1];
        _hp[1] = _hp[i];
        _hp[i] = temp;
        --_size;
        maxHeapify(1);
    }
}