#include <iostream>

int main(){
    const int* intPtr;
    const int value = 42;
    intPtr = &value; // intPtr now points to value

    const int value2 = 100;
    intPtr = &value2; // intPtr can point to another constant integer


    int const * intPtr2; // This is the same as const int* intPtr2

    int value3 = 50;
    int* const constPtr = &value3; // constPtr is a const pointer to int

    *constPtr = 60; // We can change the value pointed to by constPtr

    // constPtr = &value2; // This would be an error because constPtr is a const pointer

}