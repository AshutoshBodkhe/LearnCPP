#include <iostream>

int x = 10; // global variable

int main(int argc, char* argv[]) {
    int x = 5; // local variable

    std::cout << "Local x: " << x << std::endl;       // prints local x
    std::cout << "Global x: " << ::x << std::endl;    // prints global x using scope resolution operator

    return 0;
}