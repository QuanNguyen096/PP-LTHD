#include"Header.h"

int main()
{
	PS A;
	PS B;
	NhapPS(A);
	NhapPS(B);
	XuatPS(A);
	cout << endl;
	XuatPS(B);
	cout << endl;
	PS C = Tong(A, B);
	cout << "Tong 2 phan so: ";
	XuatPS(C);
	cout << endl;
	cout << "Hieu 2 phan so: ";
	XuatPS(Hieu(A, B));
	cout << endl;
	cout << "Tich 2 phan so: ";
	XuatPS(Tich(A, B));
	cout << endl;
	cout << "Thuong 2 phan so: ";
	XuatPS(Thuong(A, B));
	cout << endl;
	cout << "Rut gon 2 phan so: ";
	XuatPS(RutGon(A));
	cout << " ";
	XuatPS(RutGon(B));
	cout << endl;
	cout << "So sanh 2 phan so: ";
	Sosanh(A, B);
}