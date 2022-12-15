#include "String.h"
#include <iostream>

int main() {
    String foo = "Crimea ";
    String bar = foo + "is ours";
    std::cout << bar << '\n' << bar.get_length();
    return 0;
}