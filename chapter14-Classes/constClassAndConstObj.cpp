#include <iostream>

class Base{
    public:
        Base(int val) : value(val) {

        }
        void display() const{        
            std::cout << "Value: " << value << std::endl;
        };

    private:
        const int value;
};


int main(){
    const Base obj(10); // Create a constant object of the Base class
    obj.display(); // Call the display function to show the value

    Base obj2(20); // Create a non-constant object of the Base class
    obj2.display(); // Call the display function to show the value
    return 0;
}