#include<iostream>

using namespace std;

int Fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	return (Fibo(n - 1) + Fibo(n - 2));
}

int main()
{
	int n;
	do
	{
		cout << "Nhap N: "; cin >> n;
	} while (n<0);

	for (int i = 0; i < n + 1; i++)
	{
		int f = Fibo(i);
		cout << f << " ";
	}
}