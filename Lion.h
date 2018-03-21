#ifndef Lion_H
#define Lion_H
#include "Animal.h"
#include <iostream>

class Lion: public Animal
{ 
public: 
	Lion(int age);
	void saySomething() const;
	void print() const;
	~Lion();
private:
	static std::string _sound;
};

#endif
