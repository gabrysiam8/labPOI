#ifndef OBSERWATOR_H
#define OBSERWATOR_H

class Obserwator
{
public:
	virtual void noweDane(int x) =0;
};

class ObserwatorLicznik: public Obserwator
{
public:
	ObserwatorLicznik();
	void noweDane(int x);
	int suma() const;
private:
	int _suma;
};

class ObserwatorWypisywacz: public Obserwator
{
public:
	void noweDane(int x);
};

#endif