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


int main()
{
	int a[30];
	int n, t = 0,tbc;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		t += a[i];
	}
	tbc = t / n;

	cout << "Trung binh cong cac so nguyen la: " << tbc;

	return 0;
}