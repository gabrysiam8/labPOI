#include "CPojazd.h"

CPojazd::CPojazd(const CSilnik& silnik, std::string kolor, double licznik, int kola): _silnik(silnik), _kolor(kolor), _licznik(licznik), _kola(kola)
{}

CPojazd::CPojazd(const CPojazd& innyPojazd)
{
	_silnik=innyPojazd._silnik;
	_kolor=innyPojazd._kolor;
	_licznik=0;
	_kola=innyPojazd._kola;
}

std::ostream& operator<<(std::ostream& out, const CPojazd& pojazd)
{
	out<<std::endl;
	out<<"Liczba kol "<<pojazd._kola<<std::endl;
	out<<"Stan licznika "<<pojazd._licznik<<" [km]"<<std::endl;
	out<<"Kolor "<<pojazd._kolor<<std::endl;
	return out;
}