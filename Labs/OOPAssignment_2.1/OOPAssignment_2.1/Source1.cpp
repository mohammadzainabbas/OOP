#include <iostream>
using namespace std;

class Parent
{
public:
	Parent()
	{
		cout << "Constructor for Parent Class called" << endl;
	}
	void Display()
	{
		cout << "Display called for Parent Class" << endl;
	}
	~Parent()
	{
		cout << "Destructor for Parent Class called" << endl;
	}
};

class Child : public Parent
{
public:
	Child()
	{
		cout << "Constructor for Child Class called" << endl;
	}
	void Display()
	{
		cout << "Display called for Child Class" << endl;
	}
	~Child()
	{
		cout << "Destructor for Child Class called" << endl;
	}
};

void main()
{
	Child a;
	a.Display();	
}