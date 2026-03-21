#include <iostream>

// int add(int a, int b) {
//     return a + b;
// }

// double add(double a, double b) {
//     return a + b;
// }

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Adding integers: " << add(2, 3) << std::endl; // Calls the int version
    std::cout << "Adding doubles: " << add(2.7, 3.9) << std::endl; // Calls the double version
    
    
    return 0;
}   