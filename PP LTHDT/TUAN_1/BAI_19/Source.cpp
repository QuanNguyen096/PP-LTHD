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

int Dem(int a[],int n)
{
	int dem = 0;
	for (int i = 0; i <= n-2; i++)
	{
		for (int j = i+1; j <= n-1; j++)
		{
			if (a[i] == a[j])
			{
				dem++;
			}
		}
	}
	return dem;
}

int main()
{
	int a[30];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	if (Dem(a, n) == 0)
		cout << "So luong gia tri phan biet: " <<n ;
	else if(Dem(a,n) < n)
		cout << "So luong gia tri phan biet: " << (n) - Dem(a, n);
	else
		cout << "So luong gia tri phan biet: " << 1;
	return 0;
}