#ifndef TNode_H
#define TNode_H
#include <typeinfo>
#include <iostream>

class Node
{
public:
	virtual ~Node() {}

	virtual std::string isType(const std::type_info& info) = 0;

	template<typename T> std::string isType()
	{
		return isType(typeid(T));
	}

	virtual Node* next() = 0;
};


template <typename T>
class TNode: public Node
{
public:
	TNode(T val, Node* next): Node(), _val(val), _next(next) {}

	virtual T get() const 
	{
		return _val;
	}

	virtual std::string isType(const std::type_info& info)
	{
		if(info == typeid(_val))
			return "true";
		return "false";
	}

	virtual Node* next()
	{
		return _next;
	}

private:
	T _val;
	Node* _next;
};




#endif