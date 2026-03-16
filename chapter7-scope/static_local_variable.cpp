#include <iostream>

// extern int count; // This will cause a compilation error because count is a static local variable and cannot be accessed outside its function

int static_local_function(){
    static int count = 0; // Static local variable
    count++;
    std::cout << "Function called " << count << " times." << std::endl;
    return count;
}


int main(){
    std::cout << "priting return count " << static_local_function() << std::endl; // Output: Function called 1 times.
    std::cout << "priting return count " << static_local_function() << std::endl; // Output: Function called 2 times.
    std::cout << "priting return count " << static_local_function() << std::endl; // Output: Function called 3 times.

    std::cout << "trying to access count variable outside the function: " << std::endl;
    // std::cout << count << std::endl; // This will cause a compilation error

    return 0;
}