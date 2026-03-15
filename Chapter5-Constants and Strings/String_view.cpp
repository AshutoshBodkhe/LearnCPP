#include <string>
#include <string_view>
#include <iostream>

using namespace std;

void stringfunction(string editableString){
    editableString += " is editable";
    cout << editableString << endl;
}

void stringViewFunction(string_view nonEditableString){
    nonEditableString += " is editable"; // This will cause a compilation error
    cout << nonEditableString << " is not editable" << endl;
}


int main(){
    string myString = "This is a string";
    stringfunction(myString);
    cout << "Original string: " << myString << endl;

    string_view myStringView = "This is a string view";
    stringViewFunction(myStringView); // Uncommenting this line will cause a compilation error
    return 0;
}