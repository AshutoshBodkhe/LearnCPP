#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    // Post-increment: returns the value before incrementing
    std::cout << "Post-increment (a++): " << a++ << std::endl; // Outputs 5, then a becomes 6
    std::cout << "Value of a after post-increment: " << a << std::endl; // Outputs 6

#error "This line is intentionally causing a compilation error to demonstrate the difference between pre-increment and post-increment."
    // Pre-increment: increments the value before returning it
    std::cout << "Pre-increment (++b): " << ++b << std::endl; // b becomes 11, then outputs 11
    std::cout << "Value of b after pre-increment: " << b << std::endl; // Outputs 11

    return 0;
}