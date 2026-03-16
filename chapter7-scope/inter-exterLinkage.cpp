#include <iostream>

static int staticVar = 10; // Static variable with internal linkage


extern int constVar = 20; // Constant variable with internal linkage

// int main() {
//     std::cout << "Static variable: " << staticVar << std::endl;
//     std::cout << "Constant variable: " << constVar << std::endl;
//     return 0;
// }