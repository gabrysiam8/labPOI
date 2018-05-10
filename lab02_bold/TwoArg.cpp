#include "TwoArg.h"

bool AND::result(bool var_1, bool var_2) const
{
	bool res=false;
	if(var_1 && var_2)
		res=true;
	return res;
}

bool OR::result(bool var_1, bool var_2) const
{
	bool res=false;
	if(var_1 || var_2)
		res=true;
	return res;
}