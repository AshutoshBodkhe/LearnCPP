#include <iostream>

int main(){

    for(int i = 0; i < 5; ++i){
        std::cout << "Pre-increment: " << ++i << std::endl; // Pre-increment: increments i before using it
    }

    std::cout << "-----------------" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cout << "Post-increment: " << i++ << std::endl; // Post-increment: uses i then increments it
    }
}