#include<iostream>
using namespace std;

class PS {
private:
	int tu, mau;
public:
	void Nhap();
	void Xuat();
	PS Tong(PS ps1, PS ps2);
	PS Hieu(PS ps1, PS ps2);
	PS Tich(PS ps1, PS ps2);
	PS Thuong(PS ps1, PS ps2);
	PS RutGon(PS& ps);
	void SoSanh(PS ps1, PS ps2);
};