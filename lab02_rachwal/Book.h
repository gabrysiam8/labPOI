#ifndef Book_H
#define Book_H
#include "Page.h"
class Book
{ 
public: 
	Book();
	Book(const std::string title);
	void AddPage(const Page* page);
	void Print() const;
	void Copy(const Book* book);
	void AddTitle(const std::string title);
	void AddHeader(const std::string header);
	void AddText(const std::string text);
	std::string GetTitle() const;
	~Book();
private:
	Page* _pages;
	int _size;
	std::string _autor;
	int _iter;
	std::string _title;	
};

#endif
