#ifndef Enclosure_H
#define Enclosure_H
#include "Animal.h"

class Enclosure
{ 
public: 
	Enclosure();
	void print() const;
	void insert(Animal* animal);
	Animal* getAnimal();
private: 
	Animal* _animal;
};

#endif
