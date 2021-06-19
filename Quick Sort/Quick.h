#ifndef SORTING_QUICK_H
#define SORTING_QUICK_H

#include <vector>

class Quick {
private:
    static int partition(std::vector <int> &v, int start, int end);
public:
    static void sort(std::vector <int> &v, int start, int end);
};

#endif //SORTING_QUICK_H