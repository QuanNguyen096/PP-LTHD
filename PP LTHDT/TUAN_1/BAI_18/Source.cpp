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
	cout << endl;
}

int main()
{
	int a[30];
	int n, dem = 0;
	Nhap(a, n);
	Xuat(a, n);

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 10 == 5)
			dem++;
	}
	cout << "Gia tri co chu so tan cung = 5 la: " << dem << endl;

	return 0;
}