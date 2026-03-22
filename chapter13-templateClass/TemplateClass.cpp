#include <iostream>

template <typename T, typename U>
struct MyPair {
    T first{};
    U second{};
};

int main() {
    MyPair<int, std::string> pair1; // Create an instance of MyPair with int and std::string
    pair1.first = 42; // Assign a value to the first member
    pair1.second = "Hello"; // Assign a value to the second member

    std::cout << "First: " << pair1.first << ", Second: " << pair1.second << std::endl;

    MyPair<double, char> pair2; // Create another instance of MyPair with double and char
    pair2.first = 3.14; // Assign a value to the first member
    pair2.second = 'A'; // Assign a value to the second member

    std::cout << "First: " << pair2.first << ", Second: " << pair2.second << std::endl;


    MyPair<int, int> pair3{1, 1}; // Create an instance of MyPair with default types (std::string and int)

    std::cout << "First: " << pair3.first << ", Second: " << pair3.second << std::endl;

    return 0;
}