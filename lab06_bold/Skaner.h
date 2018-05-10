#ifndef Skaner_H
#define Skaner_H
#include "Rozdzielczosc.h"

class Skaner
{ 
public: 
	Skaner(const Rozdzielczosc& roz);
	virtual ~Skaner() {};
	std::string rozdzielczosc() const;
private:
	Rozdzielczosc _roz;
};

#endif
