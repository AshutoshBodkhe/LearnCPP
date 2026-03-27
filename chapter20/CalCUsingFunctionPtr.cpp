#include <iostream>

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    if(b != 0){
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // Return 0 or handle it as needed
    }
}

using ArithmeticFunctionPtr = int (*)(int, int);

ArithmeticFunctionPtr getOperation(char op){
    switch(op){
        case '+':
            return &add;
        case '-':
            return &subtract;
        case '*':
            return &multiply;
        case '/':
            return &divide;
        default:
            std::cerr << "Error: Invalid operator!" << std::endl;
            return nullptr; // Return nullptr for invalid operator
    }
}


int main(){
    char op;
    int num1, num2;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    ArithmeticFunctionPtr operation = getOperation(op);
    if(operation){
        int result = operation(num1, num2);
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}


