#include <iostream>
#include <math.h>

using namespace std;

double evaluate(double a, double b, char operation) { // создаём функцию "расчёта"
   // вводим математические операции
    if (operation == '+') {
        return a + b;
    } else if (operation == '-') {
        return a - b;
    } else if (operation == '*') {
        return a * b;
    } else if (operation == '/') {
        return a / b;
    } else if (operation == '^') {
        return pow(a, b); // возведение a в степень b
    }
}

int main() {
    char operation;
    double a, b; // a и b — вещественные числа
    while (true) {
        cin >> a >> operation >> b;  // вводим 1 число, операцию, второе число
        cout << a << " " << operation << " " << b << " = " << evaluate(a, b, operation) << endl; // вывод результата
    }
}