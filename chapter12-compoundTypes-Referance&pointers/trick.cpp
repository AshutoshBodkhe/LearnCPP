#include <iostream>

void modifyConstParam(const int& constRef) {
    // Cast away const and modify
    *(int*)(&constRef) = 100;
    std::cout << "Inside function, constRef = " << constRef << std::endl;
}

int main() {
    const int x = 50;
    std::cout << "Original x = " << x << std::endl;
    
    modifyConstParam(x);
    
    std::cout << "After function call, x = " << x << std::endl;
    
    // Another trick with const pointers
    const int* ptr = &x;
    *(int*)(ptr) = 200; // Cast away const
    std::cout << "After pointer cast, x = " << x << std::endl;
    
    return 0;
}
