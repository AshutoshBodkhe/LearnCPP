#include <iostream>
#include <string>

using namespace std;
// int main(){
//         cout << "Enter a string: ";
//         string input;
//         getline(cin, input); // Read a line of input into the string variable
//         cout << "You entered: " << input << endl; // Output the entered string
// }


int main(){
    char* cstr;
    cstr = new char[100]; // Allocate memory for a C-style string
    cout << "Enter a string: ";

    // cin.getline(cstr, 100); // Read a line of input into the C-style string variable
    cin >> cstr; // This will read input until the first whitespace character, which may not be ideal for strings with spaces
    cout << "You entered: " << cstr << endl; // Output the entered string

}