#include <iostream>

inline void fun(){
    std::cout << "This is an inline function." << std::endl;
}

int main(){
    fun(); // Calling the inline function
    return 0;
}