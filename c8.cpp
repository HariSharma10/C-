//Write Code Explaining All Types of Constructors

#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    // Default Constructor
    Demo() { x = 10; }

    // Parameterized Constructor
    Demo(int val) { x = val; }

    // Copy Constructor
    Demo(const Demo &d) { x = d.x; }

    void display() { cout << "Value: " << x << endl; }
};

int main() {
    Demo obj1;           // Default Constructor
    Demo obj2(20);       // Parameterized Constructor
    Demo obj3 = obj2;    // Copy Constructor

    obj1.display();
    obj2.display();
    obj3.display();
}
