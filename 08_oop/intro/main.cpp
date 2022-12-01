#include "String.h"
#include <iostream>

int main() {
    String foo = "Hello";
    String bar = foo + " World!";
    std::cout << bar << '\n' << bar.get_length();
    return 0;
}