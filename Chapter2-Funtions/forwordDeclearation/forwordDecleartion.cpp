#include <iostream>

int add(int x, int y); // Forward declaration

int main(int argc, char* argv[]) {
    int a = 5;
    int b = 10;
    int result = add(a, b);
    std::cout << "The sum of " << a << " and " << b << " is: " << result << std::endl;
    return 0;
}

int add(int x, int y) { // Function definition
    return x + y;
}