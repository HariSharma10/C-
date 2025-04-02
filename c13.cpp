//  Define a class named Student with private data members name and age. Implement public getter and setter methods to access these members.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
    Student s;
    s.setName("John");
    s.setAge(20);

    cout << "Student Name: " << s.getName() << endl;
    cout << "Student Age: " << s.getAge() << endl;

    return 0;
}
