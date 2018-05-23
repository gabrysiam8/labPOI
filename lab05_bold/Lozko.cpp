#include "Lozko.h"

Lozko::Lozko(int szer, int wys, int dl, int szerSpania): Mebel(szer, wys, dl), _szerSpania(szerSpania)
{}

void Lozko::print(std::ostream& out) const
{
	out<<"Lozko: ";
	Mebel::print(out);
	out<<" sz.spania: "<<_szerSpania;
}

Lozko::~Lozko()
{
	std::cout<<"~Lozko"<<std::endl;
}