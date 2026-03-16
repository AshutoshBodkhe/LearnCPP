#include <iostream>
#include "Const.h"

int main() {
    std::cout << "Pi: " << Math::PI << std::endl;
    std::cout << "e: " << Math::E << std::endl;
    std::cout << "Speed of light: " << Physics::SPEED_OF_LIGHT << std::endl;
    std::cout << "Gravity: " << Physics::GRAVITY << std::endl;
    return 0;
}