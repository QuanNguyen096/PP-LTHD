#include<iostream>
#include<math.h>

using namespace std;

void Nhap(float& a, float& b, float& c) {
	do
	{
		cout << "Nhap a (a != 0)";
		cin >> a;
	} while (a == 0);
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
}


int GiaiPT(float a, float b, float c, float& x1, float& x2) {
	if (a == b && a == c)
		return 0;
	float delta = (b * b) - (4 * a * c);
	if (delta < 0) {
		x1 = x2 = 0.0;
		return 0;
	}
	if (delta == 0) {
		x1 = x2 = -b / (2*a);
		return 1;
	}
	if (delta > 0) {
		delta = sqrt(delta);
		x1 = (-b + delta) / (2 * a);
		x2 = (-b - delta) / (2 * a);
		return 2;
	}
}


int main()
{
	float a, b, c;
	float x1, x2;

	Nhap(a, b, c);
	if (GiaiPT(a, b, c, x1, x2) == 0) {
		cout << "Phuong trinh vo nghiem";
	}
	else if (GiaiPT(a, b, c, x1, x2) == 1) {
		cout << "Phuong trinh co nghiem kep" << endl;
		cout << "x1 = x2 = " << x1;
	}
	else {
		cout << "Phuong trinh co hai nghiem" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	return 0;
}