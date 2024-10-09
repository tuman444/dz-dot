#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void Kalk(string n, int a)
{
	cout << n << " " << a << endl;
}
int Summa(int a, int b)
{
	return a + b;
}
int Vichitanie(int x, int y)
{
	return x - y;
}
int Delenie(int c, int v)
{
	return c / v;
}
int Umnojenie(int z, int w)
{
	return z * w;
}
int main()
{
	Kalk("Summa = ", Summa(25, -44));
	Kalk("Vichitanie = ", Vichitanie(15, 20));
	Kalk("Delenie = ", Delenie(50, 10));
	Kalk("Umnojenie = ", Umnojenie(10, 10));
}