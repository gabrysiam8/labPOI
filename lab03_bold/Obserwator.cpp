#include "Obserwator.h"
#include <iostream>

ObserwatorLicznik::ObserwatorLicznik(): _suma(0)
{}

void ObserwatorLicznik::noweDane(int x)
{
	_suma+=x;
}

int ObserwatorLicznik::suma() const
{
	return _suma;
}


void ObserwatorWypisywacz::noweDane(int x)
{
	std::cout<<" "<<x;
}
