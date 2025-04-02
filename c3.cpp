//Q3.)  //Define Abstraction and Encapsulation, and explain how they differ in OOP.
// Answer:

// Abstraction refers to hiding implementation details and only showing necessary features. It is achieved using abstract classes and interfaces.

// Encapsulation means bundling data and methods that operate on that data into a single unit (class). It is achieved using access specifiers (private, protected, public).

// Feature	Abstraction	Encapsulation
// Purpose	Hides implementation	Hides data
// Achieved by	Abstract classes, interfaces	Classes, objects
// Focus	What an object does	How an object does it


// Abstraction
class Shape {
    public:
        virtual void draw() = 0;  // Pure virtual function
    };
    
    // Encapsulation
    class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r) { radius = r; }
        void draw() override { cout << "Drawing Circle with radius " << radius << endl; }
    };
    

