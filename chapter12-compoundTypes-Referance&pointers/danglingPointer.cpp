#include <iostream>

int main(){
    int *ptr;

    {
        int x =10;
        ptr = &x; // ptr now points to x
        std::cout << "Value of x: " << x << std::endl; //
        std::cout << "Value of ptr: " << *ptr << std::endl; // Output the value pointed to by ptr (which is x)

    }
    std::cout << "Value of ptr after x goes out of scope: " << *ptr << std::endl; // Output the value pointed to by ptr (undefined behavior)
}