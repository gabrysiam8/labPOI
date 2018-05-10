#include "Car.h"
#include <iostream>

Car::Car(const unsigned int id, const int passengers): Vehicle(id)
{
	_passengers=passengers;
}

void Car::SetPrice(const int price)
{
	std::cout<<"The car price will be: "<<price<<std::endl;
	Product::SetPrice(price);
}

void Car::SetMaxSpeed(const int speed)
{
	Vehicle::SetMaxSpeed(speed);
}
void Car::SetPassengersIds(const int* passengersIds, const unsigned int size)
{
	_size=size;
	_passengersIds=new int[size];
	for(unsigned int i=0; i<size; i++)
	{
		_passengersIds[i]=passengersIds[i];
	}
}

void Car::Drive() const
{
	std::cout<<"Driving the car with ID="<<Id()<<std::endl;
}

void Car::Print() const
{
	std::cout<<"Car with ID="<<Id()<<" has "<<_size<<" passengers with following IDs: ";
	for(int i=0; i<_size; i++)
	{
		std::cout<<_passengersIds[i];
		if(i!=_size-1)
			std::cout<<", ";
	}
	std::cout<<".  Max speed of the car is "<<Vehicle::MaxSpeed()<<std::endl;
}

void Car::Move() const 
{
	Drive();
}

Car::~Car()
{
	if(_passengersIds)
		delete [] _passengersIds;
}