#include "Calc_error.h"
#include <iostream>

Calc_error::Calc_error(std::runtime_error* err, const std::string& info, const std::string& file, int line): std::runtime_error(info), _err(err), _file(file), _line(line)
{}

const std::string& Calc_error::getFile() const
{
	return _file;
}

int Calc_error::getLine() const
{
	return _line;
}

std::runtime_error* Calc_error::getErr() const
{
	return _err;
}

void Calc_error::handler()
{
	try
	{
		throw;
	}
	catch(std::runtime_error* err)
	{
		std::cout<<" Zlapano wyjatek:"<<std::endl;
		while(err)
		{
			std::cout<<" -- z powodu: "<<err->what();
			Calc_error* calcPtr=dynamic_cast<Calc_error*>(err);
			if(calcPtr)
			{
				std::cout<<", [plik = "<<calcPtr->getFile()<<", linia = "<<calcPtr->getLine()<<"]";
			}
			std::cout<<std::endl;
			delete err;
			if(calcPtr)
				err=calcPtr->getErr();
			else
				err=0;
		}
	}
}