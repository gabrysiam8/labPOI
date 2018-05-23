#ifndef KWADRAT_H
#define KWADRAT_H
#include "Ksztalt.h"

//klasa reprezentujaca kwadrat, dziedziczy publiczne skladowe klasy Ksztalt
class Kwadrat: public Ksztalt
{ 
public:
	//konstruktor jednoargumentowy przypisuje wartosc boku kwadratu
	Kwadrat(double a);
	//metoda pobierajaca jeden argument - strumien wyjsciowy, zapisuje do niego dane o obiekcie klasy - kwadracie i dlugosci jego boku
	void wypisz(std::ostream& wyj) const;
	//metoda niepobierajaca zadnych argumentow, zwracajaca wartosc typu double - pole powierzchni kwadratu reprezentowanego przez obiekt klasy
	double polePow() const;
private:
	//zmienna przechpowujaca dlugosc boku kwadratu
	double _a;
};

#endif
