#pragma once
#include "OOP_Menu.h"
#include "MinMax_Solve.h"
#include "Proc_Solve.h"
#include "Series_Solve.h"

class Init : protected MenuChepter
{
private:
	MenuChepter Series;
	MenuChepter Proc;
	MenuChepter MinMax;
	Menu MainMenu;
public:

	Init()
	{
		Series.AddMenuItem("������ - 9 � 40", Series9);
		Series.AddMenuItem("������- 18 � 40", Series18);
		Series.AddMenuItem("������- 27 � 40", Series27);
		Series.AddMenuItem("������- 36 � 40", Series36);
		Proc.AddMenuItem("������- 13 � 60", Proc13);
		Proc.AddMenuItem("������- 26 � 60", Proc26);
		Proc.AddMenuItem("������- 39 � 60", Proc36);
		Proc.AddMenuItem("������- 60 � 60", Proc56);
		MinMax.AddMenuItem("������- 7 � 30", MinMax7);
		MinMax.AddMenuItem("������- 14 � 30", MinMax14);
		MinMax.AddMenuItem("������- 21 � 30", MinMax21);
		MinMax.AddMenuItem("������- 30 � 30", MinMax30);
		MainMenu.AddMenuItem("Series", Series);
		MainMenu.AddMenuItem("Proc", Proc);
		MainMenu.AddMenuItem("MinMax", MinMax);
	}

	void Show_Main()
	{
		MainMenu.ShowMenu();
	}
};