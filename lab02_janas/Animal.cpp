#include "Animal.h"
#include <iostream>

Animal::Animal()
{

}

Animal::Animal(int age): _age(age)
{
	std::cout<<"Animal with age "<<_age<<", "; 
}

int Animal::getAge() const
{
	return _age;
}
