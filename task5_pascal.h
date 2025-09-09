#include "task5_pascal.h"
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Function to generate Pascal's Triangle
vector<vector<int>> generatePascal(int n) {
    vector<vector<int>> triangle(n);

    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
}
