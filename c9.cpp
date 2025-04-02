// //Define Vector Container in C++ and Explain Its Operations with Examples.
// Answer:
// A vector is a dynamic array in C++. It can grow and shrink in size.
// Operations:

// push_back(x): Adds element x at the end.

// pop_back(): Removes the last element.

// size(): Returns size of vector.

// Example:




#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    v.push_back(4);
    v.pop_back();

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}
