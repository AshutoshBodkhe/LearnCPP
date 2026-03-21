#include <iostream>

class UserClass{
    public:
    operator int() const {
        return 42; // Example conversion to int
    }
};

void function(int value) {
    std::cout << "Function called with value: " << value << std::endl;
}
int main(){
    UserClass obj;
    function(obj); // Implicitly converts obj to int using the conversion operator
    return 0;
}