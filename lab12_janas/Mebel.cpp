#include "Mebel.h"

Mebel::Mebel(std::string nazwa, int x, int y, int z, std::string info): _nazwa(nazwa), _x(x), _y(y), _z(z), _info(info)
{}

void Mebel::printOn(std::ostream& out) const
{
	out<<"<"<<_nazwa<<"> "<<_x<<" "<<_y<<" "<<_z<<" \""<<_info<<"\" ";
}

std::ostream& operator<<(std::ostream& out, const Mebel& meb)
{
	meb.printOn(out);
	return out;
}

std::istream& operator>>(std::istream& in, Mebel& meb)
{
	in>>meb._nazwa;
	if(!in.good())
	{
		return in;
	}
	while(meb._nazwa.at(meb._nazwa.size()-1)!='>')
		{
		std::string nazwa;
		in>>nazwa;
		meb._nazwa+=" "+nazwa;
	}
	in>>meb._x>>meb._y>>meb._z>>meb._info;
	while(meb._info.at(meb._info.size()-1)!='"')
	{
		std::string info;
		in>>info;
		meb._info+=" "+info;
	}
	meb._nazwa=meb._nazwa.substr(1, meb._nazwa.size()-2);
	meb._info=meb._info.substr(1, meb._info.size()-2);

	return in;
}

std::istream& operator>>(std::istream& in, std::vector<Mebel>& vec)
{
	while(in.good())
	{
		Mebel meb;
		in>>meb;
		if(!in.good())
			break;
		vec.push_back(meb);
	}

	return in;
}