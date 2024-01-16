#include <iostream>
#include <math.h>
#include "Kvadr.h"
using namespace std;

KvUravn::KvUravn(double a, double b, double c)
{
    SetA(a);
    SetB(b);
    SetC(c);
}

void KvUravn::SetA(double a)
{
    if (a==0) {
        cout << "Это не квадратное уравнение!" << endl;
        exit(0);
    }
    this->a = a;
}

void KvUravn::SetB(double b)
{
    this -> b = b;
}

void KvUravn::SetC(double c)
{
    this -> c = c;
}

void KvUravn::PrintX() 
{
    CalcD();
    if (d > 0 && a != 0)
    {
        std::cout << "X1 = " << (-b + sqrt(d)) / 2 * a << endl;
        std::cout << "X2 = " << (-b - sqrt(d)) / 2 * a << endl;
    }
    else if (d == 0 && a!=0)
        std::cout << "X1 = X2 = " << -b / 2 * a << endl;
    else if (d < 0)
        std::cout << "Данное уравнение не имеет действительных корней." << endl;

}

void KvUravn::PrintKvUravn() const
{
    std::cout <<"("<< a << " * X^2) + " <<"("<< b << " * X) +" <<" ("<<c << ")" << " = 0" << endl;
}

double KvUravn::CalcD()
{
    d = pow(b,2) - 4 * a * c;
    return d;
}

std::ostream& operator<<(std::ostream& out, const KvUravn& obj)
{
    obj.PrintKvUravn();
    return out;
}

std::istream& operator>>(std::istream& in, KvUravn& obj)
{
    int a = 1, b = 0, c = 0;
    in >> a >> b >> c;
    obj.SetA(a);
    obj.SetB(b);
    obj.SetC(c);
    return in;
}
