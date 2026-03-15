#include "MyClass.h"

MyClass::MyClass(int value) : m_value(value) {
    std::cout << "MyClass constructor called with value: " << value << std::endl;
}

int MyClass::getValue() const {
    std::cout << "MyClass getValue called, returning: " << m_value << std::endl;
    return m_value;
}

void MyClass::setValue(int value) {
    std::cout << "MyClass setValue called with value: " << value << std::endl;
    m_value = value;
}
