#ifndef CMercedes_H
#define CMercedes_H
#include "CSamochod.h"

class CMercedes: public CSamochod
{ 
public: 
	CMercedes(const CSilnik& silnik, double licznik);
};

#endif
