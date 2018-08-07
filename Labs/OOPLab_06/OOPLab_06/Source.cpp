#include <iostream>
using namespace std;

//Inheritance
//If assess specifier is:

//public --> public and protected will be inheirted
//public as public and protected as protected

//protected --> public and protected will be inheirted
//public and protected as a protected

//private --> public and protected will be inheirted
//public and protected as private

//Private datamembers/functions don't inheirt directly. They can be assessed via getters and setters


//class Shape
//{
//private:
//	int Length, Width;
//protected:
//	int Area()
//	{
//		return Length*Width;
//	}
//public:
//	Shape(int a=0,int b=0):Length(a),Width(b)
//	{}
//	void Display()
//	{
//		cout<<Area()<<endl;
//	}
//};
//class Rectangle:public Shape
//{
//public:
//	Rectangle(int a=0,int b=0):Shape(a,b)
//	{}
//	void Display()
//	{
//		cout<<Area()<<endl;
//	}
//};
//class Triangle:public Shape
//{
//protected:
//	int Area()
//	{
//		int a= Shape::Area();
//		return 0.5*a;
//	}
//public:
//	Triangle(int a=0,int b=0):Shape(a,b)
//	{}
//	void Display()
//	{
//		cout<<Area()<<endl;
//	}
//};
//class RightAngle:public Triangle
//{
//private:
//	int Side;
//
//protected:
//	int Area()
//	{
//		int a= Triangle::Area();
//		return a*Side;
//	}
//public:
//	RightAngle(int a=0,int b=0,int c=0):Triangle(a,b),Side(c)
//	{}
//	void Display()
//	{
//		cout<<Area()<<endl;
//	}
//};
//void main()
//{
//	Triangle a(3,4);
//	a.Display();
//	Rectangle b(5,4);
//	b.Display();
//	RightAngle c(5,10,5);
//	c.Display();
//}



class Account
{
protected:
	double Balance;
public:
	Account(double a=0):Balance(a)
	{}
	double Credit(double a)
	{
		Balance=Balance+a;
		return Balance;
	}
	double Debit(double a)
	{
		Balance=Balance-a;
		return Balance;
	}
	double getBalance()
	{
		return Balance;
	}
};
class SavingAccount:public Account
{
protected:
	double InterestRate;
public:

	SavingAccount(double a=0,double b=0):Account(a),InterestRate(b)
	{}
	double CalculateInterest()
	{
		return (Balance*InterestRate)/100;
	}
	double getBalance()
	{
		return Balance-CalculateInterest();
	}
};
class CheckingAccount:public Account
{
protected:
	double FeeCharged;
public:
	CheckingAccount(double a=0,double b=0):Account(a),FeeCharged(b)
	{}
	double Credit(double a)
	{
		Balance=Balance+a-FeeCharged;
		return Balance;
	}
	double Debit(double a)
	{
		Balance=Balance-a-FeeCharged;
		return Balance;
	}

};

void main()
{
	double c=0;
	cout<<"Enter your initial balance\n";
	cin>>c;
	
	Account s(c);
	cout<<"Account :\n";
	cout<<"Initial Balance is : "<<c<<endl;
	cout<<"Credit after adding 100 to the account\t"<<s.Credit(100)<<endl;
	cout<<"Debit after withdrawing 100 from the account\t"<<s.Debit(100)<<endl;
	cout<<"Total balance : "<<s.getBalance()<<endl;

	double aa=0,bb=0;
	cout<<"\n\nEnter your initial balance\n";
	cin>>aa;
	cout<<"Enter your interest rate\n";
	cin>>bb;
	SavingAccount a(aa,bb);
	cout<<"Saving Account :\n";
	cout<<"Initial Balance is :"<<aa<<endl;
	cout<<"Interest Rate is :"<<bb<<endl;
	cout<<"Total interest is :"<<a.CalculateInterest()<<endl;
	cout<<"Total balance after interest :"<<a.getBalance()<<endl;


	double cc=0,dd=0;
	cout<<"\n\nEnter your initial balance\n";
	cin>>cc;
	cout<<"Enter your fee per transaction\n";
	cin>>dd;
	CheckingAccount b(cc,dd);
	cout<<"\nChecking Account :\n";
	cout<<"Initial Balance is :"<<cc<<endl;
	cout<<"Fee per transaction is :"<<dd<<endl;
	cout<<"Credit after 1st transaction (Adding 100 to the account)\t"<<b.Credit(100)<<endl;
	cout<<"Debit after 2nd transaction (Withdrawing 100 from the account)\t"<<b.Debit(100)<<endl;
	cout<<"Total balance after 2 Transactions :"<<b.getBalance()<<endl;

}