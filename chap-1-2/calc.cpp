#include <iostream>
#include <string>
#include "operations.h"

using namespace std;

int main(){
    cout << "Welcome to the calculator!\n";
    cout << "Enter two numbers: \n";
    float num1, num2;
    cin >> num1 >> num2;

    cout << "What would you like to do? (add, subtract, multiply, divide): ";
    string operation;
    cin >> operation;

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
        cout << "Unknown operation." << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}