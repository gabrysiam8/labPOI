#include "Furniture.h"
#include <iostream>

Furniture::Furniture(const unsigned int id): Product(id)
{}

void Furniture::SetPrice(const int price)
{
	Product::SetPrice(price);
}

void Furniture::Sit() const
{
	std::cout<<"You sit down on a chair. Nothing happens."<<std::endl;
}

void Furniture::Print() const
{
	std::cout<<"This is chair with ID="<<Id()<<std::endl;
}