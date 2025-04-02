//Demonstrating a destructor by creating a class Car that prints a message when an object is destroyed.


#include <iostream>
using namespace std;

class Car {
public:
    Car() { cout << "Car object created!" << endl; }
    ~Car() { cout << "Car object destroyed!" << endl; }
};

int main() {
    Car c1;
    {
        Car c2;
    } // c2 goes out of scope here, destructor is called

    cout << "End of main function" << endl;
    return 0;
}
