#include<iostream>
using namespace std;

struct PS
{
	int numerator;
	int denominator;
};

void NhapPS(PS& ps);
void XuatPS(PS ps);
PS Tong(PS A, PS B);
PS Hieu(PS A, PS B);
PS Tich(PS A, PS B);
PS Thuong(PS A, PS B);
PS RutGon(PS X);
void Sosanh(PS A, PS B);