#include <iostream>
#include <string>
#include <string_view>

using namespace std;

int main(){
    string myString = "Hello";

    string_view myStringView = myString; // Implicit conversion from string to string_view
    cout << "Original string: " << myString << endl;
    cout << "String view: " << myStringView << endl;
    
    myString = "Hello, World!"; // Modifying the original string

    cout << "string view after modifying original string: " << myStringView << endl; // The string_view reflects the change
    cout << "Original string after modification: " << myString << endl;


}