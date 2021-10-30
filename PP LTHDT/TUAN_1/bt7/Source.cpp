#include<iostream>
#include<cmath>

using namespace std;

void NhapN(int& n)
{
	do
	{
		cout << "Nhap N: "; cin >> n;
	} while (n<1);
}

float P(int n, int m)
{
	if (n == m)
		return sqrt(n);
	return (float)(sqrt(m + P(n, m + 1)));
}

int main()
{
	int n;
	float s;
	NhapN(n);
	int m = 1;
	s = P(n,m);
	cout << "P = " << s;
	return 0;
}