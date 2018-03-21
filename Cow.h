#ifndef Cow_H
#define Cow_H
#include "Animal.h"
#include <iostream>

class Cow: public Animal
{ 
public: 
	Cow(int age);
	void saySomething() const;
	void print() const;
	~Cow();
private: 
	static std::string _sound; 
};

#endif
