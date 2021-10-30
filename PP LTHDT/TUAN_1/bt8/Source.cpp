#include<iostream>
#include<cmath>

using namespace std;

void NhapN(int& n)
{
	do
	{
		cout << "Nhap N: "; cin >> n;
	} while (n < 1);
}

float P(int n)
{
	if (n == 1)
		return 1;
	return (float)(sqrt(n + P(n - 1)));
}

int main()
{
	int n;
	float p;
	NhapN(n);
	p = P(n);
	cout << "P = " << p;
	return 0;
}