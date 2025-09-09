#include <iostream>
#include "task5_pascal.h"

// Test cases
void testPascal() {
    auto tri = generatePascal(5);
    for (auto& row : tri) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }
}

int main() {
    testPascal();
    return 0;
}
