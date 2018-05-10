#include "Page.h"

Page::Page(): _header("empty"), _text("empty")
{}

void Page::AddHeader(const std::string header)
{
	_header=header;
}

void Page::AddText(const std::string text)
{
	_text=text;
}

Page* Page::Copy() const
{
	Page* newPage = new Page();
	newPage->AddHeader(_header);
	newPage->AddText(_text);
	return newPage;
}

void Page::Print() const
{
	std::cout<<"Page::header "<<_header<<std::endl;
	std::cout<<"Page::text "<<_text<<std::endl;
		std::cout<<std::endl;
}

std::string Page::GetHeader() const
{
	return _header;
}

std::string Page::GetText() const
{
	return _text;
}
