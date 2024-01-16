#pragma once
#include <iostream>
#include <complex>
using namespace std;

class Complex {
private:
    double r1,i1,r2,i2;
    int Cmenu,n;

public:
    Complex(double r1, double i1);
    double GetR()const { return r1; }
    double GetI()const { return i1; }
    void SetR(double r1);
    void SetI(double i1);
    void PrintNum();
    double Calculation();
};