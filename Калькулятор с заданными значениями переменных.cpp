// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double sum (double a, double b)
{
	return a + b;
}
double subtraction(double a, double b)
{
	return a - b;
}
double multiplication(double a, double b)
{
	return a*b;
}
double division(double a, double b)
{
	return a / b;
}
double power(double a, double b)
{

	double c = 1;

	if (b>0)

		for (int i = 0; i < b; i++)

			c = c*a;

	if (b<0)

		for (int i = 0; i < (-b); i++)

			c = c / a;

	return c;
}
double squareroot(double a)
{

	double i = 0;

	while (i*i < a)
		i = i + 0.000001;

	return i;
}
double absolut(double a)
{

	return ((a >= 0) ? a : -a);
}

double roundp(double a)
{

	if (a < 0)

		a = -absolut(a);

	return a;
}


int main()
{
	setlocale(LC_ALL, "rus");
	const double a = 2.45, b = 4.23, c = 6;
	cout << "����� ����� a+b= " << roundp(sum(a, b)) << endl;
	cout << "�������� ����� a-b= " << roundp(subtraction(a, b)) << endl;
	cout << "������������ ����� a*b= " << roundp(multiplication(a, b)) << endl;
	cout << "������� ����� a/b= " << roundp(division(a, b)) << endl;
	cout << "���������� � ������� a^b= " << roundp(power(a,b)) << endl;
	if (a >= 0)

		cout << "������ �� a " << squareroot(a) << endl;

	else

		cout << "������ ������� ������" << endl;
	system("pause");

}

