#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout<<"Base\n";
	}
};

class Derive1:public Base
{
public:
	Derive1()
	{
		cout<<"Derive1\n";
	}
};

class Derive2:public Base
{
public:
	Derive2()
	{
		cout<<"Derive2\n";
	}
};

class Child:public Derive1, public Derive2
{
public:
	Child()
	{
		cout<<"Child\n";
	}
};

void main()
{
	Child a;
}