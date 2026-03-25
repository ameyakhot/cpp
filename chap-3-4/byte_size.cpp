#include <iostream>
#include <climits>

int main()
{
    // assume 4 byte integers
    std::cout << "Size of int: " << sizeof(int) << '\n';
    int x { 2'147'483'647 }; // the maximum value of a 4-byte signed integer
    if (x < INT_MAX){
        x = x + 1;
    } else {
        std::cout << "Error: Integer overflow\n";
    }
    // std::cout << x << '\n';

    // x = x + 1; // integer overflow, undefined behavior
    // std::cout << x << '\n';

    return 0;
}