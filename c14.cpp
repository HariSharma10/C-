//C++ program to demonstrate encapsulation using a class BankAccount with balance and accountNumber as private members.


#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    int accountNumber;

public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " New Balance: " << balance << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    double getBalance() { return balance; }
};

int main() {
    BankAccount account(12345, 1000);
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500);

    return 0;
}
