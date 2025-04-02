//Create a class Rectangle with private members length and width. Constructor initializes values and a public method calculates area.


#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(10.5, 5.2);
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;

    return 0;
}
