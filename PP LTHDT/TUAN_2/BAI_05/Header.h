#include<iostream>
using namespace std;

template<class T>
T Max2(T a, T b, T c)
{
	if (a < b && a < c)
		return a;
	else if (a < b && a > c)
		return c;
	else if (a > b && b < c)
		return b;
}
