#include "Mebel.h"

Mebel::Mebel(int szer, int wys, int dl): _szer(szer), _wys(wys), _dl(dl)
{}

void Mebel::print(std::ostream& out) const
{
	out<<"Mebel: sz:"<<_szer<<" wys:"<<_wys<<" dl:"<<_dl;
}

Mebel::~Mebel()
{
	std::cout<<"~Mebel"<<std::endl;
}

std::ostream& operator<<(std::ostream& out, const Mebel& meb)
{
	meb.print(out);
	return out;
}