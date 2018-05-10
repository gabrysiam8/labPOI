#include "Logical.h"

bool Logical::eval(const TwoArg& op, bool var_1, bool var_2)
{
	return op.result(var_1, var_2);
}

bool Logical::eval(const NOT& op, bool var)
{
	return op.result(var);
}