#include "Catalog.h"

Catalog::Catalog(const std::string name): _name(name), _books(0), _size(0)
{}

void Catalog::AddBook(const Book* book)
{
	_size++;
	Book* temp=new Book[_size];
	for(int i=0; i<_size-1; i++)
	{
		temp[i]=_books[i];
	}
	temp[_size-1]=*book;
	if(_books)
		delete [] _books;
	_books=temp;
}

void Catalog::Print() const
{
	std::cout<<"Catalog::name "<<_name<<std::endl;
	for(int i=0; i<_size; i++)
	{
		std::cout<<"Catalog::book("<<i<<") "<<_books[i].GetTitle()<<std::endl;
	}
}

Catalog::~Catalog()
{
	delete [] _books;
}