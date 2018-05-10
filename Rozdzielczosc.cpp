#include "Rozdzielczosc.h"

Rozdzielczosc::Rozdzielczosc(int szer, int wys): _szer(szer), _wys(wys)
{}

std::string Rozdzielczosc::print() const
{
	std::string str=std::to_string(_szer)+"x"+std::to_string(_wys);
	return str;
}