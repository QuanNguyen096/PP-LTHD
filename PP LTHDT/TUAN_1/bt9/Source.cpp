#include<iostream>

using namespace std;

void Nhap(int& con, int& cha)
{
	do
	{
		cout << "Nhap tuoi con: "; cin >> con;
	} while (con<1);
	do
	{
		cout << "Nhap tuoi cha: "; cin >> cha;
	} while (cha<1 || con * 2>cha);
}

int Tinh(int con, int cha)
{
	int i = 0;
	while (cha % 2 != 0 || cha / 2 != con)
	{
		con++;
		cha++;
		i++;
	}
	return i;;
}

int main()
{
	int con, cha;
	Nhap(con, cha);
	cout<<Tinh(con, cha);
	return 0;
}