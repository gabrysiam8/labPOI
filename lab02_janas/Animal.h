#ifndef Animal_H
#define Animal_H
class Animal
{ 
public: 
	Animal();
	Animal(int age);
	virtual void saySomething() const=0;
	virtual ~Animal() {};
	virtual void print() const=0;
	int getAge() const;
protected:
	int _age;
};

#endif
