#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(const unsigned int id): Product(id)
{}

void Vehicle::SetPrice(const int price)
{
	Product::SetPrice(price);
}

void Vehicle::SetMaxSpeed(const int speed)
{
	_speed=speed;
}

void Vehicle::Print() const
{
	std::cout<<"This is a vehicle with max speed of "<<_speed<<std::endl;
}

int Vehicle::MaxSpeed() const
{
	return _speed;
}

void Vehicle::Move() const
{
	std::cout<<"Moving with speed "<<_speed<<std::endl;
}

Vehicle::~Vehicle()
{}