#ifndef Mebel_H
#define Mebel_H
#include <iostream>

class Mebel
{ 
public: 
	Mebel(int szer, int wys, int dl);
	virtual void print(std::ostream& out) const;
	virtual ~Mebel();
private:
	int _szer;
	int _wys;
	int _dl;
};

std::ostream& operator<<(std::ostream& out, const Mebel& meb);
#endif
