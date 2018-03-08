#include "Airplane.h"
#include <iostream>

Airplane::Airplane(const unsigned int id): Vehicle(id)
{
	SetMaxSpeed(100);
}

void Airplane::SetPrice(const int price)
{
	std::cout<<"The plane price is changed"<<std::endl;
	Product::SetPrice(price);
}

void Airplane::SetWingspan(const int wingspan)
{
	_wingspan=wingspan;
}

void Airplane::Fly() const
{
	std::cout<<"Flying the airplane with ID="<<Id()<<std::endl;
}

void Airplane::Print() const
{
	std::cout<<"A vehicle with ID="<<Id()<<" is an airplane with max speed of "<<MaxSpeed()<<" and wignspan "<<_wingspan<<std::endl;
}

void Airplane::Move() const 
{
	Fly();
}