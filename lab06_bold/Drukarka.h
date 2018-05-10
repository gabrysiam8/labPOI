#ifndef Drukarka_H
#define Drukarka_H
#include "Papierozerne.h"
#include "Rozdzielczosc.h"

class Drukarka: virtual public Papierozerne
{ 
public: 
	Drukarka(const Rozdzielczosc& roz);
	std::string rozdzielczosc() const;
	virtual ~Drukarka() {}
private:
	Rozdzielczosc _roz; 
};

#endif
