#ifndef Kanapa_H
#define Kanapa_H
#include "Sofa.h"
#include "Lozko.h"

class Kanapa: public Sofa, public Lozko
{ 
public: 
	Kanapa(int szer, int wys, int dl, int siedz, int szerSpania);
	virtual void print(std::ostream& out) const;
	~Kanapa();
};

#endif
