#include "Skaner.h"

Skaner::Skaner(const Rozdzielczosc& roz): _roz(roz)
{}

std::string Skaner::rozdzielczosc() const
{
	return _roz.print();
}