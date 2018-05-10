#include "Enclosure.h"
#include <iostream>

Enclosure::Enclosure()
{
	_animal=0;
}

void Enclosure::print() const
{
	if(_animal==0)
		std::cout<<"empty"<<std::endl;
	else
		_animal->print();
}

void Enclosure::insert(Animal* animal)
{
	_animal=animal;
}

Animal* Enclosure::getAnimal()
{
	return _animal;
}
