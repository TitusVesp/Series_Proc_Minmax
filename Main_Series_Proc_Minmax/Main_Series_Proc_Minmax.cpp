// Main_Series_Proc_Minmax.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Initialization.h"
#include "Menu.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	while (1)
	{
		int key = menu();
		Init Zadacha;

		switch (key)
		{
		case 1:
			Zadacha.Show_Series();
			break;
		case 2:
			Zadacha.Show_Proc();
			break;
		case 3:
			Zadacha.Show_MinMax();
			break;
		case 0: return 0;
		}
	}
}

