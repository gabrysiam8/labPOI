#ifndef Page_H
#define Page_H
#include <iostream>
class Page
{ 
public: 
	Page();
	void AddHeader(const std::string header);
	void AddText(const std::string text);
	Page* Copy() const;
	void Print() const;
	std::string GetHeader() const;
	std::string GetText() const;
private:
	std::string _header;
	std::string _text;
};

#endif
