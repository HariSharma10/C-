// Write Code for Copy Constructor


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    Student(string n) { name = n; }
    Student(const Student &s) { name = s.name; } // Copy Constructor

    void display() { cout << "Name: " << name << endl; }
};

int main() {
    Student s1("Alice");
    Student s2 = s1; // Copy constructor invoked

    s2.display();
}
