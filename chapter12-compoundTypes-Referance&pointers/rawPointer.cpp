#include <iostream>

int main(){
    int* ptr{};

    std::cout << "Value of ptr: " << *ptr << std::endl; // Output the value of the pointer (uninitialized)
}