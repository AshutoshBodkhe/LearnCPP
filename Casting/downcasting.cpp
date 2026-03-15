#include <iostream>

class Base{
    public:

    virtual void display(){
    };  
};


class Derived : public Base{
    public:

    void display() override{
        std::cout<<"Derived class display function called"<<std::endl;
    }

    void functionDerived(){
        std::cout<<"Derived class specific function called"<<std::endl;
    }
};


int main(int argc, char* argv[]) {
    Base* basePtr = new Derived(); // Upcasting: Derived* to Base*

    basePtr->display(); // Calls Derived's display() due to virtual function

    // Downcasting: Base* to Derived*
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->functionDerived(); // Calls Derived's specific function
    } else {
        std::cout << "Downcasting failed" << std::endl;
    }

    delete basePtr; // Clean up
    return 0;
}
