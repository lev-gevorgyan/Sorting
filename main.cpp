#include <iostream>

#include "Merge Sort/Merge.h"
#include "Quick Sort/Quick.h"
#include "Heap Sort/Heap/Heap.h"

int main() {
    int arr[] = {1, 15, 40, 32, 63, 9};
    Heap xh(arr, 6);
    xh.sort();

    for (int i = 0; i < 6; ++i) {
        std::cout << arr[i] << "\n";
    }
    return 0;
}
