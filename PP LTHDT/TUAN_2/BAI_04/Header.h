#include<iostream>
using namespace std;

template<class T>
T Max2(T a, T b, T c)
{
	T max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}