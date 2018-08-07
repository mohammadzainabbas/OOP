#include <iostream>
using namespace std;

//Operator Overloading
class OverloadingTest
{
private:
	int count;
public:
	OverloadingTest(int a=0):count(a)
	{}
	void operator++()
	{
		cout<<"Hi, I'm M Zain\n";
	}
	void operator++(int a)
	{
		cout<<"Hi, I'm M Zain\n";
	}
	OverloadingTest operator+(OverloadingTest &a)
	{
		cout<<"Added\n";
		return OverloadingTest(this->count+a.count);
	}
	friend ostream& operator<<(ostream& out,OverloadingTest a);
};
ostream& operator<<(ostream& out,OverloadingTest a)
{
	out<<a.count;
	return out;
}

void main()
{
	OverloadingTest a,b,c;
	a++;
	a++;
	++b;
	c=a+b;
	c++;
	cout<<c;
}