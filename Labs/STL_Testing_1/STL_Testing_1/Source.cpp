#include <iostream>
#include <queue>
#include <cassert>

//using namespace std;

//Max number

int maximum(int a,int b)
{
	return (a>b)?a:b;
}


//Using templates

template <typename Type>					//or template <class Type>

Type max(Type a, Type b)
{
	Type c = (a>b)?a:b;
	return c;
}
template <typename type>
type Average (type b[], int size)
{
	type a;
	for (int i=0;i<size;i++)
	{
		type a+= b[i];
	}
	type c=a;
	return c;
}

	
void main()
{
	/*priority_queue <int> a;

	a.push(2);
	a.push(5);
	a.push(80);
	a.push(1);
	a.push(32);
	a.push(21);


	cout<<"Size is :\t"<<a.size()<<endl;

	cout<<"Top is :\t"<<a.top()<<endl;

	cout<<"\n\nMy Queue is :\n";

	while (!a.empty())
	{
		cout<<a.top()<<endl;
		a.pop();
	}*/
	/*double s=89.268,hit=681547.96;
	double aa=max(s,hit);
	
	int a=5,b=7;
	int c=max(a,b);
	std::cout<<aa<<"\n"<<c<<std::endl;*/

	int a[5];
	for (int i=0;i<5;i++)
	{
		std::cin>>a[i];
	}
	int c=Average(a,5);
	std::cout<<c<<std::endl;


}