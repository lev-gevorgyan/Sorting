#ifndef SORTING_MERGE_H
#define SORTING_MERGE_H

#include <vector>

class Merge {
private:
    void merge(std::vector<int> &v, int start, int mid, int end);
public:
    void sort(std::vector<int> &v, int start, int end);
};

#endif //SORTING_MERGE_H