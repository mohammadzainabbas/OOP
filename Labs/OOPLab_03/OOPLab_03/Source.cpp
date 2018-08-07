#include <iostream>
#include <string>

using namespace std;

//class Time
//{
//public:
//	Time(int =0,int=0,int=0);				//Default constructor
//	
//private:
//	int hour,min,sec;
//};
//
//Time::Time(int a,int b, int c)							//Overloaded Constructor
//{
//	hour=a;
//	min=b;
//	sec=c;
//}
class Rectangle
{
public:
	Rectangle():Length(0),Width(0),Area(0)
	{
	}
	Rectangle(int a,int b):Length(a),Width(b)
	{}
	int getArea()const
	{
		return Area;
	}
	int getLength()const
	{
		return Length;
	}
	int getWidth()const
	{
		return Width;
	}
	void setArea()
	{
		Area=Length*Width;
	}
	void DisplayArea() const
	{
		cout<<"Area is :\t"<<Area<<endl;
	}
private:
	const int Length, Width;
	int Area;
};

class PalindromeClass
{
public:
	void CalculatePalindrome()
	{
		int a=Palindrome.length();
		string aa=Palindrome;
		for (int i=0; i<a;i++)
		{
			if (aa[i] != aa[a-i-1])
			{
				ifPalindrome=0;
				return;
			}
			
		}
			ifPalindrome=1;
	}
	bool CheckPalindrome() const
	{
		return ifPalindrome;
	}
	PalindromeClass():Palindrome("0")
	{}
	PalindromeClass(string a):Palindrome(a)
	{}

private:
	const string Palindrome;
	bool ifPalindrome;
};

class PrimeNumber
{
private:
	int Start,End;
public:
	bool IsPrime(int a) const
	{
	for (int i=2;i<a;i++)
	{
		if (a%i == 0)
		{
			return 0;
		}
	}
		return 1;
	}
	PrimeNumber(int a=1,int b=100):Start(a),End(b)
	{}
	void CalculatePrime ()
	{
		int times=0;
		for (int i=Start;i<End+1;i++)
		{
			times++;
			if (IsPrime(i)==1)
			{
				cout<<i<<"\t";
			}
		}
		cout<<endl;
		cout<<"Total prime numbers between "<<Start<<" and "<<End<<" are "<<times<<endl;
	}
};


void main()
{
	//Time a();								//a ---> hour=0; min =0; sec=0;
	//Time b(2);								//b ---> hour=2; min =0; sec=0;
	//Time c(2,4);							//c ---> hour=2; min =4; sec=0;

	string b;
	getline(cin,b);
	
	PalindromeClass a(b);
	a.CalculatePalindrome();
	cout<<a.CheckPalindrome();
	/*int aa=0,bb=0;
	cout<<"Enter starting number :\t";
	cin>>aa;
	cout<<"Enter ending number :\t";
	cin>>bb;
	PrimeNumber c(aa,bb);
	c.CalculatePrime();*/
	
}