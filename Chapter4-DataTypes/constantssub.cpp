#include "ConstantSub.h"
#include <iostream>
#include <typeinfo>


int main(){
    std::cout << "The value of MY_CONSTANT is: " << MY_CONSTANT << " and its type is: " << typeid(MY_CONSTANT).name() << std::endl;
    return 0;
}