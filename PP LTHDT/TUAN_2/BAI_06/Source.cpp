#include"Header.h"

int main()
{
	int a[30];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << Tong(a, n) << endl;
	cout << Max(a, n) << endl;
	cout << Dem(a, n) << endl;
	BubbleSort(a,n);
	Xuat(a, n);
}