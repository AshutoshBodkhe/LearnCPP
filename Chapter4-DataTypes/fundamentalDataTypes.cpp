#include <iostream>

int main(int argc, char* argv[]) {
    // Integer data type
    int myInt = 42;
    std::cout << "Integer: " << myInt << "Size of Integer: " << sizeof(myInt) << " bytes" << std::endl;

    // Floating-point data type
    float myFloat = 3.14f;  
    std::cout << "Float: " << myFloat << "Size of Float: " << sizeof(myFloat) << " bytes" << std::endl;

    // Double data type
    double myDouble = 3.141592653589793;
    std::cout << "Double: " << myDouble << "Size of Double: " << sizeof(myDouble) << " bytes" << std::endl;

    // long double data type
    long double myLongDouble = 3.141592653589793238462643383;
    std::cout << "Long Double: " << myLongDouble << "Size of Long Double: " << sizeof(myLongDouble) << " bytes" << std::endl;

    //bool data type
    bool myBool = true;   
    std::cout << "Boolean: " << myBool << "Size of Boolean: " << sizeof(myBool) << " bytes" << std::endl;

    //char data type
    char myChar = 'A';
    std::cout << "Character: " << myChar << "Size of Character: " << sizeof(myChar) << " bytes" << std::endl;

    //wchar_t data type
    wchar_t myWChar = L'你好';
    std::cout << "Wide Character: " << myWChar << "Size of Wide Character: " << sizeof(myWChar) << " bytes" << std::endl;

    //char16_t data type
    char16_t myChar16 = u'你';
    std::cout << "Char16_t: " << myChar16 << "Size of Char16_t: " << sizeof(myChar16) << " bytes" << std::endl;

    //char32_t data type
    char32_t myChar32 = U'你';
    std::cout << "Char32_t: " << myChar32 << "Size of Char32_t: " << sizeof(myChar32) << " bytes" << std::endl;

    

    return 0;
}