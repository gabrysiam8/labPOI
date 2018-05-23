#ifndef OBSERWOWANY_H
#define OBSERWOWANY_H

class Obserwator;

class Obserwowany
{
public:
	Obserwowany() {_licz=0;};
	void noweDaneNadeszly(int x);
	void dodajObserwatora(Obserwator* obserwator);
private:
	Obserwator* _obserwatorzy[10];
	int _licz;
};

#endif