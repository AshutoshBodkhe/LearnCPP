#include "MyClass.h"


int main(int argc, char* argv[]) {
    MyClass obj(10);
    int value = obj.getValue();

    std::cout << "Initial value: " << value << std::endl;

    obj.setValue(20);
    value = obj.getValue();

    std::cout << "Final value: " << value << std::endl;
    return 0;
}