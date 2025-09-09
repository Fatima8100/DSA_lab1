#include "task6_mode.h"

// Function to find mode
int findMode(const vector<int>& arr) {
    if (arr.empty()) return -1; // convention: return -1 for empty array

    unordered_map<int, int> freq;
    for (int num : arr) freq[num]++;

    int mode = arr[0], maxFreq = 0;
    for (auto& p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            mode = p.first;
        }
    }
    return mode;
}

