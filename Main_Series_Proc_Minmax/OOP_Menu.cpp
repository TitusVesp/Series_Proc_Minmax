#include "OOP_Menu.h"

void Menu::GetMenuView()
{
	system("cls");

	for (unsigned int i = 0; i < menuTitle.size() + 20; i++) cout << "=";
		
	cout << endl << "\t" << menuTitle << endl;

	for (unsigned int i = 0; i < menuTitle.size() + 20; i++) cout << "=";
		
	cout << endl;

	int ItemNumber = 1;

	for (vector<MenuItem>::iterator it = menuItems.begin() ; it != menuItems.end(); it++, ItemNumber++)
	{
		cout << ItemNumber << " -> " << it->title << endl;
	}

	cout << endl << "Ведiть 0 для Виходу!" << endl << endl << "Введiть номер елемента: " << endl;

}

void Menu::AddMenuItem(string itemTitle, void (*procLink)())
{
	menuItems.push_back(*(new MenuItem(itemTitle, procLink)));
}

void Menu::ShowMenu()
{
	int itemN = 0;
	
	try
	{
		while (1)
		{
			GetMenuView();

			cin >> itemN;

			if (itemN == 0) return;

			if (itemN > 0 and itemN <= (int)menuItems.size())
			{
				system("cls");
				menuItems[itemN - 1].proc();
				system("pause");
			}
			else throw 0;
		}
	}
	catch(bool exception)
	{
		if (exception)
		{
			cout << "Невiрне значення!" << endl;
		}
		else
		{
			cout << "Помилка введення!" << endl;
		}
	}
	
	
	system("cls");
}
