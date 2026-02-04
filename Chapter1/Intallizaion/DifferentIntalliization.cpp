#include <iostream>

int main(int argc, char* argv[]) {
    int x; // uninitialized variable
    int x1 = 5; // initialized variable copy
    int x2 (5); // direct initialization
    int x3{5}; // uniform initialization and Narrawing is allowed
    int x4 = {5}; // copy initialization
    int x5{}; // value initialization to zero


    std::cout << "printing X , X1, X2, X3, X4, X5 values: " << x << " " << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << std::endl;
    return 0;
}