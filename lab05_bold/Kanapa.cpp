#include "Kanapa.h"

Kanapa::Kanapa(int szer, int wys, int dl, int siedz, int szerSpania): Mebel(szer, wys, dl), Sofa(szer, wys, dl, siedz), Lozko(szer, wys, dl, szerSpania)
{}

void Kanapa::print(std::ostream& out) const
{
	out<<"jako ";
	Mebel::print(out);
	out<<"\njako ";
	Sofa::print(out);
	out<<"jako ";
	Lozko::print(out);
}

Kanapa::~Kanapa()
{
	std::cout<<"~Kanapa"<<std::endl;
}