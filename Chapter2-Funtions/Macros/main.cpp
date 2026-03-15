#include <iostream>

#define MYMACRO

int main(int argc, char* argv[]) {

    std::cout << "This is a simple macro example." << std::endl;
#if 0
    #ifdef MYMACRO
        std::cout << "MYMACRO is defined." << std::endl;
    #else
        std::cout << "MYMACRO is not defined." << std::endl;
    #endif
#endif

    return 0;
}
