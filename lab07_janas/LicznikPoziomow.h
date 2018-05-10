#ifndef LicznikPoziomow_H
#define LicznikPoziomow_H

// Klasa informujaca nas na ktorym poziomie obliczen jestesmy.
class LicznikPoziomow
{ 
public: 

	// Glosny konstruktor inkrementuje licznik obliczen i wypisuje na ekran informacje, ktory poziom obliczen rozpoczynamy.
	LicznikPoziomow();

	// Glosny destruktor wypisuje na ekran, ktory poziom obliczen konczymy i dekrementuje licznik obliczen.
	~LicznikPoziomow();

private:
	
	// Zmienna statyczna mowiaca na ktorym poziomie obliczen aktualnie jestesmy.
	static int _licznik;
};

#endif
