#include "selectionsort.h"
#include <algorithm>  
using namespace std;

void selectionSortA(vector<int>& ar) {
    int n = ar.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (ar[j] < ar[minIndex]) {
                minIndex = j;
            }
        }
        swap(ar[i], ar[minIndex]); 
    }
}


void selectionSortB(vector<int>& ar) {
    int n = ar.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (ar[j] < ar[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(ar[i], ar[minIndex]); 
        }
    }
}
