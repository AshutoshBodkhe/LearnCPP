#include <iostream>

void fun(int a) {
    std::cout << "Function with int parameter fun1: " << a << std::endl;
}

void fun2(double a) {
    std::cout << "Function with double parameter fun2: " << a << std::endl;
}


int main(){
    // long int value = 10;
    fun(10L); // This will cause ambiguity because value can be promoted to both int and double
    return 0;
}