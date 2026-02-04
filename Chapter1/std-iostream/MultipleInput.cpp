#include <iostream>

int main() {
    std::cout << "Enter multiple integers (non-integer to stop): " << std::endl;
    int number1, number2;
    std::cin >> number1 >> number2;
    std::cout << "You entered: " << number1 << " and " << number2 << std::endl;
    return 0;
}