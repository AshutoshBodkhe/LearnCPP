#include <iostream>

int global_set(){
    return 100;
}

int global_var{global_set()};

int main(){
    std::cout << "Global variable: " << global_var << std::endl; // Accessing global variable through a function
    return 0;
}