#include <iostream>
using namespace std;

int main() {
    string name; // вводим переменную string, в котором name - произвольная последовательность символов алфавита
    cout << "Enter your name: ";
    cin >> name; // Считываем полученное знаечение
    cout << "Hello, " << name; // Выводим знаечение переменной name
    return 0;
}