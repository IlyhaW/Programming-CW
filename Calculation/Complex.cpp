#include <iostream>
#include <complex>
#include "Complex.h"
using namespace std;


Complex::Complex(double r1, double i1)
{
    SetR(r1);
    SetI(i1);
}

void Complex::SetR(double r1)
{
    this->r1 = r1;
}

void Complex::SetI(double i1)
{
    this->i1 = i1;
}



void Complex::PrintNum()
{
    std::cout << r1 << " + " << i1 << "i" << endl;

}

double Complex::Calculation()
{
    cout << "Выберите необходимое действие: " << endl;
    cout << "1: +" << endl;
    cout << "2: -" << endl;
    cout << "3: /" << endl;
    cout << "4: *" << endl;
    cout << "5: ^" << endl;
    cout << "6: Выход" << endl;
    cin >> Cmenu;

	complex< double > c1(r1, i1);
	

	switch(Cmenu)
	{
    case 1:
	{	
		cout << "Введите второе комплексное число: " << endl;
		cout << "Действительная часть: " << endl;
		cin >> r2;
		cout << "Мнимая часть: " << endl;
		cin >> i2;
		Complex C2(r2, i2);
		C2.PrintNum();
		complex< double > c2(r2, i2);
		cout << endl;
		cout << "Ответ: " << c1 + c2 << endl;
		break;
	}
	case 2:
	{
		cout << "Введите второе комплексное число: " << endl;
		cout << "Действительная часть: " << endl;
		cin >> r2;
		cout << "Мнимая часть: " << endl;
		cin >> i2;
		Complex C2(r2, i2);
		C2.PrintNum();
		complex< double > c2(r2, i2);
		cout << endl;
		cout << "Ответ: " << c1 - c2 << endl;
		break;
	}
	case 3:
	{
		cout << "Введите второе комплексное число: " << endl;
		cout << "Действительная часть: " << endl;
		cin >> r2;
		cout << "Мнимая часть: " << endl;
		cin >> i2;
		Complex C2(r2, i2);
		C2.PrintNum();
		complex< double > c2(r2, i2);
		cout << endl;
		cout << "Ответ: " << c1 / c2 << endl;
		break;
	}
	case 4:
	{
		cout << "Введите второе комплексное число: " << endl;
		cout << "Действительная часть: " << endl;
		cin >> r2;
		cout << "Мнимая часть: " << endl;
		cin >> i2;
		Complex C2(r2, i2);
		C2.PrintNum();
		complex< double > c2(r2, i2);
		cout << endl;
		cout << "Ответ: " << c1 * c2 << endl;
		break;
	}
	case 5:
	{
		cout << "Введите степень." << endl;
		cin >> n;
		cout << "Ответ: " << pow(c1, n) << endl;
		break;
	}
	case 6:
		exit(0);
		break;
	default:
		cout << "Введите корректный номер!" << endl << endl;
		break;
}
}
