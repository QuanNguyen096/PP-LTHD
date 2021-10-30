#include<iostream>

using namespace std;

void Nhap(int& n)
{
	cout << "Nhap so :";
	cin >> n;
}

int ss3so(int a, int b, int c)
{
	int min;
	if (a <= b && a <= c)
		min = a;
	if (a >= b && b <= c)
		min = b;
	if (a >= c && b >= c)
		min = c;
	return min;
}

int main()
{
	int a, b, c;

	//Nhap(a,b,c);
	Nhap(a);
	Nhap(b);
	Nhap(c);
	cout<<ss3so(a, b, c);

	return 0;
}