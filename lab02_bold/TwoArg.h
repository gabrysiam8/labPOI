#ifndef TwoArg_H
#define TwoArg_H

class TwoArg
{ 
public: 
	virtual bool result(bool var_1, bool var_2) const=0;
private: 
};

class AND: public TwoArg
{
public:
	bool result(bool var_1, bool var_2) const;
};

class OR: public TwoArg
{
public:
	bool result(bool var_1, bool var_2) const;
};


#endif
