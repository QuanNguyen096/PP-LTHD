#include"Header.h"

void Nhap(float& x, float& y, float& z) {
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
	cout << "Nhap z: "; cin >> z;
}

void Xuat(float x, float y, float z) {
	cout << "Vector x : " << x << endl;
	cout << "Vector y : " << y << endl;
	cout << "Vector z : " << z << endl;
}

float TinhDoLonVector(float x) {
	return abs(x);
}

float TinhDoLonVector(float x, float y) {
	return sqrt(x * x + y * y);
}

float TinhDoLonVector(float x, float y, float z) {
	return sqrt(x * x + y * y + z * z);
}