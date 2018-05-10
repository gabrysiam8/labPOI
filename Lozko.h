#ifndef Lozko_H
#define Lozko_H
#include "Mebel.h"

class Lozko: virtual public Mebel
{ 
public: 
	Lozko(int szer, int wys, int dl, int szerSpania);
	virtual void print(std::ostream& out) const;
	~Lozko();
private: 
	int _szerSpania;
};

#endif
