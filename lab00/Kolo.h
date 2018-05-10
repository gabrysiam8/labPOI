#ifndef KOLO_H
#define KOLO_H
#include "Ksztalt.h"

//klasa reprezentujaca kolo, dziedziczy publiczne skladowe klasy Ksztalt
class Kolo: public Ksztalt
{ 
public:
	//konstruktor jednoargumentowy, przypisuje wartosc promieniowi kola
	Kolo(double r);
	//metoda pobierajaca jeden argument - strumien wyjsciowy, zapisuje do niego dane o obiekcie klasy - kole i dlugosci jego promienia
	void wypisz(std::ostream& wyj) const;
	//metoda niepobierajaca zadnych argumentow, zwracajaca wartosc typu double - pole powierzchni kola reprezentowanego przez obiekt klasy
	double polePow() const;
private:
	//zmienna przechowujaca dlugosc promienia kola
	double _r;
};

#endif
