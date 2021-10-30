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
			cout << "Hay nhap gia tri thu " << i << " ";
			cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<a[i]<<" ";
	}
}

float Vitriduongnhonhat(float a[], int n)
{
	int dem = 0;
	int min;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			dem++;
			min = i;
			break;
		}
	}
	if (dem == 0)
		return -1;

	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[min] && a[i] > 0)
			min = i;
	}
	return min;
}

int main()
{
	float a[50];
	int n;
	int min = 0;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	cout<<"Vi tri duong nho nhat la: "<<Vitriduongnhonhat(a, n);
	return 0;
}