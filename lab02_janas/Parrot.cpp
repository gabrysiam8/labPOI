#include "Parrot.h"

Parrot::Parrot(int age, std::string name): Animal(age), _name(name)
{
	_sound=_name+"!";
	std::cout<<"Parrot: "<<_name<<std::endl;
}

void Parrot::saySomething() const
{
	std::cout<<"Parrot: "<<_name<<". "<<_sound<<std::endl;
}

void Parrot::print() const
{
	std::cout<<"Animal with age "<<getAge()<<", Parrot: "<<_name<<std::endl;
}

Parrot::~Parrot()
{
	std::cout<<"Bye Parrot"<<std::endl;
}