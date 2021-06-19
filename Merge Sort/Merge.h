#ifndef SORTING_MERGE_H
#define SORTING_MERGE_H

#include <vector>

class Merge {
private:
    static void merge(std::vector<int> &v, int start, int mid, int end);
public:
    static void sort(std::vector<int> &v, int start, int end);
};

#endif //SORTING_MERGE_H