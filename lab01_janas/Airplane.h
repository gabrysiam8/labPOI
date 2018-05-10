#ifndef Airplane_H
#define Airplane_H
#include "Vehicle.h"

// Obiekty klasy Airplane reprezentuja samoloty, dziedzicza publiczne skladowe klasy Vehicle
class Airplane:public Vehicle
{ 
public: 
	// Konstruktor jednoargumentowy, przyjmuje jako argument ID obiektu, wywoluje konstruktor klasy Vehicle oraz ustawia predkosc maksymalna na 100
	Airplane(const unsigned int id);
	// Funkcja SetPrice  w argumencie przyjmuje cene samolotu reprezentowanego przez obiekt klasy. Wypisuje na ekran informacje ze cena bedzie zmieniona oraz wywoluje funkcje
	// klasy Product z tym argumentem
	void SetPrice(const int price);
	// Funkcja SetWingspan przyjmuje jako argument rozpietosc skrzydel samolotu. Przypisuje ta wartosc polu _wingspan
	void SetWingspan(const int wingspan);
	// Funkcja Fly wypisuje na ekran informacje o tym ze lecimy samolotem z danym ID
	void Fly() const;
	// Funkcja wypisujaca na ekran informacje o obiekcie klasy Airplane (ID, MaxSpeed i Wingspan)
	void Print() const;
	// Funkcja wywolujaca inna funcke tej klasy - Fly()
	void Move() const;
private: 
	int _wingspan;
};

#endif
