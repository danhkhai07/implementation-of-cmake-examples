#include <iostream>

int main(){
    #ifdef EXAMPLE1
        std::cout << "Flag EXAMPLE1 is on.\n";
    #endif
    #ifdef EXAMPLE2
        std::cout << "Flag EXAMPLE2 is on.";
    #endif
    return 0;
}