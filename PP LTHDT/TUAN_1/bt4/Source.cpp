#include<iostream>

using namespace std;

bool KTnamNhuan(int nam)
{
	if (((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0))
		return true;
	return false;
}

void Nhap(int& ngay, int& thang, int& nam) 
{
	do {
		cout << "Nhap ngay: ";
		cin >> ngay;
	} while (ngay < 0 || ngay>31);

	do
	{
		cout << "Nhap thang: ";
		cin >> thang;
	} while (thang < 0 || thang>12);
	do
	{
		cout << "Nhap nam: ";
		cin >> nam;
	} while (nam < 0 || ngay == 29 && KTnamNhuan(nam)==false);
}

int KTngaytrongthang(int thang, int nam)
{
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		return 31;
	}
	case 2:
	{
		if (KTnamNhuan(nam))
		{
			return 29;
		}
		return 28;
	}
	default:
		return 30;
	}
}

void Ngaytieptheo(int ngay, int thang, int nam)
{
	int nngay = ngay, nthang = thang, nnam = nam;

	if (nam > 0 && thang > 0 && thang < 13 && ngay>0 && ngay < KTngaytrongthang(thang, nam))
	{
		nngay += 1;
	}

	if (nam > 0 && thang > 0 && thang < 13 && ngay == KTngaytrongthang(thang, nam))
	{
		nngay = 1;
		nthang += 1;
	}

	if (nam > 0 && thang == 12 && ngay == KTngaytrongthang(thang, nam))
	{
		nngay = 1;
		nthang = 1;
		nnam += 1;
	}

	cout << "Ngay tiep theo la: " << nngay << "/" << nthang << "/" << nnam;
}

int main()
{
	int ngay, thang, nam;
	Nhap(ngay, thang, nam);
	Ngaytieptheo(ngay, thang, nam);
}