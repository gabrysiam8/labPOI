#ifndef Punkt_H
#define Punkt_H

// Klasa reprezentujaca punkt na plaszczyznie.
class Punkt
{ 
public:

	// Konstruktor dwuargumentowy, zapisuje wspolrzedne x i y do zmiennych w obiekcie klasy.
	Punkt(int x, int y);

	// Metoda szablonowa z jednym argumentem, jesli arg==0 zwraca wartosc wspolrzednej x, jesli nie zwraca wspolrzedna y.
	template<int arg> int wsp() const;

	// Statyczna metoda szablonowa zwraca minimum z dwoch wartosci, moze to byc typ wbudowany lub obiekt klasy ze zdefiniowanym operatorem <.
	template<typename T> static const T& min(const T& val1, const T& val2);

	// Statyczna metoda szablonowa zwraca maximum z dwoch wartosci, moze to byc typ wbudowany lub obiekt klasy ze zdefiniowanym operatorem <.
	template<typename T> static const T& max(const T& val1, const T& val2);

	// Metoda przeladowujaca operator < aby mozna bylo porownac dwa obiekty klasy Punkt.
	bool operator<(const Punkt& innyPunkt) const;
private:

	// Wspolrzedna x punktu
 	int _x;

 	// Wspolrzedna y punktu
	int _y;
};

template<int arg> int Punkt::wsp() const
{
	if(arg==0)
		return _x;
	else
		return _y;
}

template<typename T> const T& Punkt::min(const T& val1, const T& val2)
{
	return (val1 < val2) ? val1 : val2;
}

template<typename T> const T& Punkt::max(const T& val1, const T& val2)
{
	return (val1 < val2) ? val2 : val1;
}

#endif
