#include <iostream>
using namespace std;

class TestPalindrome
{
private:

 int A;
 int B;
int TestCases;
int N;
bool ifPalindrome;

public:
	TestPalindrome(int a=0,int b=0,int c=0):A(a),B(b),TestCases(c)
	{
		
	}
	 void setA(int a)
	{
		A=a;
	}
	 void setB(int a)
	{
		B=a;
	}
	void setTestCase(int a)
	{
		TestCases=a;
	}
	bool IfPossible()
	{
		if (A<B && B<100000 && TestCases<11)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int NumberOfDigits(int aa)
	{
		int digits=0;
		int rem=0;
		while (aa>0)
		{
			rem=aa%10;
			aa=aa/10;
			digits++;
		}
		return digits;
	}
	bool CheckPalindrome(int a)
	{
		int totaldigit=NumberOfDigits(a);
		int *arr= new int[totaldigit];
		for (int i=0;i<totaldigit;i++)
		{
			arr[i]=a%10;
			a=a/10;
		}
		for (int j=0;j<totaldigit;j++)
		{
			if (arr[j] != arr[totaldigit-j-1])
			{
			ifPalindrome=0;
			return ifPalindrome;
			}
		}

		ifPalindrome=1;
		return ifPalindrome;
	}
	void TotalPalindrome()
	{
		if (IfPossible()==1)
		{
			
			N=0;
		
		for (int i=A; i<=B;i++)
		{
			if (CheckPalindrome(i)==1)
			{
				N++;
			}
			
		}
		cout<<"Total Palindromes :\t"<<N<<endl;
		}
		else
		{
			cout<<"Not possible\n";
		}
	}
	void Input()
	{
		TestPalindrome *aa=new TestPalindrome[TestCases];
		for (int i=0;i<TestCases;i++)
		{
			cin>>aa[i];
		}
		for (int i=0;i<TestCases;i++)
		{
			cout<<aa[i];
		}
	}
	friend istream& operator>>(istream &in, TestPalindrome &temp);
	friend ostream& operator<<(ostream &out, TestPalindrome &temp);
};
//int TestPalindrome::A=0;
//int TestPalindrome::B=0;
 istream& operator>>(istream &in, TestPalindrome &temp)
{
	cout<<"Enter initial value :\t";
	in>>temp.A;
	cout<<"Enter end value :\t";
	in>>temp.B;
	return in;
}
 ostream& operator<<(ostream &out, TestPalindrome &temp)
 {
	 out<<"From "<<temp.A<<" to "<<temp.B<<endl;temp.TotalPalindrome();cout<<endl;
	 return out;
 }

void main()
{
	TestPalindrome a;
	cout<<"Enter total test cases :\t";
	int num=0;
	cin>>num;
	a.setTestCase(num);
	a.Input();
}