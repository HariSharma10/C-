// // //Discuss how data hiding enhances data security in object-oriented programming.
// // Answer:
// // Data hiding restricts direct access to an object's data
//  by using private or protected access specifiers. This ensures
//   that critical data cannot be accidentally modified by external 
//   code, preventing unauthorized access and increasing security 
//   and integrity.
// // Example:


class BankAccount {
    private:
        double balance;  // Hidden from outside access
    public:
        BankAccount(double amount) { balance = amount; }
        void deposit(double amount) { balance += amount; }
        double getBalance() { return balance; }
    };
    