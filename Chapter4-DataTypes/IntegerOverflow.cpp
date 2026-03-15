#include <iostream>

int main(int argc, char* argv[]) {
    unsigned int a = 4294967295; // Maximum value for a 32-bit unsigned integer
    std::cout << "Value of a: " << a << std::endl;

    // Attempting to add 1 to the maximum value will cause an overflow
    a = a + 1;
    std::cout << "Value of a after adding 1: " << a << std::endl;

    return 0;
}