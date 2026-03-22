#include <iostream>


class MyClass {

    public: 
        MyClass() : value(42) {} // Constructor to initialize value
     void print() const {
        std::cout << "Value: " << value << std::endl;
     }

     const int value;
};



int main(){
    const MyClass obj{}; // Create an instance of MyClass with a value of 42
    obj.print(); // Call the print method to display the value
    return 0;
}