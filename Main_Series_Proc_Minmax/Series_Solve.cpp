#include "Series_Solve.h"

void Series9()
{
	cout << "Series9. ƒано целое число N и набор из N целых чисел. ¬ывести в том же\n\
пор€дке номера всех нечетных чисел из данного набора и количество K таких\n\
чисел" << endl;

	srand(time(NULL));
	int n = 0;	
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			cout << i << " --  Num: " << arr[i] << endl;
		}
	}

	cout << endl;

	delete[]arr;
}

void Series18()
{
	cout << "Series18. ƒано целое число N и набор из N целых чисел, упор€доченный по\n\
возрастанию.ƒанный набор может содержать одинаковые элементы.\n\
¬ывести в том же пор€дке все различные элементы данного набора." << endl;

	srand(time(NULL));
	int n = 0, temp = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[]arr;
}

void Series27()
{
	cout << "ƒано целое число N и набор из N вещественных чисел: A1, A2, Е, AN.\n\
¬ывести следующие числа :" << endl;

	srand(time(NULL));
	int n = 0;
	double temp = 1;
	cout << "Input N: " << endl;
	cin >> n;

	double* arr = new double[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = static_cast<double>(rand() % 901 + 100) / 100.0;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		temp = 1;
		for (int j = 0; j <= i; j++)
		{
			temp *= arr[i];
			if (i == j) cout << arr[i] << " to " << j + 1 << " = " << temp << endl;
		}
	}
	cout << endl;
	delete[]arr;
}

void Series36()
{
	cout << "Series36. ƒано целое число K, а также K наборов ненулевых целых чисел.\n\
 аждый набор содержит не менее двух элементов, признаком его завершени€\n\
€вл€етс€ число 0. Ќайти количество наборов, элементы которых возрастают. " << endl;

	srand(time(NULL));
	int n = 0, temp = 1, count = 0;
	cout << "Input N: " << endl;
	cin >> n;

	double** arr = new double*[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = new double[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			while (j < 2)
			{
				arr[i][j] = rand() % 10;
				if (arr[i][j] != 0) break;
			}
			if (j > 1) arr[i][j] = rand() % 10;
			if ((rand() % 10) >= 8 && j > 2)
			{
				arr[i][j] = 0;
				break;
			}
			if (j == n - 1) arr[i][j] = 0;
		}
	}
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		flag = false;
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] >= arr[i][j + 1] && arr[i][j + 1] != 0) flag = true;
			if (arr[i][j] == 0) break;
			if (flag) break;
		}
		if (!flag)
		{
			count++;
			for (int j = 0; j < n; j++)
			{
				cout << arr[i][j] << " ";
				if (arr[i][j + 1] == 0) break;
			}
			cout << endl;
		}
	}
	cout << endl;

	cout << count << endl;
	for (int i = 0; i < n; i++)
	{
		delete[]arr[i];
	}

	delete[]arr;
}
