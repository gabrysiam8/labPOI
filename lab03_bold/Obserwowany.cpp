#include "Obserwowany.h"
#include "Obserwator.h"

void Obserwowany::noweDaneNadeszly(int x)
{
	for(int i=0; i<_licz; i++)
	{
		_obserwatorzy[i]->noweDane(x);
	}
}

void Obserwowany::dodajObserwatora(Obserwator* obserwatorPtr)
{
	if(_licz<10)
	{
		_obserwatorzy[_licz]=obserwatorPtr;
		_licz++;
	}
}