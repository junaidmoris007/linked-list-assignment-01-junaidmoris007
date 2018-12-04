#include<iostream>
#include"complex.h"
using namespace std;
complex :: complex()
{
	double c =0, d =0;
	complex*next = NULL;
}
void complex :: setdata()
{

	cout << "enter real no  ";
	cin >> c;
	cout << "enter imag no  ";
	cin >> d;

}
void complex :: showdata()
{
	cout << c << "+" << d << "i" << endl;
}
complex complex :: operator +(complex v)
{
	complex temp;
	temp.c = c + v.c;
	temp.d = d + v.d;
	return temp;
}
complex  complex :: operator -(complex v)
{
	complex tem;
	tem.c = c - v.c;
	tem.d = d - v.d;
	return tem;
}
complex  complex :: operator *(complex v)
{
	complex tmp;

	tmp.c = (c*v.c) - (d*v.d);
	tmp.d = (c*v.d) + (d*v.d);
	return tmp;
}
complex  complex :: operator /(complex v)
{
	
	try {
		

			complex emp;

			if (((v.c*v.c) + (v.d*v.d)) == 0)
				throw (4);
			else
			{
				emp.c = ((c*v.c) + (d*v.d)) / ((v.c*v.c) + (v.d*v.d));
				emp.d = ((d*v.c) - (c*v.d)) / ((v.c*v.c) + (v.d*v.d));
				return emp;
			} 
		} 

	catch (int e)
	{
		cout << "division  by zero condition" << endl;
	}
}