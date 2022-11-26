#include <iostream>
#include <math.h>

using namespace std;

double evaluate(double a, double b, char operation) {
    if (operation == '+') {
        return a + b;
    } else if (operation == '-') {
        return a - b;
    } else if (operation == '*') {
        return a * b;
    } else if (operation == '/') {
        return a / b;
    } else if (operation == '^') {
        return pow(a, b);
    }
}

int main() {
    char operation;
    double a, b;
    while (true) {
        cin >> a >> operation >> b;
        cout << a << " " << operation << " " << b << " = " << evaluate(a, b, operation) << endl;
    }
}