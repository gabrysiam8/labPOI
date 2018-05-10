#include "Book.h"

Book::Book(): _size(1), _autor("anonym"), _iter(0), _title("dummy")
{
	_pages=new Page[_size];
	_pages[_size-1].AddText("Title page");
}

Book::Book(const std::string title): _size(1), _autor("anonym"), _iter(0), _title(title)
{
	_pages=new Page[_size];
	_pages[_size-1].AddText("Title page");
}

void Book::AddPage(const Page* page)
{
	_size++;
	Page* _temp=new Page[_size];
	for(int i=0; i<_size-1; i++)
	{
		_temp[i].AddHeader(_pages[i].GetHeader());	
		_temp[i].AddText(_pages[i].GetText());	
	}
	_temp[_size-1].AddHeader(page->GetHeader());
	_temp[_size-1].AddText(page->GetText());
	if(_pages)
		delete [] _pages;
	_pages=_temp;
}

void Book::Print() const
{
	std::cout<<"Book::autor "<<_autor<<std::endl;
	for(int i=0; i<_size; i++)
	{
		std::cout<<"Page("<<i<<")::text "<<_pages[i].GetText()<<"(header: "<<_pages[i].GetHeader()<<")"<<std::endl;
	}
	std::cout<<std::endl;
}

void Book::Copy(const Book* book)
{
	int newSize=book->_size;
	for(int i=0; i<_size; i++)
	{
		_pages[i].AddHeader(book->_pages[i].GetHeader());
		_pages[i].AddText(book->_pages[i].GetText());
	}
	for(int i=_size; i<newSize; i++)
	{
		AddPage(&(book->_pages[i]));
	}
	_autor="(copy) "+book->_autor;
}

void Book::AddTitle(const std::string title)
{
	_title=title;
	_pages[0].AddText("Title: " + title);
}

void Book::AddHeader(const std::string header)
{
	for(int i=1; i<_size; i++)
	{
		_pages[i].AddHeader(header);
	}
}

void Book::AddText(const std::string text)
{
	_iter++;
	if(_iter<_size)
		_pages[_iter].AddText(text);
	else
		std::cout<<"[ERROR]:: No enough pages in the book!"<<std::endl;
}

std::string Book::GetTitle() const
{
	return _title;
}

Book::~Book()
{
	// if(_pages)
		// delete [] _pages;
}