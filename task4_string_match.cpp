#include <iostream>
#include "task4_string_match.h"

void testNaiveSearch() {
    cout << "Test 1 (pattern at beginning): " 
         << naiveSearch("hello world", "hello") << endl;   // expect 0

    cout << "Test 2 (pattern at end): " 
         << naiveSearch("hello world", "world") << endl;   // expect 6

    cout << "Test 3 (pattern not present): " 
         << naiveSearch("hello world", "abc") << endl;     // expect -1

    cout << "Test 4 (empty pattern): " 
         << naiveSearch("hello", "") << endl;              // expect -1
}

int main() {
    testNaiveSearch();
    return 0;
}
