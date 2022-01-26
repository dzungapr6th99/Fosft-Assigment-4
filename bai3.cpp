#include <iostream>
#include <math.h>
#include<string>
using namespace std;

unsigned int sum(unsigned int n)
{
	unsigned int n1 = n;
	unsigned int sum = 0;
	while (n1 != 0)
	{
		sum += n1 % 10;
		n1 /=  10;
	}
	return sum;
}
unsigned int reverse(unsigned int n)
{
	unsigned int n1 = n, reverse = 0;
	while (n1 != 0) 
	{
		reverse *= 10;
		reverse += n1 % 10;
		n1 /= 10;
	}
	return reverse;
}
bool isPrime(unsigned n)
{
	int i = 2;
	while (n % i != 0 && i <= sqrt(n))
		i++;
	return i >= sqrt(n);
}
void factor(unsigned int n)
{


	unsigned int n1 = n;
	int i = 2;
	if (isPrime(n)) cout << n;
	while (!isPrime(n1) && n1 != 1)
	{
		int count = 0;
		while (n1 % i == 0)
		{
			n1 /= i;
				count++;
		}
		if (count > 1)
			cout << i << "^" << count;
		else cout << i;
		if (!isPrime(n1))
			cout << "*";
		i++;
		}
	if (n1 != 1&& i > 2)cout << "*" << n1;
}
bool isPerfect(unsigned int n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0) sum += i;
	return sum == n;
}
int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong cac chu so cua n la: " << sum(n) << endl;
	cout << "So co chu so nguoc voi n: " << reverse(n) << endl;
	if (isPrime(n)) cout << "n la so nguyen to" << endl;
	else cout << "n khong la so nguyen to" << endl;
	if (isPerfect(n)) cout << "n la so hoan hao" << endl;
	else cout << "n khong la so hoan hao" << endl;
	cout << "Phan tich n thanh thua so nguyen to: ";
	factor(n);
	return 0;
}