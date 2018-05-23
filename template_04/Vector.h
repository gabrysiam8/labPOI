#ifndef Vector_H
#define Vector_H

class Vector
{ 
public: 
	template <typename T> static void Initialise(int size)
	{
		_size=size;
		_vec=new T[size];
	}


	template <typename T> static void Initialise(int size, T& obj)
	{
		_size=size;
		_vec=new T[size];
		for(int i=0; i<size; i++)
			*(static_cast<T*>(_vec)+i)=obj;
	}


	template <typename T> static T& At(int index)
	{
		return *(static_cast<T*>(_vec)+index);
	}


	template <typename T> static void Reset()
	{
		if(_vec)
			delete [] static_cast<T*>(_vec);
		_size=0;
		_vec=0;
	}


	static const int Size()
	{
		return _size;
	}

private:
	static int _size;
	static void* _vec;
};

#endif
