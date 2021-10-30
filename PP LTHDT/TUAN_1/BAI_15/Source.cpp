#include<iostream>

using namespace std;

void Nhap(float a[], int& n)
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
		} while (a[i] <= 0);
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void minduong(float a[], int n)
{
	int min = 0, dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[min] || min == 0)
			min = i;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i]==a[min])
		{
			cout << i << " ";
		}
	}
}

int main()
{
	float a[30];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	minduong(a, n);
	return 0;
}