// Q2.) // Explain the concept of Data Hiding and how it improves data security in OOP.
// Answer:
// Data hiding is a technique used in object-oriented programming (OOP) to restrict access to certain details of an object. It is achieved using the private and protected access specifiers in C++.

// It prevents unauthorized access and accidental modification of data.

// It enhances security by ensuring only necessary operations are allowed.


class BankAccount {
    private:
        double balance;  // Hidden data
    public:
        BankAccount(double b) { balance = b; }
        void deposit(double amount) { balance += amount; }
        double getBalance() { return balance; }  // Only this method can access balance
    };
    