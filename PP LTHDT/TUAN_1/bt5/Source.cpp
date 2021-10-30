#include<iostream>

using namespace std;

void NhapN(int& n)
{
	do
	{
		cout << "Nhap N: "; cin >> n;
	} while (n < 1);
}

float TinhTong(int n)
{
	float s = 0;
	for (int i = 1; i < n+1; i++)
	{
		s = s + 1.0 / i;
	}
	return s;
}

int main()
{
	int n;
	NhapN(n);
	float S = TinhTong(n);
	cout << "Tong S la: " << S << endl;
	return 0;
}