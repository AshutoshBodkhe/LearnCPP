#include <iostream>

class point{
    private:
        int x;

    public:
        point(int x = 0) : x(x) {} // Constructor with default value

        bool operator==(const point& other) const {
            return (this->x == other.x ? true : false);
        };

        // point operator++(){
        //     this->x++;
        //     return *this;
        // }
};

int main(){
    point p1(5);
    point p2(7);
    point p3(10);

    if(p1 == p2){
        std::cout << "p1 and p2 are equal." << std::endl;
    } else {
        std::cout << "p1 and p2 are not equal." << std::endl;
    }

    if(p1 == p3){
        std::cout << "p1 and p3 are equal." << std::endl;
    } else {
        std::cout << "p1 and p3 are not equal." << std::endl;
    }

}