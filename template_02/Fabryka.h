#ifndef Fabryka_H
#define Fabryka_H
#include "Samochod.h"

class Fabryka
{
public:
	template <typename T> const T& prototyp(const T& obiekt, bool zmiana=true);
	template <typename T> const T& produkuj();
};

template <typename T> const T& Fabryka::prototyp(const T& obiekt, bool zmiana)
{
	static T nowy;
	if(zmiana)
		nowy = obiekt;
	return nowy;
}

template <typename T> const T& Fabryka::produkuj()
{
	return prototyp<T>(T(), false);
}

#endif