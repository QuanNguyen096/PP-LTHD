#include<iostream>

using namespace std;


void Nhap(int a[], int& n)
{
	do
	{
		cout << "Nhap so luong phan tu : "; cin >> n;
	} while (n < 1);

	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "Hay nhap gia tri thu " << i << " ";
			cin >> a[i];
		} while (a[i] < 1);
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

bool KTsongto(int n)
{
	if (n == 0 || n == 1)
		return false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int a[30];
	int n, t = 0;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (KTsongto(a[i]) == true)
			t += a[i];
	}

	cout << "Tong cac so nguyen to la: " << t;
	
	return 0;
}