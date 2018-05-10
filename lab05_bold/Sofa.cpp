#include "Sofa.h"

Sofa::Sofa(int szer, int wys, int dl, int siedz): Mebel(szer, wys, dl), _siedz(siedz)
{}

void Sofa::print(std::ostream& out) const
{
	out<<"Sofa: ";
	Mebel::print(out);
	out<<" siedzisko: "<<_siedz;
}

Sofa::~Sofa()
{
	std::cout<<"~Sofa"<<std::endl;
}