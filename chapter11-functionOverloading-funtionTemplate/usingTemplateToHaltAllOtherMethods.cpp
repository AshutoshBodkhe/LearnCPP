#include <iostream>

void printInt(int a) {
    std::cout << "Integer: " << a << std::endl;
}

template<typename T>
void printInt(T) = delete; // Delete the template function for all types other than int

int main() {
    printInt(10); // This will work
    printInt('A'); // This will cause a compilation error because the char version is deleted
    printInt(3.14); // This will cause a compilation error because the double version is deleted
    printInt("Hello"); // This will cause a compilation error because the const char* version is deleted
    printInt(true); // This will cause a compilation error because the bool version is deleted
    printInt(10L); // This will cause a compilation error because the long int version is deleted
    return 0;
}