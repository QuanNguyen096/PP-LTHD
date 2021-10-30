#include"Header.h"

void NhapPS(PS& ps)
{
	cout << "Nhap tu so: "; cin >> ps.numerator;
	cout << "Nhap mau so: "; cin >> ps.denominator;
}

void XuatPS(PS ps)
{
	cout << ps.numerator << "/" << ps.denominator;
}

PS Tong(PS A, PS B)
{
	PS KQ;
	KQ.numerator = A.numerator * B.denominator + B.numerator * A.denominator;
	KQ.denominator = A.denominator * B.denominator;
	return KQ;
}

PS Hieu(PS A, PS B)
{
	PS KQ;
	KQ.numerator = A.numerator * B.denominator - B.numerator * A.denominator;
	KQ.denominator = A.denominator * B.denominator;
	return KQ;
}

PS Tich(PS A, PS B)
{
	PS KQ;
	KQ.numerator = A.numerator * B.numerator;
	KQ.denominator = A.denominator * B.denominator;
	return KQ;
}

PS Thuong(PS A, PS B)
{
	PS KQ;
	KQ.numerator = A.numerator * B.denominator;
	KQ.denominator = A.denominator * B.numerator;
	return KQ;
}

PS RutGon(PS X)
{
	PS KQ;
	int a, b;
	a = abs(X.numerator);
	b = abs(X.denominator);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	KQ.numerator =X.numerator/a;
	KQ.denominator =X.denominator/b;
	return KQ;
}

void Sosanh(PS A, PS B)
{
	PS J,K;
	J.numerator = A.numerator * B.denominator;
	J.denominator = A.denominator * B.denominator;

	K.numerator = A.denominator * B.numerator;
	K.denominator = A.denominator * B.denominator;

	if (J.numerator < K.numerator) {
		cout << A.numerator << "/" << A.denominator << " < " << B.numerator << "/" << B.denominator;
	}
	else
	{
		cout << A.numerator << "/" << A.denominator << " > " << B.numerator << "/" << B.denominator;
	}
}