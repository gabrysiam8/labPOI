#ifndef CRomet_H
#define CRomet_H
#include "CMotorower.h"

class CRomet: public CMotorower
{ 
public: 
	CRomet(const CSilnik& silnik, double licznik);
};

#endif
