//Лабораторная работа №2 по дисциплине "Введение в инженерную деятельность" 
#include "stdafx.h"
#include <iostream> 
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
	int a = 0;
	int d = 0;
	int n = 0;
	int ai = 0;
	argc = 4;
	a = atoi(argv[1]);
	d = atoi(argv[2]);
	n = atoi(argv[3]);
	setlocale(LC_ALL, "Russian");
	cout << "\nПрограмма ищет n-ый элемент арифметической прогрессии.\n";
	ai = a + (n - 1)*d;
	cout << n <<"-ый элемент арифметической прогрессии, с первым членом " << a << " и разностью " << d << " равен: " << ai <<"\n";
	return 0;
}