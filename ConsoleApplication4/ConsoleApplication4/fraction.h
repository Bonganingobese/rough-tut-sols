#ifndef FRACTION_H 
 #define FRACTION_H
 class Fraction
 {
	 private:
		

				int numerator;
			int denominator;
		

		 public:
				 	Fraction(int num = 0, int denom = 1);
				 	~Fraction();
					void setFract(int , int);
				 	Fraction getFract();
			 	Fraction fadd(Fraction add);
				 	Fraction fsubtract(Fraction subtract);
				 	Fraction fmultiply(Fraction multiply);
				 	Fraction fdivide(Fraction divide);
				 	void print();
				

 };
 #endif
