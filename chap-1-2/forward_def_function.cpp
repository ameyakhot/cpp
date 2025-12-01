// this is a function prototype. this is also called forward declaration of a function. 
int add(int x, int y);

int main(){
    std::cout << add(1, 2) << std::endl;
    return 0;
}

int add(int x, int y){
    return x + y;
}

// all definitions are declarations. but not all declarations are definitions. 
// what does this mean for us? 
/*
- declarations are used to tell the compiler about the existence of a function
- definitions are used to provide the implementation of a function
*/