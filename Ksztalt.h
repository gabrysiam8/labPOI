#ifndef KSZTALT_H
#define KSZTALT_H
#include <iostream>

// klasa reprezentujaca ksztalt
class Ksztalt
{ 
public:
	//metoda czysto wirtualna pobierajaca jeden argument, powoduje wywolanie metody o tej samej nazwie zaimplementowanej w klasie pochodnej
	virtual void wypisz(std::ostream& wyj) const = 0;
	//metoda czysto wirtualna, powoduje wywolanie metody o tej samej nazwie zaimplementowanej w klasie pochodnej
	virtual double polePow() const = 0;
	//wirtualny destruktor powoduje wywolanie destruktora klasy pochodnej
	virtual ~Ksztalt();
private: 
};

//funkcja przyjmujaca w argumecie obiekt klasy ksztalt, wywoluje na rzecz tego obiektu funkcje wypisz
void wypisz(const Ksztalt& ksz);

#endif
