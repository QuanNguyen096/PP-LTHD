#include"Header.h"

int main()
{
	float x, y, z;
	Nhap(x, y, z);
	Xuat(x, y, z);
	cout << "Do lon vector mot chieu: " << TinhDoLonVector(x) << endl;
	cout << "Do lon vector hai chieu: " << TinhDoLonVector(x,y) << endl;
	cout << "Do lon vector ba chieu: " << TinhDoLonVector(x,y,z) << endl;
	return 0;
}