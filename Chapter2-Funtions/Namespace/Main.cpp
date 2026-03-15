#include <iostream>

namespace MyNamespace {
    void displayMessage() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

int main(int argc, char* argv[]) {
    MyNamespace::displayMessage();
    return 0;
}