#pragma once
#include <iostream>
using namespace std;


class NOD {
private:
    int a, b;

public:
    NOD(int a, int b);

    int GetA()const { return a; }
    int GetB()const { return b; }
    void SetA(int a);
    void SetB(int b);
    void PrintNOD();
    static int CalcNOD(int a, int b);
};
std::ostream& operator<<(std::ostream& out, const NOD& obj);
std::istream& operator>>(std::istream& in, NOD& obj);