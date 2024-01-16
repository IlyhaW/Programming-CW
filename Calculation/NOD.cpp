#include <iostream>
#include <math.h>
#include "NOD.h"
using namespace std;

NOD::NOD(int a, int b)
{
    SetA(a);
    SetB(b);
}


void NOD::SetA(int a)
{
    if (a == 0) {
        cout << "Ошибка! Число не должно быть = 0." << endl;
        exit(0);
    }
    this->a = a;
}

void NOD::SetB(int b)
{
    if (b == 0) {
        cout << "Ошибка! Число не должно быть = 0." << endl;
        exit(0);
    }
    this->b = b;
}
int NOD::CalcNOD(int a, int b)
{
        if (a < b) {
            swap(a, b);
        }
        while (a % b != 0) {
            a = a % b;
            swap(a, b);
        }
        return b;
}

void NOD::PrintNOD()
{
    std::cout << "НОД = "<< CalcNOD(a,b) << endl;
}

std::ostream& operator<<(std::ostream& out, NOD& obj)
{
    obj.PrintNOD();
    return out;
}

std::istream& operator>>(std::istream& in, NOD& obj)
{
    int a = 1, b = 0;
    in >> a >> b;
    obj.SetA(a);
    obj.SetB(b);
    return in;
}
