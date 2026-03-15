#include <iostream>

class size{
    public:
    int a;
    char c;
    double d;
    double b;
    
};

int main(int argc, char* argv[]) {
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of size class: " << sizeof(size) << " bytes" << std::endl;

    return 0;
}