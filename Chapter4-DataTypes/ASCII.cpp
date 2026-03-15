#include <iostream>

using namespace std;

int main(){
    char* c = nullptr;
    c = new char();

    cout <<"Entre one character: ";
    cin >> *c;

    cout << "The character you entered is: " << *c << endl;
    cout << "the ascii value of the character is: " << static_cast<int>(*c) << endl;
    delete c;
    return 0;

}