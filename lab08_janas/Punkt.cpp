#include "Punkt.h"

Punkt::Punkt(int x, int y): _x(x), _y(y)
{}

bool Punkt::operator<(const Punkt& innyPunkt) const
{
	if(_x != innyPunkt.wsp<0>())
		return (_x < innyPunkt.wsp<0>());
	else
		return (_y < innyPunkt.wsp<1>());
}