#ifndef Logical_H
#define Logical_H
#include "TwoArg.h"
#include "NOT.h"

class Logical
{ 
public: 
	static bool eval(const TwoArg& op, bool var_1, bool var_2);
	static bool eval(const NOT& op, bool var);
};

#endif
