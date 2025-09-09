#include <iostream>
#include <vector>
#include <cassert>
#include "task3_find_indices.h"

// Helper to display vectors nicely
void displayVector(const std::vector<int>& vec) {
    std::cout << "{ ";
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i];
        if (i + 1 < vec.size()) std::cout << ", ";
    }
    std::cout << " }";
}

int main() {
    // Case 1: Key appears multiple times
    std::vector<int> nums1 = {1, 2, 3, 2, 4, 2};
    std::vector<int> expected1 = {1, 3, 5};
    auto result1 = findIndices(nums1, 2);
    assert(result1 == expected1);
    std::cout << "Case 1 (repeated key): ";
    displayVector(result1);
    std::cout << " -> OK\n";

    // Case 2: Key does not exist
    std::vector<int> nums2 = {5, 6, 7};
    auto result2 = findIndices(nums2, 9);
    assert(result2.empty());
    std::cout << "Case 2 (not found): ";
    displayVector(result2);
    std::cout << " -> OK\n";

    // Case 3: Array is empty
    std::vector<int> nums3;
    auto result3 = findIndices(nums3, 1);
    assert(result3.empty());
    std::cout << "Case 3 (empty input): ";
    displayVector(result3);
    std::cout << " -> OK\n";

    std::cout << "\n✔ All Task 3 test cases passed successfully.\n";
    return 0;
}
