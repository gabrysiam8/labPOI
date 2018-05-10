#ifndef Sofa_H
#define Sofa_H
#include "Mebel.h"

class Sofa: virtual public Mebel
{ 
public: 
	Sofa(int szer, int wys, int dl, int siedz);
	virtual void print(std::ostream& out) const;
	virtual ~Sofa();
private: 
	int _siedz;
};

#endif
