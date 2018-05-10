#include "LicznikPoziomow.h"
#include <iostream>

int LicznikPoziomow::_licznik=0;

LicznikPoziomow::LicznikPoziomow()
{
	_licznik++;
	std::cout<<"Rozpoczynamy poziom numer "<<_licznik<<"."<<std::endl;
}

LicznikPoziomow::~LicznikPoziomow()
{
	std::cout<<"Konczymy poziom numer "<<_licznik<<"."<<std::endl;
	_licznik--;
}