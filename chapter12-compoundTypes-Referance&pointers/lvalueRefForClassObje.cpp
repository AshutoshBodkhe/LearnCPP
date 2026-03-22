#include <iostream>

class MyClass {
public:
    int value;
    MyClass(int val) : value(val) {} // Constructor to initialize value

    void display() {
        std::cout << "Value: " << value << std::endl;
    }

};

class MyClass2 {
    private:
        MyClass& obj; // MyClass object as a member of MyClass2
    
    public:

        MyClass2(MyClass& objRef) : obj(objRef) {} // Constructor to initialize the reference
       
        void display() {
            obj.display(); // Call the display method of MyClass
        }

        void doSomething() {
            obj.value += 10; // Modify the value of MyClass through the reference
        }

};


int main() {
    MyClass obj(42); 
    obj.display(); // Display the value of obj
    MyClass2 obj2(obj); // Create an instance of MyClass2, passing the MyClass object
    obj2.display(); // Display the value of obj through MyClass2
    obj2.doSomething(); // Modify the value of obj through MyClass2
    obj.display(); // Display the modified value of obj

    return 0;
}