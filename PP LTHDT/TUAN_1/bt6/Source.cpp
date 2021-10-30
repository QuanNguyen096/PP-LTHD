#include<iostream>

using namespace std;

void NhapN(int &n)
{
	do
	{
		cout << "Nhap N: "; cin >> n;
	} while (n<1);
}

float Tong(int n)
{
	float s = 0;
	for (int i = 0; i < n+1; i++)
	{
		s += 1.0 / (2 * i + 1) - 1.0 / (2 * i + 2);
	}
	return s;
}

int main()
{
	int n;
	float s;
	NhapN(n);
	s = Tong(n);
	cout << "Tong la: " << s;
	return 0;
}