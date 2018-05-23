#ifndef TestObject_H
#define TestObject_H
#include <iostream>

class TestObject
{ 
public:
	TestObject(): _id(0) {}
	TestObject(int id): _id(id) {}
	void Print() const
	{
		std::cout<<"Object with ID="<<_id<<std::endl;
	}
	void Set(int id)
	{
		_id=id;
	}
private:
	int _id; 
};

#endif
