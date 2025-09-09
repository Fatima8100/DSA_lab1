#include <iostream>
#include "task7_strassen.h"
// Test cases
void testStrassen() {
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};
    auto result = strassen(A, B);

    cout << "Strassen result (2x2): " << endl;
    for (auto& row : result) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }

    auto naive = multiplyNaive(A, B);
    cout << "Naive result (2x2): " << endl;
    for (auto& row : naive) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }
}

int main() {
    testStrassen();
    return 0;
}
