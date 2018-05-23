#ifndef Samochod_H
#define Samochod_H
#include <string>

class Samochod
{
public:
	Samochod() {};
	Samochod(std::string marka, std::string model): _marka(marka), _model(model) {}
	void print() const { std::cout<<_marka<<" "<<_model<<std::endl; };
private:
	std::string _marka;
	std::string _model;
};


#endif