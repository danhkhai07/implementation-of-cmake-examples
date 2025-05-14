#include <fmt/color.h>
#include <iostream>

int main(){
    fmt::print(bg(fmt::color::steel_blue), "Hello{}！\n", "world");
    std::cin.get();
    return 0;
}