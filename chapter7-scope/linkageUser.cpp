#include "inter-exterLinkage.cpp"

int main(){
    std::cout << "Accessing static variable from main: " << staticVar << std::endl; // Accessing static variable
    std::cout << "Accessing constant variable from main: " << constVar << std::endl; // Accessing constant variable
    return 0;
}