#ifndef Map_H
#define Map_H

template<typename T1, typename T2>
class Map
{
public:

	Map(): _key(0), _val(0), _size(0) {}


	void insert(T1 key, T2 val)
	{
		_size++;
		T1* newKey = new T1[_size];
		T2* newVal = new T2[_size];
		for(int i=0; i<_size-1; i++)
		{
			newKey[i]=_key[i];
			newVal[i]=_val[i];
		}
		newKey[_size-1]=key;
		newVal[_size-1]=val;
		if(_size-1)
		{
			delete [] _key;
			delete [] _val;
		}
		_key=newKey;
		_val=newVal;
	}


	void print(std::string text) const
	{
		for(int i=0; i<_size; i++)
		{
			std::cout<<text<<" k: "<<_key[i]<<" v: "<<_val[i]<<std::endl;
		}
	}


	T2& operator[](T1 key)
	{
		for(int i=0; i<_size; i++)
		{
			if(_key[i]==key)
				return _val[i];
		}
		insert(key, T2());
		return _val[_size-1];
	}


	const T2& operator[](T1 key) const
	{
		for(int i=0; i<_size; i++)
		{
			if(_key[i]==key)
				return _val[i];
		}
		throw std::invalid_argument("Klucz nieodpowiedni");
	}


	bool contains(T1 key) const
	{
		for(int i=0; i<_size; i++)
		{
			if(_key[i]==key)
				return true;
		}
		return false;
	}


	~Map()
	{
		if(_size)
		{
			delete [] _key;
			delete [] _val;
		}
	}
private:
	T1* _key;
	T2* _val;
	int _size;
};


#endif