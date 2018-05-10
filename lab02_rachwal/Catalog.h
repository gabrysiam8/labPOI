#ifndef Catalog_H
#define Catalog_H
#include "Book.h"

class Catalog
{ 
public: 
	Catalog(const std::string name);
	void AddBook(const Book* book);
	void Print() const;
	~Catalog();
private: 
	std::string _name;
	Book* _books;
	int _size;
};

#endif
