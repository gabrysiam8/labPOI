#include "Zoo.h"

Zoo::Zoo(std::string city, int size): _city(city), _size(size)
{
	_enclosure=new Enclosure[_size];
}

void Zoo::print() const
{
	std::cout<<"Zoo: "<<_city<<std::endl;
	for(int i=0; i<_size; i++)
	{
		std::cout<<"Enclosure "<<i<<" : ";
		_enclosure[i].print();
	}
}

Animal* Zoo::insert(int index, Animal* animal)
{
	if(index<_size)
		_enclosure[index].insert(animal);
	else
		return animal;
	return 0;
}

Animal* Zoo::insert(Animal* animal)
{
	int iter;
	for(iter=0; iter<_size && _enclosure[iter].getAnimal()!=0; iter++);
	if(iter<_size)
		_enclosure[iter].insert(animal);
	else
		return animal;
	return 0;
}

void Zoo::reorganize(int newSize)
{
	if(newSize<numOfAnimals())
	{
		std::cout<<"There is more than "<<newSize<<" animals in zoo, resize imposible"<<std::endl;
	}
	else
	{
		std::cout<<_city<<" zoo: new size = "<<newSize<<std::endl;
		int j=0;
		Enclosure* temp=new Enclosure[newSize];
		for(int i=0; i<_size; i++)
		{
			
			for(;j<_size && _enclosure[j].getAnimal()==0; j++);
				
			if(j<_size)
			{
				std::cout<<"j: "<<j<<std::endl;
				temp[i]=_enclosure[j];
			}
			j++;
		}
		_size=newSize;
		if(_enclosure)
			delete [] _enclosure;
		_enclosure=temp;
	}
}

Animal* Zoo::remove(int index)
{
	if(_enclosure[index].getAnimal())
	{
		Animal* ptr = _enclosure[index].getAnimal();
		_enclosure[index].insert(0);
		return ptr;

	}
	return 0;
}

int Zoo::numOfAnimals()
{
	int num=0;
	for(int i=0; i<_size; i++)
	{
		if(_enclosure[i].getAnimal())
			num++;
	}
	return num;
}

Zoo::~Zoo()
{
	for(int i=0; i<_size; i++)
	{
		if(_enclosure[i].getAnimal())
			delete _enclosure[i].getAnimal();
	}
	delete [] _enclosure;
	std::cout<<_city<<" zoo - closed"<<std::endl;
}