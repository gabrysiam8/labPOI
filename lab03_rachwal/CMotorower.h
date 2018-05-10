#ifndef CMotorower_H
#define CMotorower_H
#include "CPojazd.h"

class CMotorower: public CPojazd
{ 
public: 
	CMotorower(const CSilnik& silnik, std::string kolor, double licznik);
};

#endif
