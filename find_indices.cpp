#include "task3_find_indices.h"

void testFindAllIndices() {
    vector<int> arr = {1, 2, 3, 2, 4, 2, 5};
    vector<int> result = findAllIndices(arr, 2);
    cout << "Indices of 2: ";
    for (int i : result) cout << i << " ";
    cout << endl;

    result = findAllIndices(arr, 10);
    cout << "Indices of 10 (not present): " << (result.empty() ? "None" : "Found") << endl;

    result = findAllIndices({}, 1);
    cout << "Empty array test: " << (result.empty() ? "PASS" : "FAIL") << endl;
}
