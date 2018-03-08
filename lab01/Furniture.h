#ifndef Furniture_H
#define Furniture_H
#include "Product.h"

// Obiekty klasy Furniture reprezentuja meble, dziedzicza publiczne skladowe klasy Product
class Furniture: public Product
{ 
public: 
	// Konstruktor jednoargumentowy, przyjmujacy w argumencie nr ID obiektu, wywoluje konstruktor klasy Product z tym samym argumentem
	Furniture(const unsigned int id);
	// Funkcja SetPrice w argumencie przyjmuje cene mebla reprezentowanego przez obiekt klasy, wywoluje funkcje klasy bazowej o tej samej nazwie
	void SetPrice(const int price);
	// Funkcja wypisujaca na ekran informacje na jakim meblu reprezentowanym przez obiekt klasy siedzisz
	void Sit() const;
	// Funkcja wypisujaca na ekran informacje o meblu reprezentowanym przez obiekt klasy Furniture
	void Print() const;
};

#endif
