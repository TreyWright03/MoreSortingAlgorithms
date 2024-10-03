#include "mergesort.h"
using namespace std;

void mergeSort(vector<int>& ar) {
    if (ar.size() <= 1) return;

    int mid = ar.size() / 2;
    vector<int> left(ar.begin(), ar.begin() + mid);
    vector<int> right(ar.begin() + mid, ar.end());

    mergeSort(left);
    mergeSort(right);

    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            ar[k++] = left[i++];
        } else {
            ar[k++] = right[j++];
        }
    }

    while (i < left.size()) {
        ar[k++] = left[i++];
    }

    while (j < right.size()) {
        ar[k++] = right[j++];
    }
}
