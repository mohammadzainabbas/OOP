#include <iostream>

using namespace std;

class SuperCalculator
{
public:
	SuperCalculator()
	{}
	virtual void Quad(int a, int b, int c)
	{
		double aa= ((-1)*b + sqrt((b*b)-4*(a)*(c)))/(2*a);
		double bb= ((-1)*b - sqrt((b*b)-4*(a)*(c)))/(2*a);
		cout<<"First Root :\t"<<aa<<endl;
		cout<<"Second Root :\t"<<bb<<endl;
	}
private:

};
class SuperCalculator1:public SuperCalculator
{
public:
	virtual void Quad(int a, int b, int c)
	{
		double aa= (b*b)-4*(a)*(c);
		cout<<"Discriment is :\t"<<aa<<endl;
	}

private:

};
class SuperCalculator2:public SuperCalculator
{
public:
	virtual void Quad(int a, int b, int c)
	{
			double aa= (b*b)-4*(a)*(c);
			
			if (aa>0)
			{
				cout<<"Two real and distinct roots\n";
			}
			else if(aa==0)
			{
				cout<<"Two real and equal roots\n";
			}
			else if(aa<0)
			{
				cout<<"Two complex roots\n";
			}
	}

private:

};

void main()
{
	int a,b,c;
	cout<<"Enter coefficients\n";
	cout<<"Enter 'a' :\t";
	cin>>a;
	cout<<"Enter 'b' :\t";
	cin>>b;
	cout<<"Enter 'c' :\t";
	cin>>c;

	SuperCalculator *aa = new SuperCalculator();
	aa->Quad(a,b,c);

	aa=new SuperCalculator1();
	aa->Quad(a,b,c);

	aa=new SuperCalculator2();
	aa->Quad(a,b,c);
}