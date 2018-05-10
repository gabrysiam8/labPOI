#include "Drukarka.h"

Drukarka::Drukarka(const Rozdzielczosc& roz): _roz(roz)
{}

std::string Drukarka::rozdzielczosc() const
{ 
	return _roz.print();

}