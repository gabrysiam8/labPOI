#ifndef OfficeMultiTool_H
#define OfficeMultiTool_H
#include "Skaner.h"
#include "Drukarka.h"
#include "Ksero.h"

class OfficeMultiTool: public Drukarka, public Skaner, public Ksero
{ 
public: 
	OfficeMultiTool(Rozdzielczosc rozDruk, Rozdzielczosc rozSkan);
	virtual ~OfficeMultiTool() {};
private: 
};

#endif
