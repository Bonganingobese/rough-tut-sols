#include "fraction.h"
#include <iostream>
#include <stdexcept>
using namespace std;

fraction fone;
fraction ftwo;
fraction f3;

int main()
{
	int a, b, c, d;
	fraction p;
	cout << "Enter the first fraction: " << endl;
	cin >> a >> b;
	cout << "Enter the second fraction: " << endl;
	cin >> c >> d;
	p.setNumDenom(a, b);
	fone = p.getNumDenom();
	p.setNumDenom(c, d);
	ftwo = p.getNumDenom();
	p.print();




}

fraction::fraction(int f1,int f2)
{
	setNumDenom(f1,f2);
}

fraction::~fraction()
{
}
void fraction::setNumDenom(int f1,int f2)
{
	if (f2!= 0)
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
fraction fraction::add(fraction f1)
{
	fraction results;
	

	results.Num = Num*f1.Denom + f1.Num*Denom;
	results.Denom = Denom*f1.Denom;
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
fraction fraction::subtract(fraction f1)
{
	fraction results;


	results.Num = Num*f1.Denom - f1.Num*Denom;
	results.Denom = Denom*f1.Denom;
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
fraction fraction::multiply(fraction f1)
{
	fraction results;

	results.Num = Num*f1.Num;
	results.Denom = Denom*f1.Denom;
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
fraction fraction::divide(fraction f1)
{
	
	fraction results;

	results.Num = Num*f1.Denom;
	results.Denom = Denom*f1.Num;
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
void fraction::print()
{

	cout <<"addidition: " << fone.add(ftwo).Num << "/" << fone.add(ftwo).Denom<<endl;
	cout <<"subtraction: " << fone.subtract(ftwo).Num << "/" << fone.subtract(ftwo).Denom<<endl;
	cout << "Multiplication: "<<fone.multiply(ftwo).Num << "/" << fone.multiply(ftwo).Denom<<endl;
	cout << "division: "<<fone.divide(ftwo).Num << "/" << fone.divide(ftwo).Denom<<endl;

}


