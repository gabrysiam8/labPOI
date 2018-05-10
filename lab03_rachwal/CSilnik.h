#ifndef CSilnik_H
#define CSilnik_H
#include <iostream>

class CSilnik
{ 
public: 
	CSilnik();
	CSilnik(int km, double tdci, std::string paliwo);
	CSilnik(const CSilnik& innySilnik);
private: 
	int _km;
	double _tdci;
	std::string _paliwo;
};

#endif
