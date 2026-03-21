#include <iostream>

int main(){
    int x = 10; // Declare an integer variable
    int& ref = x; // Create a reference to the variable x

    std::cout << "Value of x: " << x << std::endl; // Output the value of x
    std::cout << "Value of ref: " << ref << std::endl; // Output the value of ref (which is the same as x)

    ref = 20; // Modify the value through the reference

    std::cout << "Value of x after modification: " << x << std::endl; // Output the modified value of x
    std::cout << "Value of ref after modification: " << ref << std::endl; // Output the modified value of ref
}