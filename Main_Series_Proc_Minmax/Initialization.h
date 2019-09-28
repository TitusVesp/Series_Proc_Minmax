#pragma once
#include "OOP_Menu.h"
#include "MinMax_Solve.h"
#include "Proc_Solve.h"
#include "Series_Solve.h"

class Init
{
private:
	Menu Series;
	Menu Proc;
	Menu MinMax;
public:

	Init()
	{
		Series.AddMenuItem("Задача - 9 з 40", Series9);
		Series.AddMenuItem("Задача- 18 з 40", Series18);
		Series.AddMenuItem("Задача- 27 з 40", Series27);
		Series.AddMenuItem("Задача- 36 з 40", Series36);
		Proc.AddMenuItem("Задача- 13 з 60", Proc13);
		Proc.AddMenuItem("Задача- 26 з 60", Proc26);
		Proc.AddMenuItem("Задача- 39 з 60", Proc36);
		Proc.AddMenuItem("Задача- 60 з 60", Proc56);
		MinMax.AddMenuItem("Задача- 7 з 30", MinMax7);
		MinMax.AddMenuItem("Задача- 14 з 30", MinMax14);
		MinMax.AddMenuItem("Задача- 21 з 30", MinMax21);
		MinMax.AddMenuItem("Задача- 30 з 30", MinMax30);
	}
	void Show_Series();
	void Show_Proc();
	void Show_MinMax();
};