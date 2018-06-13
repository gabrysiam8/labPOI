#ifndef Mebel_H
#define Mebel_H
#include <iostream>
#include <fstream>
#include <vector>

class Mebel
{ 
public:

	friend std::istream& operator>>(std::istream& in, Mebel& meb);
	
	Mebel() {}
	
	Mebel(std::string nazwa, int x, int y, int z, std::string info);
	
	void printOn(std::ostream& out) const;

private:
	std::string _nazwa;
	int _x;
	int _y;
	int _z;
	std::string _info;
};

std::ostream& operator<<(std::ostream& out, const Mebel& meb);

std::istream& operator>>(std::istream& in, Mebel& meb);

std::istream& operator>>(std::istream& in, std::vector<Mebel>& meb);

#endif
