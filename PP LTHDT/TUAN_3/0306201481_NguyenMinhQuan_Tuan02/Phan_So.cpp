#include"Header.h"

void PS::Nhap() {
	cout << "Nhap tu so: "; cin >> this->tu;
	do
	{
		cout << "Nhap mau so: "; cin >>this->mau;
	} while (mau < 1);
}

void PS::Xuat() {
	cout << tu << "/" << mau;
}

PS PS::Tong(PS ps1, PS ps2) {
	PS ps;
	int tuso, mauso;

	tuso = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
	mauso = ps1.mau * ps2.mau;
	
	ps.tu = tuso;
	ps.mau = mauso;
	RutGon(ps);
	return ps;
}

PS PS::Hieu(PS ps1, PS ps2) {
	PS ps;
	int tuso, mauso;

	tuso = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	mauso = ps1.mau * ps2.mau;

	ps.tu = tuso;
	ps.mau = mauso;
	RutGon(ps);
	return ps;
}

PS PS::Tich(PS ps1, PS ps2) {
	PS ps;
	int tuso, mauso;

	tuso = ps1.tu * ps2.tu;
	mauso = ps1.mau * ps2.mau;

	ps.tu = tuso;
	ps.mau = mauso;
	RutGon(ps);
	return ps;
}

PS PS::Thuong(PS ps1, PS ps2) {
	PS ps;
	int tuso, mauso;

	tuso = ps1.tu * ps2.mau;
	mauso = ps1.mau * ps2.tu;

	ps.tu = tuso;
	ps.mau = mauso;
	RutGon(ps);
	return ps;
}

PS PS::RutGon(PS& ps)
{
	int a, b;
	a = abs(ps.tu);
	b = abs(ps.mau);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	ps.tu = ps.tu / a;
	ps.mau = ps.mau / b;
	return ps;
}

void PS::SoSanh(PS ps1, PS ps2)
{
	PS j, k;
	j.tu = ps1.tu * ps2.mau;
	j.mau = ps1.mau * ps2.mau;

	k.tu = ps1.mau * ps2.tu;
	k.mau = ps1.mau * ps2.mau;

	if (j.tu < k.tu)
		cout << ps1.tu << "/" << ps1.mau << " < " << ps2.tu << "/" << ps2.mau;
	else
		cout << ps1.tu << "/" << ps1.mau << " > " << ps2.tu << "/" << ps2.mau;
}