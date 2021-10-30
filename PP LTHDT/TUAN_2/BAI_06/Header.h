#include<iostream>
using namespace std;

template<class T>
void Nhap(T a[], int &n)
{
	do
	{
		cout << "Nhap so luong phan tu: "; cin >> n;
	} while (n<=0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri phan tu thu " << i << ": ";
		cin >> a[i];
	}
}
template<class T>
void Xuat(T a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
template<class T>
T Tong(T a[], int n)
{
	int i = 0;
	T Tong = 0;
	while (i < n)
	{
		Tong = Tong + a[i];
		i++;
	}
	return Tong;
}
template<class T>
T Max(T a[], int n)
{
	int i = 0;
	T max = a[0];
	while (i < n)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		i++;
	}
	return max;
}
template<class T>
T Dem(T a[], int n)
{
	int i = 0;
	T dem = 0;
	while (i < n)
	{
		if (a[i]>0)
		{
			dem++;
		}
		i++;
	}
	return dem;
}

template<class T>
void BubbleSort(T a[],int n)
{
	for (int i = 0; i < n-1; i++)
		for (int j = n - 1; j > i; j--)
			if (j < j-1)
				swap(a[j], a[j - 1]);
}