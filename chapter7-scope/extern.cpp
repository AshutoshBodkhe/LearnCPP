#include <iostream>

int g_var = 10; // Global variable with external linkage
static int staticVar = 20; // Static variable with internal linkage
const int const_global_var = 30; // Constant variable with external linkage

void sayHi(){
    std::cout << "Hi!" << std::endl;
}