#include "Proc_Solve.h"

void SortDec3(int a, int b, int c, int count);
bool IsPower5(int k);
unsigned long long Fib(unsigned long long x1, unsigned long long x2, unsigned long long N);
double Leng(int xa, int ya, int xb, int yb);

void Proc13()
{
	cout << "Proc13. ќписать процедуру SortDec3(A, B, C), мен€ющую содержимое пере-\n\
менных A, B, C таким образом, чтобы их значени€ оказались упор€дочен -\n\
ными по убыванию(A, B, C Ч вещественные параметры, €вл€ющиес€ од -\n\
новременно входными и выходными).— помощью этой процедуры упор€ -\n\
дочить по убыванию два данных набора из трех чисел : (A1, B1, C1) и(A2,B2, C2)." << endl;

	cout << "Input A1, B1, C1: " << endl;
	int a1 = 0, b1 = 0, c1 = 0, a2 = 0, b2 = 0, c2 = 0, count = 1;
	cin >> a1 >> b1 >> c1;
	cout << "Input A2, B2, C2: " << endl;
	cin >> a2 >> b2 >> c2;
	SortDec3(a1, b1, c1, count++);
	SortDec3(a2, b2, c2, count++);
	cout << endl;
}

void Proc26()
{
	cout << "Proc26. ќписать функцию IsPower5(K) логического типа, возвращающую True,\n\
если целый параметр K(> 0) €вл€етс€ степенью числа 5, и False в против -\n\
ном случае.— ее помощью найти количество степеней числа 5 в наборе из\n\
10 целых положительных чисел." << endl;

	srand(time(NULL));
	int n = 10, k = 0, count = 0;
	cout << "Input K: " << endl;
	cin >> k;

	if (k < 1)
	{
		cout << "Incorrect value!" << endl;
		return;
	}

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 1000;
	}
	cout << endl;

	bool fl = IsPower5(k);
	if (fl) cout << "Yes, k is true" << endl;
	else cout << "No, k is false" << endl;

	for (int i = 0; i < n; i++)
	{
		bool flag = IsPower5(arr[i]);
		if (flag) count++;
	}

	cout << "Other 10 numers: " << count << "(true of them)" << endl;
	cout << endl;

	delete[]arr;
}

void Proc36()
{
	cout << "Proc36. ќписать функцию Fib(N) целого типа, вычисл€ющую N-й элемент последовательности ‘ибоначи" << endl;

	cout << "Imput N" << endl;
	unsigned long long n = 1;
	cin >> n;

	unsigned long long res = Fib(0, 1, n - 1);

	cout << "Result: " << res << endl;
}

void Proc56()
{
	cout << "Proc56. ќписать функцию Leng(xA, yA, xB, yB) вещественного типа, наход€щую\n\
длину отрезка AB на плоскости по координатам его концов" << endl;

	int xa = 0, xb = 0, ya = 0, yb = 0;

	cout << "Input Xa, Ya, Xb, Yb: " << endl;
	cin >> xa >> ya >> xb >> yb;

	double res = Leng(xa, ya, xb, yb);

	cout << "Result: " << res << endl;
}

void SortDec3(int a, int b, int c, int count)
{
	int max = 0, mid = 0, min = 0;
	a > b ? a > c ? max = a : max = c : b > c ? max = b : max = c;
	a < b ? a < c ? min = a : min = c : b < c ? min = b : min = c;
	a == max ? b == min ? mid = c : mid = b : b == max ? a == min ? mid = c : mid = a : a == min ? mid = b : mid = a;
	cout << "Num " << count << ": " << max << " " << mid << " " << min << " " << endl;
}

bool IsPower5(int k)
{
	double temp = k;
	while (temp > 24)
	{
		temp /= 5;
	}
	if (temp == 5) return true;
	return false;
}

unsigned long long Fib(unsigned long long x1, unsigned long long x2, unsigned long long N)
{

	unsigned long long temp = 1;

	while (N != 0)
	{
		temp = x2;
		x2 = x2 + x1;
		x1 = temp;
		N--;
		return Fib(x1, x2, N);
	}
	return x2;
}

double Leng(int xa, int ya, int xb, int yb)
{
	return sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
}

