#include <iostream>
using add = int(*)(int, int); // Typedef for a function pointer that takes two ints and returns an int

int addFunction(int a, int b) {
    return a + b;
}

add = addFunction; // Assigning the function to the function pointer


int main() {
    int result = add(5, 3); // Using the function pointer to call the function
    std::cout << "Result of addition: " << result << std::endl; // Should output 8
    return 0;
}