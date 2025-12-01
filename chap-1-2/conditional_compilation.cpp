#include <iostream>

// #define DEBUG
using namespace std;

int main(){
    int x{10};

    #ifdef DEBUG
    cout << "DEBUG is defined" << endl;
    cout << "x is " << x << endl;
    #endif

    cout << "Normal code always runs" << endl;
    return 0;
}