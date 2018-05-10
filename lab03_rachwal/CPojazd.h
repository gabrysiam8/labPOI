#ifndef CPojazd_H
#define CPojazd_H
#include "CSilnik.h"

class CPojazd
{ 
public: 
	CPojazd(const CSilnik& silnik, std::string kolor, double licznik, int kola);
	CPojazd(const CPojazd& innyPojazd);
	friend std::ostream& operator<<(std::ostream& out, const CPojazd& pojazd);
private:
	CSilnik _silnik;
	std::string _kolor;
	double _licznik; 
	int _kola;
};

std::ostream& operator<<(std::ostream& out, const CPojazd& pojazd);
#endif
