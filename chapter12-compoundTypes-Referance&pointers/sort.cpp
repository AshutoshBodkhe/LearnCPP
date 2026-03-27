#include <iostream>

void sort(int& a, int& b){
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
}

int main(){
    int x = 0, y= 0;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y; // Read two integers from the user

    sort(x, y);
    std::cout << "Sorted values: " << x << " " << y << std::endl; // Output: Sorted values: 3 5
    return 0;
}