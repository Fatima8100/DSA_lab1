#include <iostream>
#include "task6_mode.h"

// Test cases
void testFindMode() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4};
    cout << "Mode: " << findMode(arr) << endl; // 3

    arr = {1, 2, 3, 4, 5};
    cout << "Mode (unique): " << findMode(arr) << endl; // Any one (e.g., 1)

    vector<int> emptyVec;
    cout << "Empty array test: " << findMode(emptyVec) << endl; // -1
}

int main() {
    testFindMode();
    return 0;
}
