#include"Header.h"

int main()
{
	PS ps1, ps2;
	ps1.Nhap();
	cout << "\n";
	ps2.Nhap();
	cout << "Phan so 1: ";
	ps1.Xuat();
	cout << "\nPhan so 2: ";
	ps2.Xuat();
	cout << "\nTong hai phan so: ";
	ps1.Tong(ps1, ps2).Xuat(); //Xuất Tổng 2 phân số
	cout << "\nHieu hai phan so: ";
	ps1.Hieu(ps1, ps2).Xuat(); //Xuất Hiệu 2 phân số
	cout << "\nTich hai phan so: ";
	ps1.Tich(ps1, ps2).Xuat(); //Xuất Tích 2 phân số
	cout << "\nThuong hai phan so: ";
	ps1.Thuong(ps1, ps2).Xuat(); //Xuất Thương 2 phân số
	cout << "\nSo sanh hai phan so: ";
	ps1.SoSanh(ps1, ps2);
	return 0;
}