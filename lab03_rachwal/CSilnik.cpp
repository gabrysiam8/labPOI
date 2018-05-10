#include "CSilnik.h"

CSilnik::CSilnik()
{}

CSilnik::CSilnik(int km, double tdci, std::string paliwo): _km(km), _tdci(tdci), _paliwo(paliwo)
{}

CSilnik::CSilnik(const CSilnik& innySilnik)
{
	_km=innySilnik._km;
	_tdci=innySilnik._tdci;
	_paliwo=innySilnik._paliwo;
}