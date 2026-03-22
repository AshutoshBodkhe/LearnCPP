#include  <iostream>

int main(){
    short a = 1; // Declare a short variable
    const int& you{a}; // Declare a reference to an int and initialize it with a
    // int& me{a}; // Declare a reference to an int and initialize it with a
    a--;
    std::cout << you << std::endl; // Print the value of the reference
    return 0;
}