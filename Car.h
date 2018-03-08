#ifndef Car_H
#define Car_H
#include "Vehicle.h"

class Car: public Vehicle
{ 
public: 
	Car(const unsigned int id, const int passengers);
	void SetPrice(const int price);
	void SetMaxSpeed(const int speed);
	void SetPassengersIds(const int* passengersIds, const unsigned int size);
	void Drive() const;
	void Print() const;
	void Move() const;
	~Car();
private: 
	int _passengers;
	int _size;
	int* _passengersIds;
};

#endif
