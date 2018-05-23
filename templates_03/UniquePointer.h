#ifndef UniquePointer_H
#define UniquePointer_H
#include <iostream>

template <typename T>
class UniquePointer
{
public:
	UniquePointer(T* address): _address(address) {}


	UniquePointer(const UniquePointer& otherPtr) {}


	UniquePointer(UniquePointer& otherPtr);


	~UniquePointer();


	T* GetAddress() const;


	const T& operator*() const;


	operator T*();


	UniquePointer& operator=(UniquePointer& otherPtr);


private:
	T* _address;
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const UniquePointer<T>& obj)
{
	return out<<"[pointing to: "<<obj.GetAddress()<<"]";
}


template <typename T>
UniquePointer<T>::UniquePointer(UniquePointer& otherPtr)
{
	_address=otherPtr._address;
	otherPtr._address=0;
}


template <typename T>
UniquePointer<T>::~UniquePointer()
{
	if(_address)
		delete _address;
}


template <typename T>
T* UniquePointer<T>::GetAddress() const
{
	return _address;
}


template <typename T>
const T& UniquePointer<T>::operator*() const
{
	return *(_address);
}


template <typename T>
UniquePointer<T>::operator T*()
{
	return _address;
}


template <typename T>
UniquePointer<T>& UniquePointer<T>::operator=(UniquePointer& otherPtr)
{
	if(*this!=otherPtr)
	{
		delete _address;
		_address=otherPtr._address;
		otherPtr._address=0;
	}
	return *this;
}

#endif