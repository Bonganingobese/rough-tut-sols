
#ifndef FRACTION_H
#define FRACTION_H
class fraction
{
	
public:

	fraction(int =0,int =1 );
	~fraction();
	void setNumDenom(int,int);
    fraction getNumDenom();
	fraction add(fraction);
	fraction subtract(fraction);
	fraction multiply(fraction);
    fraction divide(fraction);
	void print();
private:
	int Denom,Num;
};

#endif

