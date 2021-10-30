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
		cout << "Hay nhap gia tri thu " << i << " ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int minle(int a[], int n)
{
	int min, dem = 0;
	for (int  i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			min = a[i];
			dem++;
			break;
		}
	}
	if (dem == 0)
	{
		return -1;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min && a[i] % 2 != 0)
			min = a[i];
	}
	return min;
}

int maxchan(int a[], int n)
{
	int max, dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			max = a[i];
			dem++;
			break;
		}
	}
	if (dem == 0)
	{
		return -3;
	}

	int t = minle(a, n);

	for (int i = 0; i < n; i++)
	{
		if (a[i]>max && a[i] % 2 == 0 && a[i] < t)
		{
			max = a[i];
		}
	}
	if (t == -1)
		return -1;
	else if (t < max)
		return -2;
	return max;
}

int main() 
{
	int a[30];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	if (maxchan(a, n) == -1)
	{
		cout << "Mang khong co so le !!!" << endl;
	}
	else if (maxchan(a, n) == -3)
	{
		cout << "Mang khong co so chan !!!" << endl;
	}
	else if (maxchan(a, n) == -2)
	{
		cout << "Khong co so nao be hon !!!" << endl;
	}
	else
		cout << maxchan(a, n);
	return 0;
}