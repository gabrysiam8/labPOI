#include "Trojkat.h"
#include <cmath>

Trojkat::Trojkat(double a, double b, double c): _a(a), _b(b), _c(c)
{
}

void Trojkat::wypisz(std::ostream& wyj) const
{
	wyj<<"Trojkat o bokach: "<<_a<<" "<<_b<<" "<<_c<<std::endl;
}

double Trojkat::polePow() const
{
	double p=(_a+_b+_c)/2;
	return sqrt(p*(p-_a)*(p-_b)*(p-_c)); 
}