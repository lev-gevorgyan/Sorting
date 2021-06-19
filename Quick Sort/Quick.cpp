#include "Quick.h"

int Quick::partition(std::vector<int> &v, int start, int end) {
    int pivot{ start };
    int i{ start + 1 };
    int j{ end };

    while (i <= j) {
        if (v[i] > v[pivot] && v[j] < v[pivot]) { std::swap(v[i], v[j]); }
        else if (v[i] <= v[pivot]) { ++i; }
        else if (v[j] >= v[pivot]) { --j; }
    }

    std::swap(v[j], v[pivot]);
    return j;
}

void Quick::sort(std::vector<int> &v, int start, int end) {
    if (start < end) {
        int pivot = partition(v, start, end);
        sort(v, start, pivot);
        sort(v, pivot + 1, end);
    }
}