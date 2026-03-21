#include <iostream>

template<typename T>
T add(T a, T b) {
    return a + b;
}

using namespace std;
int main(){
    cout << "Adding integers: " << add<float>(2.5, 3) << endl; // Calls the int version
    cout << "Adding doubles: " << add<int>(2.4, 3.0) << endl; // Calls the double version
    
    
    return 0;
}