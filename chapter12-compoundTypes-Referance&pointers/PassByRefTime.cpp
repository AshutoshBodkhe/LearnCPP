#include <iostream>
#include <chrono>
#include <thread>

class MyClass {
public:
    MyClass()
    : value(0) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cerr << "MyClass constructor called" << std::endl;
    }

    MyClass(const MyClass& other) {
        value = other.value;
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cerr << "MyClass copy constructor called" << std::endl;
    }

    void doSomething(int value) {
        this->value = value;
        std::cerr << "Doing something with MyClass and value: " << value << std::endl;
    }

    int value;
};


void passByValue(MyClass obj) {
    obj.doSomething(20); // Modify the object through the value parameter
    std::cerr << "Inside passByValue function" << &obj << std::endl;

}

void passByReference(MyClass& obj) {
    obj.doSomething(30); // Modify the object through the reference
    std::cerr << "Inside passByReference function" << &obj << std::endl;
}

int main() {
    MyClass myObj; // Create an instance of MyClass


    std::cerr << "Passing by reference:" << &myObj<<  std::endl;
    passByReference(myObj); // Pass the object by reference
    // std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cerr << "Passing by value:" << std::endl;
    passByValue(myObj); // Pass the object by value

    return 0;
}   