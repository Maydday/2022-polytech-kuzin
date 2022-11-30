#include <cassert>
#include <cstring>

using namespace std;

unsigned int length(const char* str)
{
    int n = 0;
    const char* c = str;
    for (int i; c[i] != '/0'; i++) n++;
    delete[] c;
    return n;
}

int main()
{
    assert(length("a") == 1);
    assert(length("ab") == 2);
    assert(length("") == 0);
    assert(length("hello world") == 11);
    assert(length(nullptr) == 0);
    return 0;
}
/* вывод :
 * 10 |     for (int i; c[i] != '/0'; i++) n++;
 *    |                    ^~~~                */