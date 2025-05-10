#include <iostream>
#include <hello.h>

int main(int argc, char *argv[]){
    std::cout << "This is how to say hello:\n";
    Hello hi;
    hi.print();
    return 0;
}