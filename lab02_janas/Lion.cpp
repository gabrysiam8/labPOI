#include "Lion.h"

std::string Lion::_sound="Aghr!";

Lion::Lion(int age): Animal(age)
{
	std::cout<<"Lion"<<std::endl;
}

void Lion::saySomething() const
{
	std::cout<<"Lion: "<<_sound<<std::endl;
}

void Lion::print() const
{
	std::cout<<"Animal with age "<<_age<<", Lion"<<std::endl;
}

Lion::~Lion()
{
	std::cout<<"Bye Lion"<<std::endl;
}