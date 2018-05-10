#ifndef Punkt_H
#define Punkt_H

class Punkt
{ 
public: 
	Punkt(int x, int y);
	template<int id> int wsp() const
	{
		if(id==0) return _x;
		else if(id==1) return _y; 
	}
	template<typename T> static T min(const T& a, const T& b)
	{
		return (a < b) ? a : b;
	}
	template<typename T> static T max(const T& a, const T& b)
	{
		return (a < b) ? b : a;
	}
	bool operator<(const Punkt& a) const;
private: 
	int _x;
	int _y;
};

#endif
