#include <iostream>
#include <math.h>
#include "NOK.h"
using namespace std;

NOK::NOK(int a, int b)
{
    SetA(a);
    SetB(b);
}


void NOK::SetA(int a)
{
    if (a == 0) {
        cout << "Ошибка! Число не должно быть = 0." << endl;
        exit(0);
    }
    this->a = a;
}

void NOK::SetB(int b)
{
    if (b == 0) {
        cout << "Ошибка! Число не должно быть = 0." << endl;
        exit(0);
    }
    this->b = b;
}
int NOK::CalcNOK(int a, int b)
{
    b = a * b / NOD::CalcNOD(a, b);
    return b;
}

void NOK::PrintNOK()
{
    std::cout << "НОК = " << CalcNOK(a, b) << endl;
}

std::ostream& operator<<(std::ostream& out, NOK& obj)
{
    obj.PrintNOK();
    return out;
}

std::istream& operator>>(std::istream& in, NOK& obj)
{
    int a = 1, b = 0;
    in >> a >> b;
    obj.SetA(a);
    obj.SetB(b);
    return in;
}
