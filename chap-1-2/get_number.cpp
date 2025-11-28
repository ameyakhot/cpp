#include <iostream>

// single variable can be read in a single line
// int main(){

//     int x{ };
//     std::cout << "Enter a number: ";
//     std::cin >> x;

//     std::cout << "You got " << x << " bullets!";
//     return 0;
// }

// multiple variables can be read in a single line
// int main(){

//     int x, y;
//     std::cout << "Enter two numbers: ";
//     std::cin >>x >> y;
//     std::cout << "You entered " << x << " and " << y << std::endl;
//     return 0;
// }

// multiple variables can be read in a single line
// int main(){

//     int x, y, z;
//     std::cout << "Enter three numbers: ";
//     std::cin >> x >> y >> z;
//     std::cout << "You entered " << x << " and " << y << " and " << z << std::endl;
//     return 0;

// }

//  undefined variables can cause this issue
int main() {

    float x;
    std::cout << x;
    return 0;

}
