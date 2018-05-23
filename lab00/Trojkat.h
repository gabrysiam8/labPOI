#ifndef TROJKAT_H
#define TROJKAT_H
#include "Ksztalt.h"

//klasa reprezentujaca trojkat, dziedziczy publiczne skladowe klasy Ksztalt
class Trojkat: public Ksztalt
{ 
public:
	//konstruktor trojargumentowy, przypisuje wartosci kolejnym bokom torjkata
	Trojkat(double a, double b, double c);
	//metoda pobierajaca jeden argument - strumien wyjsciowy, zapisuje do niego dane o obiekcie klasy - trojkacie i dlugosci jego bokow
	void wypisz(std::ostream& wyj) const;
	//metoda niepobierajaca zadnych argumentow, zwracajaca wartosc typu double - pole powierzchni trojkata reprezentowanego przez obiekt klasy
	double polePow() const;
private:
	//zmienne przechowujace dlugosci bokow trojkata
	double _a;
	double _b;
	double _c;
};

#endif
