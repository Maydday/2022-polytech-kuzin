#include <iostream>
#include <cassert>

using namespace std;

int gcd(int a, int b) {  // Наибольший общий делитель

    if (a < 0) a *= -1;
    if (b < 0) b *= -1;

    // Решение тут
    if (a < b) swap(a, b);

    if (a == 0 or b == 0) {
        if (b != 0) return b;
        if (a != 0) return a;
    } else {
        while (a % b != 0) {
            a %= b; //деление по модулю первого операнда на значение второго операнда; сохранение результата в объект, указанный первым операндом.
            swap(a, b);
        }
        return b;
    }

}

int main() {
    assert(gcd(0, 5) == 5);
    assert(gcd(9, 0) == 9);
    assert(gcd(48, 64) == 16);
    assert(gcd(-64, 48) == 16);
    assert(gcd(30, 18) == 6);
    assert(gcd(-30, -18) == 6);
    assert(gcd(270, 192) == 6);
    return 0;
}