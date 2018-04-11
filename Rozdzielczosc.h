#ifndef Rozdzielczosc_H
#define Rozdzielczosc_H
#include <iostream>

class Rozdzielczosc
{ 
public: 
	Rozdzielczosc(int szer, int wys);
	std::string print() const;
private: 
	int _szer;
	int _wys;
};

#endif
