// #include <iostream>

// double calcCircumference(double radius)
// {
//     constexpr double pi { 3.14159265359 };
//     return 2.0 * pi * radius;
// }

// int main()
// {
//     constexpr double circumference { calcCircumference(3.0) }; // compile error

//     std::cout << "Our circle has circumference " << circumference << "\n";

//     return 0;
// }


#include <iostream>

constexpr double calcCircumference(double radius) // now a constexpr function
{
    constexpr double pi { 3.14159265359 };
    return 2.0 * pi * radius;
}

int main()
{
    constexpr double circumference { calcCircumference(3.0) }; // now compiles

    std::cout << "Our circle has circumference " << circumference << "\n";

    return 0;
}