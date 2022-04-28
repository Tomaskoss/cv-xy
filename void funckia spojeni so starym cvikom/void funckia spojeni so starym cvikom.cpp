// void funckia spojeni so starym cvikom.cpp : Defines the entry point for the application.
//

#include "void funckia spojeni so starym cvikom.h"

using namespace std;
void soucet(double a[2], double b[2], double c[2])
{
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
}
void odecet(double a[2], double b[2], double c[2])
{
	c[0] = a[0] - b[0];
	c[1] = a[1] - b[1];
}
void tisk(double c[2])
{
	cout << c[0] << "	" << c[1]<<"j"<<endl;

}
void tisk2(double c[2])
{
	cout << c[0] << "	" << c[1] << "j";

}
void soucin(double a[2], double b[2], double c[2])
{
	double ulozenka;
	ulozenka = c[0];
	c[0] = sqrt(pow(c[1], 2) + pow(ulozenka, 2));
	c[1] = atan(c[1] / c[0]) * (180.0 / 3.141);
}
void znamenko(char x, double a[2], double b[2], double c[2])
{
	if (x == '+')
	{
		soucet(a, b, c);
	}
	if (x == '-')
	{
		odecet(a, b, c);
	}
	
	if (x != '+' && x != '-')
	{
		cout << "zle zadane znamienko" << endl;
		exit(0);
	}
	

}
int main()
{
	double a[2];
	double b[2];
	double c[2];
	cout << "Zadaj komplexne cislo 1: " << endl;
	cin >> a[0] >> a[1];
	cout << "Zadaj komplexne cislo 2: " << endl;
	cin >> b[0] >> b[1];
	cout << " 1.zadane cislo:  " << a[0] << " " << a[1] << "i " << endl;
	cout << " 2.zadane cislo:  " << b[0] << " " << b[1] << "i " << endl;
	cout << "Zvolte operaci + alebo - " << endl;
	char x;
	cin >> x; 
	znamenko(x, a, b, c);
	tisk(c);
	soucin(a, b, c);
	tisk2(c);
	



	return 0;
}
