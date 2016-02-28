
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
		f3 = fone + ftwo;
		p.print();
		f3 = fone - ftwo;
		p.print();
		f3 = fone * ftwo;
		p.print();
		f3 = fone / ftwo;
		p.print();





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

		cout << "addidition: " << reduce(f3).Num << "/" << reduce(f3).Denom << endl;


	}



