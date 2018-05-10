#ifndef CSamochod_H
#define CSamochod_H
#include "CPojazd.h"

class CSamochod: public CPojazd
{ 
public:
	CSamochod(const CSilnik& silnik, std::string kolor, double licznik);
};

#endif
