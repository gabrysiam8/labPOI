#ifndef Zoo_H
#define Zoo_H
#include <iostream>
#include "Enclosure.h"

class Zoo
{ 
public: 
	Zoo(std::string city, int size);
	void print() const;
	Animal* insert(int index, Animal* animal);
	Animal* insert(Animal* animal);
	void reorganize(int newSize);
	Animal* remove(int index);
	int numOfAnimals();
	~Zoo();
private: 
	std::string _city;
	int _size;
	Enclosure* _enclosure;
};

#endif
