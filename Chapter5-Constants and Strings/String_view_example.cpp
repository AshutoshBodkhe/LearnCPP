#include <string>
#include <string_view>
#include <iostream>

using namespace std;

void printString(string_view str) {
    cout << "String view: " << str << endl;
}


void printUsingStdString(string str){
    cout << "Std string: " << str << endl;
}

int main(){

    string myString = "Hello, World!";
    printString(myString); // Implicit conversion from string to string_view

    const char* cstr = "Hello, C-Style String!";
    printString(cstr); // Implicit conversion from const char* to string_view

    int value = 42;
    printString(to_string(value)); // Implicit conversion from std::string to string_view
    printUsingStdString(static_cast<string>(value));  // This will not do the implicit conversion and will cause a compilation error

    return 0;

}