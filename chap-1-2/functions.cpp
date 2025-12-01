#include <iostream>

void do_print(){
    std::cout << " Do Print." << std::endl;
}

// int main(){
//     std::cout << "Starting main()" << std::endl;
//     do_print();
//     std::cout << "Ending main()" << std::endl;
//     return 0;
// }



// int main(){
//    return EXIT_SUCCESS; 
// }

int get_value_from_user(){
    std::cout << "Enter a value: ";
    int value{}; 
    std::cin >> value;
    return value;
}

int main(){
    std::cout << "Hi!" << "\n";
}