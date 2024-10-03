#include "countingsort.h"
#include <algorithm> 
using namespace std;


void countingSort(std::vector<int>& ar) {
    if (ar.empty())
        return;

    int max_val = *std::max_element(ar.begin(), ar.end());
    
    vector<int> count(max_val + 1, 0);

    for (int num : ar) {
        count[num]++;
    }

    for (int i = 1; i <= max_val; ++i) {
        count[i] += count[i - 1];
    }

    vector<int> output(ar.size());

    for (int i = ar.size() - 1; i >= 0; --i) {
        output[count[ar[i]] - 1] = ar[i];
        count[ar[i]]--;
    }

    ar = output;
}