#include "MinMax_Solve.h"

void MinMax7()
{
	cout << "Minmax7. ƒано целое число N и набор из N целых чисел. Ќайти номера первого\n\
максимального и последнего минимального элемента из данного набора и\n\
вывести их в указанном пор€дке. " << endl;

	srand(time(NULL));
	int n = 0, max = 0, num_max = 0, min = 0, num_min = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		max = min = arr[i];
		num_max = num_min = i;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			num_max = i;
		}

		if (arr[i] < min && num_min < i)
		{
			min = arr[i];
			num_min = i;
		}
	}

	cout << "Max: " << max << " Number: " << num_max << endl;
	cout << "Min: " << min << " Number: " << num_min << endl;
}

void MinMax14()
{
	cout << "Minmax14. ƒано число B (> 0) и набор из дес€ти чисел. ¬ывести минимальный\n\
из тех элементов набора, которые больше B, а также его номер.≈сли чисел,\n\
больших B, в наборе нет, то дважды вывести 0. " << endl;

	srand(time(NULL));
	int n = 10, b = 0, max = 3000000, num_max = 0;
	cout << "Input B: " << endl;
	cin >> b;

	if (b < 0) return;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > b && arr[i] < max)
		{
			max = arr[i];
			num_max = i;
		}
	}

	if (max != 0) cout << "Max: " << max << " Number: " << num_max << endl;
	else cout << "0   0" << endl;
}

void MinMax21()
{
	cout << "Minmax21. ƒано целое число N (> 2) и набор из N чисел Ч значений некоторой\n\
величины, полученных в N опытах.Ќайти среднее значение этой величины.ѕри вычислении среднего\n\
значени€ не учитывать минимальное и максимальное из имеющихс€ в наборе значений." << endl;

	srand(time(NULL));
	int n = 0, max = 0, min = 0;
	double aver = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		min = max = arr[i];
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != max && arr[i] != min)
		{
			aver += arr[i];
		}
	}

	cout << "Result: " << aver / (n - 2) << endl;
}

void MinMax30()
{
	cout << "Minmax30. ƒано целое число N и набор из N целых чисел. Ќайти минимальное\n\
количество подр€д идущих максимальных элементов из данного набора. " << endl;


	srand(time(NULL));
	int n = 0, max = 0, count = 0, count_temp = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (max == arr[i])
		{
			count_temp++;
		}
		else if (max != arr[i])
		{
			if (count_temp > count)
			{
				count = count_temp;
			}
			
			count_temp = 0;
		}
	}

	
	cout << "Max: " << max << " Numbers: " << count << endl << endl;

	 cout << endl;
}
