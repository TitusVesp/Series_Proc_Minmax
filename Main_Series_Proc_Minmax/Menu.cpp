#include "Menu.h"

HANDLE hConsole, hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void SetColor(int text, int background) // устанавливаем цвет
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int menu()
{
	int key = 1, code = 0;
	while (1)
	{
		system("cls");

		if (key == 0) key = 3;
		if (key == 4) key = 1;

		SetColor(15, 0);

		cout << "Оберiть роздiл: " << endl << endl;
		
		if (key == 1) { SetColor(0, 15); cout << "-> Series" << endl; SetColor(15,0); }
		else  cout << "   Series" << endl;

		if (key == 2) { SetColor(0, 15); cout << "-> Proc" << endl; SetColor(15, 0); }
		else  cout << "   Proc" << endl;

		if (key == 3) { SetColor(0, 15); cout << "-> MinMax" << endl; SetColor(15, 0); }
		else  cout << "   MinMax" << endl;

		{  cout << endl << "Вийти - 0! " << endl; }


		code = _getch();

		if (code == 48) return 0; 

		if (code == 80) key++;
		if (code == 72) key--;
		if (code == 13) { system("cls"); return key; }
	}
}