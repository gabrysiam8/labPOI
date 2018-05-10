#ifndef Sheep_H
#define Sheep_H
#include "Animal.h"
#include <iostream>

class Sheep: public Animal
{ 
public: 
	Sheep(int age);
	void saySomething() const;
	void print() const;
	~Sheep();
private: 
	static std::string _sound;
};

#endif
