#include "quicksort.h"
using namespace std;

void quickSort(vector<int>& ar) {
    if (ar.size() <= 1) return;

    int pivot = ar[ar.size() / 2];
    vector<int> left, right, equal;

    for (int i = 0; i < ar.size(); ++i) {
        if (ar[i] < pivot) left.push_back(ar[i]);
        else if (ar[i] == pivot) equal.push_back(ar[i]);
        else right.push_back(ar[i]);
    }

    quickSort(left);
    quickSort(right);

    ar = left;
    ar.insert(ar.end(), equal.begin(), equal.end());
    ar.insert(ar.end(), right.begin(), right.end());
}
