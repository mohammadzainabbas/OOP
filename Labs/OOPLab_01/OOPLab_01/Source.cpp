#include <iostream>
#include <string>
using namespace std;

//class Gradebook
//{
//public:
//	void Display(string a)
//	{
//		cout<<"This is "<<a<<" gradebook.\n";
//	}
//	void EvenOrOdd (int a)
//	{
//		if (a%2==0)
//		{
//			cout<<"Your number "<<a<<" is an even number.\n";
//		}
//		else
//		{
//				cout<<"Your number "<<a<<" is an odd number.\n";
//		}
//	}
//	Gradebook();
//	~Gradebook();
//
//private:
//
//};
//
//Gradebook::Gradebook()
//{
//}
//
//Gradebook::~Gradebook()
//{
//}

class BrowserCheck
{
public:
	string Website;
	int TotalCharacters(string a)
	{
		Website=a;
		int b=0;
		for (int i=0;i<a.length();i++)
		{
			b++;
		}
		return b;
	}
	int TotalVowels(string b)
	{
		int Vowels=0;
		for (int i=0;i<b.length()-4;i++)
		{
			if (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
			{
				Vowels++;
			}
		}
		return Vowels;
	}
	//void WithoutVowels(string num)
	//{
	//	num.erase(0,4);
	//	int var=num.length();
	//	num.erase(var-4,var);
	//	
	//	for (int num2=0;num2<num.length();num2++)
	//	{
	//		if (num[num2]=='a')
	//		{
	//			num.erase(num2-1,num2);
	//		}
	//	}
	//	
	//	cout<<num;
	//	/*int TotalCharactersWithoutVowels=0;
	//	string name;
	//	for(int ii=0;ii<aa.length()-8;ii++)
	//	{
	//		name[ii]=aa[ii+4];
	//	}
	//	cout<<name;
	//	*/
	//}

	int MultipliedValue()
	{
		int a[10];
		int Multiplied=1;
		for (int i=0;i<10;i++)
		{
			cin>>a[i];
			Multiplied=Multiplied*a[i];
		}
		return Multiplied;
	}
	int TotalDivisibles ()
	{
		int num=MultipliedValue();
		int Factors=0;
		for (int i=0;i<num/2;i++)
		{
			if (num%i==0)
			{
				Factors++;
			}
		}
		return Factors;
	}

private:

};


void main()
{
	/*Gradebook a;
	string CourseName;
	int b=0;
	getline(cin,CourseName);
	a.Display(CourseName);
	cin>>b;
	a.EvenOrOdd(b);*/
	BrowserCheck a;
	//int num=0;
	////cout<<"Total numbers of Websites:\t";
	////cin>>num;
	////for (int i=0;i<num;i++)
	////{
	//string aa;
	//getline(cin,aa);
	////cout<<a.TotalCharacters(aa);
	////a.WithoutVowels(aa);
	////cout<<a.TotalVowels(aa);
	//int var=a.TotalCharacters(aa)-4-a.TotalVowels(aa);
	//cout<<"Ratio is : \t"<<var<<"/"<<a.TotalCharacters(aa)<<endl;

	cout<<a.TotalDivisibles();
}