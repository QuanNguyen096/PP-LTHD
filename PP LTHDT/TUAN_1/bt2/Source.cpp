#include<iostream>

using namespace std;

void Nhap(int &n)
{
	cout << "Nhap so n: ";
	cin >> n;
}

void BubbleSort(int a[])
{
	int i, j;
	for (int i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}

	}
}

int tachso(int n,int a[])
{
	int m = n;
	for (int i = 0; i < 4; i++)
	{
		a[i] = m % 10;
		m = m / 10;
	}
	BubbleSort(a);
	return a[1];
}

int main()
{
	int a[4];
	int n;

	Nhap(n);
	cout << tachso(n,a);
	return 0;
}