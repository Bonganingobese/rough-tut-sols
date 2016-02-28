#ifndef FRACTION_H
#define FRACTION_H
class fraction
{

public:

	fraction(int = 0, int = 1);
	~fraction();
	void setNumDenom(int, int);
	fraction getNumDenom();
	fraction reduce(fraction);
	fraction operator + (const fraction&);
	fraction operator - (const fraction&);
	fraction operator*(const fraction&);
	fraction operator / (const fraction&);
	void print();
private:
	int Denom, Num;
};

#endif

