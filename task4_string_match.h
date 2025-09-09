#include "task4_string_match.h"
#include <iostream>
#include <string>
using namespace std;

// Naive substring search
int naiveSearch(const string& text, const string& pattern) {
    if (pattern.empty()) return -1; // required by your lab spec
    int n = text.size(), m = pattern.size();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i;
    }
    return -1;
}
