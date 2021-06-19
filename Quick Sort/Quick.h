#ifndef SORTING_QUICK_H
#define SORTING_QUICK_H

#include <vector>

class Quick {
private:
    int partition(std::vector <int> &v, int start, int end);
public:
    void sort(std::vector <int> &v, int start, int end);
};

#endif //SORTING_QUICK_H