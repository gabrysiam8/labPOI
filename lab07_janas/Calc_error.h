#ifndef Calc_error_H
#define Calc_error_H
#include <string>
#include <stdexcept>

// Klasa wyjatku ktora jest rzucana gdy obliczenia sie nie powioda, dziedziczy po klasie std::runtime_error (metoda what).
class Calc_error: public std::runtime_error
{ 
public:

	// Konstruktor czteroargumentowy, wywoluje konstruktor klasy bazowej z argumentem info (informacja o bledzie), zapisuje do zmiennej _err wskaznik na wczesniej zlapany blad.
	// Dwa ostatnie argumenty to plik i linia w ktorym zostal rzucony aktualny blad.
	Calc_error(std::runtime_error* err, const std::string& info, const std::string& file, int line);

	// Metoda getFile zwraca nazwe pliku w ktorym zostal rzucony blad reprezentowany przez obiekt tej klasy.
	const std::string& getFile() const;

	// Metoda getLine zwraca numer linii w ktorej zostal rzucony blad reprezentowany przez obiekt klasy Calc_error.
	int getLine() const;

	// Metoda getErr zwraca wskaznik na wczesniej rzucony blad.
	std::runtime_error* getErr() const;

	// Metoda statyczna handler sluzy do obslugi stosu wyjatkow. Wypisujemy na ekran informacje o kazdym wyjatku rozpoczynajac od tego rzuconego najpozniej.
	// Usuwamy wskaznik na aktualny blad i zapisujemy do niego wyjatek rzucony wczesniej.
	static void handler();

private:

	// Zmienna _err wskazuje na wyjatek rzucony przed wyjatkiem reprezentowanym przez obiekt tej klasy.
	std::runtime_error* _err;

	// Zmienna mowiaca o tym w jakim pliku zostal wyrzucony blad reprezentowany przez obiekt tej klasy.
	std::string _file;
	
	// Zmienna mowiaca o tym w ktorej linii zostal wyrzucony blad reprezentowany przez obiekt tej klasy.
	int _line;
};

#endif
