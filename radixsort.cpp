#include "radixsort.h"
#include <algorithm>
using namespace std;

void countingBits(vector<int>& ar, int bit) {
    int n = ar.size();
    vector<int> output(n, 0);
    int count[2] = {0, 0}; 

    for (int num : ar) {
        int bit_val = (num >> bit) & 1;
        count[bit_val]++;
    }

    count[1] += count[0];

    for (int i = n - 1; i >= 0; --i) {
        int bit_val = (ar[i] >> bit) & 1;
        output[count[bit_val] - 1] = ar[i];
        count[bit_val]--;
    }

    ar = output;
}

void radixSort(vector<int>& ar) {
    if (ar.empty())
        return;

    int max_val = *max_element(ar.begin(), ar.end());

    int num_bits = sizeof(int) * 8;
    for (int bit = 0; bit < num_bits; ++bit) {
        countingBits(ar, bit);
    }
}