#include "fraction.h"
#include <iostream>
using namespace std;

int main()
{


	Fraction f1, f2, f3, f4, f5, f6, p;
	int a, b, c, d;
	cout << "The answer displayed will be the sum, difference, product and the division.\n " << endl;
	cout << "enter first fraction:" << endl;
	cin >> a >> b;
	cout << "enter second fraction:" << endl;
	cin >> c >> d;
	p.setFract(a, b);
	f1 = p.getFract();
	p.setFract(c, d);
	f2 = p.getFract();
	f3 = f1.fadd(f2); //Adds the two fractions;   
	f3.print();
	f4 = f1.fsubtract(f2); //Subtracts the two fractions  
	f4.print();
	f5 = f1.fmultiply(f2); //Multiplies the two fractions   
	f5.print();
	f6 = f1.fdivide(f2); //Divides the two fractions  
	f6.print();
	return 0;
}

Fraction::~Fraction()
{

}

Fraction::Fraction(int a,int b)
{
	setFract(a,b);
}
void Fraction::setFract(int a, int b)
{
	if (b != 0)
	{
		denominator = b;
		numerator = a;
	}
	else
	{
		cout << "division by zero aint allowed" << endl;
		exit(1);
	}
}


Fraction Fraction::getFract()
{
	Fraction f;
	f.denominator = denominator;
	f.numerator = numerator;

	return  f;
}
Fraction Fraction::fadd(Fraction add)
{
	Fraction f;
	f.numerator = numerator * add.denominator + add.numerator * denominator;
	f.denominator = denominator * add.denominator;
	return f;


}
Fraction Fraction::fsubtract(Fraction subtract)
{
	Fraction f;
	f.numerator = numerator * subtract.denominator - subtract.numerator * denominator;
	f.denominator = denominator * subtract.denominator;
	return f;


}
Fraction Fraction::fmultiply(Fraction multiply)
{
	Fraction f;
	f.numerator = numerator * multiply.numerator;
	f.denominator = denominator * multiply.denominator;
	return f;
}
Fraction Fraction::fdivide(Fraction divide)
{
	Fraction f;
	f.numerator = numerator * divide.denominator;
	f.denominator = denominator * divide.numerator;
	return f;
}
void Fraction::print()
{
	
	
		cout << "The answer is:" << numerator << " / " << denominator << endl;
	

		
}




