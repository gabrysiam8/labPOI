#ifndef Vehicle_H
#define Vehicle_H
#include "Product.h"

class Vehicle: public Product
{ 
public: 
	Vehicle(const unsigned int id);
	void SetPrice(const int price);
	void SetMaxSpeed(const int speed);
	void Print() const;
	int MaxSpeed() const;
	virtual void Move() const;
	virtual ~Vehicle();
private: 
	int _speed;
};

#endif
