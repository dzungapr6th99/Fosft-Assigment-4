#include<iostream>
#include<string>
using namespace std;
void getInput(int**& a, int**& b, int n)
{
	cout << "Nhap mang a:" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	cout << "Nhap mang b:" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> b[i][j];
		}
}
void add(int** a, int** b, int n)
{
	int** c = a;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			c[i][j] += b[i][j];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
void sub(int** a, int** b, int n)
{
	int** c = a;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			c[i][j] -= b[i][j];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int** a, **b;
	a = new int* [n];
	b = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
		b[i] = new int[n];
	}
	string s;
	while (s!="4")
	{
		cout << "Nhap 1: Nhap mang a va b" << endl;
		cout << "Nhap 2: Cong 2 mang a va b" << endl;
		cout << "Nhap 3: Tru 2 mang a va b" << endl;
		cout << "Nhap 4: Thoat chuong trinh" << endl;
		cin >> s;
		if (s == "1")
			getInput(a, b, n);
		if (s == "2")
			add(a, b, n);
		if (s == "3")
			sub(a, b, n);
	} 
	return 0;
}