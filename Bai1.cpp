#include<iostream>
using namespace std;
long long gcd(long long a, long long b)
{
	if (a * b != 0)
	{
		if (a > b)
			a %= b;
		else b %= a;
		return gcd(a, b);
	}
	else return(a + b);
}
long long lcd(long long a, long long b)
{
	return a * b / gcd(a, b);
}
int main()
{
	long long a, b;
	do
	{
		cout << "Nhap a: ";
		cin >> a;
		cout << "Nhap b: ";
		cin >> b;
		if (a <= 0 || b <= 0)
			cout << "So nhap vao khong hop le. Nhap lai" << endl;
	} while (a <= 0 || b <= 0);
	cout << gcd(a, b) << '\t' << lcd(a, b);
	return 0;
}