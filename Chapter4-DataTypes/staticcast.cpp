#include <iostream>
#include <string>

int main() {

    char* str = nullptr;
    int i = static_cast<int>(*str);
    std::cout << "The integer value is: " << i << std::endl; // Output: 3
    return 0;
}