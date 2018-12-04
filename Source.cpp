#include "complex.h"
#include "linklist.h"
#include<iostream>
using namespace std;



int main()
{
	complex c1, c2, c3, c4, c5, c6, c7;
	cout << "Set the values for first complex number" << endl;
	c1.setdata();
	c1.showdata();
	cout << "Set the values for second complex number" << endl;
	c2.setdata();
	c2.showdata();

	cout << "addition of these complex number is thus" << endl;
	c3 = c1 + c2;
	c3.showdata();
	cout << "subtraction of these complex number is thus" << endl;
	c4 = c1 - c2;
	c4.showdata();
	cout << "multiplication of these complex number is thus" << endl;
	c5 = c1*c2;
	c5.showdata();
	cout << "division of these complex number is thus" << endl;
	c6 = c1 / c2;
	c6.showdata();




	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	linklist c;
	cout << endl;
	c7.setdata();
	c7.showdata();
	c.insertatstart(c1);
	c.insertatstart(c2);
	c.insertatstart(c2);


	c.insertposition(2, c7);
	c.showdatca();
	c.deleteposition(2);
	c.showdatca();
	c.getnth(1);


	system("pause");
	return 0;

}

