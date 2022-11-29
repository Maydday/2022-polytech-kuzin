#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char parameter[20];
    int value;
    char unit[3];
    double memory[2];

    ifstream in("/proc/meminfo", std::ios_base::in);
    for(int i = 0; i < 2; i++)
    {
        in >> parameter >> value >> unit;
        memory[i] = value;
        cout << memory[i] << endl;
    }
    double p = memory[1] / memory[0];
    int percentage = p * 100;
    for (int i = 0; i < percentage; i++)
    {
        cout << (char)64;
    }
    for (int i = 0; i < (100 - percentage); i++)
    {
        cout << (char)46;
    }
    cout << " " << percentage << "%" << endl;
    return 0;

} // В C++ Shell программа работает и выводит 21392
//21392
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 100%