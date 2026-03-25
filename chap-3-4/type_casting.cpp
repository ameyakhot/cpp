#include <iostream>

int main(){
    int x = 5;
    double y = static_cast<double>(x);
    std::cout << y << std::endl;

    double pi = 3.14159;
    int z = static_cast<int>(pi);
    std::cout << z << std::endl;

    int a = 5;
    int b = 21;

    double result = static_cast<double>(a) / b;
    std::cout << "Result: " << result << std::endl;

    int C = 'A';
    int ascii = static_cast<int>(C);
    std::cout << "C: " << ascii << std::endl;

    return 0;
}