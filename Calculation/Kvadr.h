#pragma once
#include <iostream>
using namespace std;

class KvUravn {
private:
    double a, b, c, d, x1, x2;

public:
    KvUravn(double a, double b, double c);

    double GetA()const { return a; }
    double GetB()const { return b; }
    double GetC()const { return c; }
    void SetA(double a);
    void SetB(double b);
    void SetC(double c);
    void PrintX();
    void PrintKvUravn()const;
    double CalcD();
};
std::ostream& operator<<(std::ostream& out, const KvUravn& obj);
std::istream& operator>>(std::istream& in, KvUravn& obj);