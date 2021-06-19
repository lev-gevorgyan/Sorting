#include "Merge.h"

void Merge::merge(std::vector<int> &v, int start, int mid, int end) {
    std::vector <int> aux(v.size());
    int i{ start };
    int j{ mid + 1 };
    int k{ start };

    while (i <= mid && j <= end) {
        if (v[i] < v[j])
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];
    }

    while (i <= mid) {
        aux[k++] = v[i++];
    }

    while (j <= end) {
        aux[k++] = v[j++];
    }

    for (int ix{ start }; ix <= end; ++ix) v[ix] = aux[ix];
}

void Merge::sort(std::vector<int> &v, int start, int end) {
    if (start < end) {
        int m = (start + end) / 2;
        sort(v, start, m);
        sort(v, m + 1, end);
        merge(v, start, m, end);
    }
}