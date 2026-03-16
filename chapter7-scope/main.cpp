#include <iostream>
void sayHi(); // Function declaration
extern int g_var; // External variable declaration
// extern int staticVar; // External variable declaration (will not be accessible due to internal linkage)
extern const int const_global_var; // External constant variable declaration this will not work

int main(){
    sayHi(); // Calling the function
    std::cout << "Global variable: " << g_var << std::endl; // Accessing global variable
    // std::cout << "Static variable: " << staticVar << std::endl; // Attempting to access static variable (will cause a compilation error)
    std::cout << "Constant variable: " << const_global_var << std::endl; // Accessing constant variable
    return 0;
}