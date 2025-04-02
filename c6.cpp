//Reverse an Array

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {0, 2, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, arr + n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
// Output: 3 1 4 2 0