#include "Cow.h"

std::string Cow::_sound="Muuu...";

Cow::Cow(int age): Animal(age)
{
	std::cout<<"Cow"<<std::endl;
}

void Cow::saySomething() const
{
	std::cout<<"Cow: "<<_sound<<std::endl;
}

void Cow::print() const
{
	std::cout<<"Animal with age "<<_age<<", Cow"<<std::endl;
}

Cow::~Cow()
{
	std::cout<<"Bye Cow"<<std::endl;
}