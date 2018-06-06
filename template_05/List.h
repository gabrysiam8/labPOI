#ifndef List_H
#define List_H
#include "Node.h"

class List
{ 
public: 

	List()
	{
		_head=nullptr;
	}

	template<typename T> void add(T val)
	{
		_head = new TNode<T>(val, _head);	
	}

	Node* head()
	{
		return _head;
	}

	template <typename T> static T get(Node* node)
	{
		const TNode<T>* ptr = dynamic_cast<const TNode<T>*>(node);
		return ptr->get();
	}

	~List()
	{
		while(_head)
		{
			Node* temp=_head->next(); 
			delete _head;
			_head=temp;
		}
	}

private:
	Node* _head;
};

#endif
