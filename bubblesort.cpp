#include "bubblesort.h"
using namespace std;

void bubbleSortA(vector<int>& ar) {
    int n = ar.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (ar[j] > ar[j + 1]) {
                swap(ar[j], ar[j + 1]);
            }
        }
    }
}


void bubbleSortB(vector<int>& ar) {
    int n = ar.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (ar[j] > ar[j + 1]) {
                swap(ar[j], ar[j + 1]);
                swapped = true;
            }
        }
    }
}


void bubbleSortC(vector<int>& ar) {
    int n = ar.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = n - 1; j > i; --j) {
            if (ar[j - 1] > ar[j]) {
                std::swap(ar[j - 1], ar[j]);
                swapped = true;
            }
        }
    }
}