#include <iostream>

using namespace std;

class ComplexNo
{
	protected:
	int Real;
	int Imaginary;

public:
	ComplexNo(int a=0,int b=0):Real(a),Imaginary(b)
	{}
	void Display()
	{
		cout<<Real<<" + "<<Imaginary<<"i"<<endl;
	}
	void setReal(int a)
	{
		Real=a;
	}
	void setImaginary(int a)
	{
		Imaginary=a;
	}
	friend ostream& operator<<(ostream out,const ComplexNo & temp);
	friend istream& operator>>(istream in, ComplexNo & temp);
	friend ComplexNo operator++(ComplexNo & temp);
	
};

class RealNo:public ComplexNo
{
protected:

public:
	void Display()
	{
		cout<<Real<<endl;
	}

};
