#include "Kolo.h"
#define PI 3.1415

Kolo::Kolo(double r): _r(r)
{
}

void Kolo::wypisz(std::ostream& wyj) const
{
	wyj<<"Kolo o promieniu: "<<_r<<std::endl;
}

double Kolo::polePow() const
{
	return (PI*_r*_r);
}