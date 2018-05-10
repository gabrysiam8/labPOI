#include "Kwadrat.h"

Kwadrat::Kwadrat(double a): _a(a)
{
}

void Kwadrat::wypisz(std::ostream& wyj) const
{
	wyj<<"Kwadrat o boku: "<<_a<<std::endl;
}

double Kwadrat::polePow() const
{
	return (_a*_a);
}