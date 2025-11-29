#include <iostream>

float add(float x, float y){
    return x + y;
}

float subtract(float x, float y){
    return x - y;
}

float multiply(float x, float y){
    return x * y;
}

float divide(float x, float y){
    return x / y;
}

int main(){
    std::cout << "Welcome to the calculator!";
    std::cout << "Enter two numbers: ";
    float num1, num2;
    std::cin >> num1 >> num2;

    std::cout << "What would you like to do? (add, subtract, multiply, divide): ";
    std::string operation;
    std::cin >> operation;

    float result;
    if (operation == "add") {
        result = add(num1, num2);
    } else if (operation == "subtract") {
        result = subtract(num1, num2);
    } else if (operation == "multiply") {
        result = multiply(num1, num2);
    } else if (operation == "divide") {
        result = divide(num1, num2);
    } else {
        std::cout << "Unknown operation." << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}