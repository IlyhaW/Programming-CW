
#pragma once
#include <iostream>
#include "NOD.h"
using namespace std;


class NOK {
private:
    int a, b;

public:
    NOK(int a, int b);

    int GetA()const { return a; }
    int GetB()const { return b; }
    void SetA(int a);
    void SetB(int b);
    void PrintNOK();
    int CalcNOK(int a, int b);
};
std::ostream& operator<<(std::ostream& out, const NOK& obj);
std::istream& operator>>(std::istream& in, NOK& obj);