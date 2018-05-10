#include "Punkt.h"

Punkt::Punkt(int x, int y): _x(x), _y(y)
{}

bool Punkt::operator<(const Punkt& a) const
{
	bool flag=true;
	if(a.wsp<0>() < _x)
		flag=false;
	else if(_x == a.wsp<0>())
	{
		if(a.wsp<1>() <= _y)
			flag=false;
	}
	return flag;
}