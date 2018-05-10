#include "Sheep.h"

std::string Sheep::_sound="Beee...";

Sheep::Sheep(int age): Animal(age)
{
	std::cout<<"Sheep"<<std::endl;
}

void Sheep::saySomething() const
{
	std::cout<<"Sheep: "<<_sound<<std::endl;
}

void Sheep::print() const
{
	std::cout<<"Animal with age "<<_age<<", Sheep"<<std::endl;
}

Sheep::~Sheep()
{
	std::cout<<"Bye Sheep"<<std::endl;
}