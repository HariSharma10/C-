// Q1.,)  What is Abstract Data Type (ADT) in Object-Oriented Programming?
            // Answer:
            // An Abstract Data Type (ADT) is a data type that is defined 
            // by its behavior rather than its implementation. It specifies
            //  the operations that can be performed on the data without 
            //  specifying how they are implemented. Examples of ADTs 
            //  include Stack, Queue, List, and Map.


            #include <iostream>
            using namespace std;

            // Example of an Abstract Data Type (ADT) - Stack


            class Stack {
                private:
                    int arr[100], top;
                public:
                    Stack() { top = -1; }
                    void push(int x) { arr[++top] = x; }
                    int pop() { return arr[top--]; }
                };


            int main() {
                Stack s;
                s.push(10);
                s.push(20);
                cout << "Popped element: " << s.pop() << endl; // Output: 20
                return 0;
            }
            // In this example, the Stack class defines the behavior of a stack
                