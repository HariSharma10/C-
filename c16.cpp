//Class Employee with a constructor that initializes employee’s name and salary. Print details using a member function.


#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string empName, double empSalary) {
        name = empName;
        salary = empSalary;
    }

    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("Alice", 50000);
    emp.displayDetails();

    return 0;
}
