
#include "fraction.h"
#include <iostream>
#include <stdexcept>
using namespace std;



int main()
{
	int a, b, c, d;
	fraction p;
	fraction fone;
fraction ftwo;
fraction f1,f2,f3,f4;
	cout << "Enter the first fraction: " << endl;
	cin >> a >> b;
	cout << "Enter the second fraction: " << endl;
	cin >> c >> d;
	

	
	
	p.setNumDenom(a, b);
	fone = p.getNumDenom();
	p.setNumDenom(c, d);
	ftwo = p.getNumDenom();
	f1 = fone + ftwo;
	f1=p.reduce(f1);
	cout << "addition" << endl;
	f1.print();
	f2 = fone - ftwo;
	f2 = p.reduce(f2);
	cout << "subtraction" << endl;
	f2.print();
	f3 = fone*ftwo;
	f3 = p.reduce(f3);
	cout << "multiplication" << endl;
	f3.print();
	f4 = fone / ftwo;
	f4 = p.reduce(f4);
	cout << "division" << endl;
	f4.print();






}

fraction::fraction(int f1, int f2)
{
	setNumDenom(f1, f2);
}

fraction::~fraction()
{
}
void fraction::setNumDenom(int f1, int f2)
{
	if (f2 != 0)
	{
		Denom = f2;
		Num = f1;
	}
	else
	{
		throw
			invalid_argument("division by zero is not allowed");
	}
}
fraction fraction::getNumDenom()
{
	fraction f;
	f.Num = Num;
	f.Denom = Denom;
	return f;
}
fraction fraction::reduce(fraction f1)
{
	fraction results = f1;
	for (int i = 1; i <= 10; ++i)
	{
		if (results.Num % i == 0 && results.Denom % i == 0)
		{
			results.Num /= i;
			results.Denom /= i;
		}
	}
	return results;
}
fraction fraction::operator + (const fraction& a)
{
	fraction f;
	f.Num = (this->Num)*a.Denom + a.Num*(this->Denom);
	f.Denom = (this->Denom)*a.Denom;
	return f;
}
fraction fraction::operator - (const fraction& a)
{
	fraction f;
	f.Num = (this->Num)*a.Denom - a.Num*(this->Denom);
	f.Denom = (this->Denom)*a.Denom;
	return f;
}
fraction fraction::operator*(const fraction& a)
{
	fraction f;
	f.Num = (this->Num)*a.Num;
	f.Denom = (this->Denom)*a.Denom;
	return f;
}
fraction fraction::operator / (const fraction& a)
{
	fraction f;
	f.Num = (this->Num)*a.Denom;
	f.Denom = (this->Denom)*a.Num;
	return f;
}
void fraction::print()
{

	cout <<  Num << "/" << Denom << endl;


}


