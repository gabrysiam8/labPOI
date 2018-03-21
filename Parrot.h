#ifndef Parrot_H
#define Parrot_H
#include "Animal.h"
#include <iostream>

class Parrot: public Animal
{ 
public: 
	Parrot(int age, std::string name);
	void saySomething() const;
	void print() const;
	~Parrot();
private:
	int _age;
	std::string _name;
	std::string _sound;
};

#endif
