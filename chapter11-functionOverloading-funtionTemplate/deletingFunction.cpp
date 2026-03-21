#include <iostream>

void printInt(int a) {
    std::cout << "Integer: " << a << std::endl;
}

void printInt(char) = delete;
void printInt(double) = delete;

int main() {
    printInt(10); // This will work
    printInt('A'); // This will cause a compilation error because the char version is deleted
    printInt(3.14); // This will cause a compilation error because the double version is deleted
    return 0;
}