// Q4.) How does Function Overloading work in C++?

#include <iostream>
using namespace std;

class Math {
public:
    void add(int a, int b) { cout << "Sum: " << a + b << endl; }
    void add(double a, double b) { cout << "Sum: " << a + b << endl; }
};

int main() {
    Math obj;
    obj.add(5, 10);      // Calls int version
    obj.add(3.5, 2.5);   // Calls double version
}



