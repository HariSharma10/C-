// //Explain the Four Pillars of OOP.
// Encapsulation → Wrapping data and methods into a class.

// Abstraction → Hiding implementation details and showing only necessary information.

// Inheritance → Acquiring properties and behavior of another class.

// Polymorphism → The ability of one function to behave differently based on input.


class Animal {
    public:
        virtual void sound() { cout << "Animal makes a sound" << endl; }
    };
    
    class Dog : public Animal {
    public:
        void sound() override { cout << "Dog barks" << endl; }
    };
    