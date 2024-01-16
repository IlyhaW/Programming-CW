#include <iostream>
#include <string>
#include "Kvadr.h"
#include "parser.h"
#include "NOD.h"
#include "NOK.h"
#include "Complex.h"
#include "BigNum.h"

using namespace std;

//Главное меню
void MainMenu() {

	cout << "Выберите действие:" << endl;
	cout << "1 - Вычислить значение выражения" << endl;
	cout << "2 - Найти корни квадратного уравнения" << endl;
	cout << "3 - Найти НОД" << endl;
	cout << "4 - Найти НОК" << endl;
	cout << "5 - Действия с комплексными числами" << endl;
	cout << "6 - Длинная арифметика" << endl;
	cout << "7 - Выход\n" << endl;
	//cin >> MenuNum;
	//return MenuNum;

}

int MenuNum;
//Вызовы пунктов главного меню
void Work() {

	MainMenu();

	//Хранилище перменных
	double a, b, c, r1, i1;
	string num1, num2;
	int m, n;
	parser ob;
	char input[256];
	cin >> MenuNum;

	switch (MenuNum)
	{
	case 1:
	{
		cin.ignore(1, '\n');
		cout << "Формат ввода: sin(60), ln(1), asin(30), 5^2, 2,3." << endl;
		cout << "Введите выражение: ";
		cin.getline(input, 255);
		cout << "Ответ: " << ob.eval_exp(input) << endl;
	}
		Work();
		break;
	case 2:
	{
		cout << "Введите коэффициенты вашего уравнения или любую букву для выхода: " << endl;
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
		cout << "c: ";
		cin >> c;
		KvUravn u1(a, b, c);
		u1.PrintKvUravn();
		u1.PrintX();
		cout << endl;
	}
	Work();
	break;
	case 3:
	{
		cout << "Введите числа для вычисления НОД: " << endl;
		cout << "a: ";
		cin >> m;
		cout << "b: ";
		cin >> n;
		NOD k1(m, n);
		k1.PrintNOD();
		cout << endl;
	}
	Work();
	break;
	case 4:
	{
		cout << "Введите числа для вычисления НОК: " << endl;
		cout << "a: ";
		cin >> m;
		cout << "b: ";
		cin >> n;
		NOK k2(m, n);
		k2.PrintNOK();
		cout << endl;
	}
	Work();
	break;
	case 5:
	{
		cout << "Введите первое комплексное число: " << endl;
		cout << "Действительная часть: " << endl;
		cin >> r1;
		cout << "Мнимая часть: " << endl;
		cin >> i1;
		Complex C1(r1, i1);
		complex <double> c1(r1, i1);
		C1.PrintNum();
		C1.Calculation();
		cout << endl;
	}
	Work();
	break;
	case 6:
	{
		big_integer Num1(num1);
		Num1.BigIntegerMenu();
		cout << endl;
	}
	Work();
	break;
	case 7:
		exit(0);
		break;
	default:
		cout << "Введите корректный номер!" << endl << endl;
		cout << endl;
		Work();
		break;
	}
}
int main()
{
	setlocale(LC_ALL, "ru");//Русский язык
	//MainMenu();
	Work();

	return 0;
}
