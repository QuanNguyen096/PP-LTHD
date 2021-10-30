#include<iostream>
using namespace std;

template<class T>
void Hoanvi(T& a, T& b) {
	T tam;
	tam = a;
	a = b;
	b = tam;
}