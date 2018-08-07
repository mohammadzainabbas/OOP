#include<iostream>
using namespace std;
int Product=1;
class TheDeadMathematician
{
private:
	 static const int TotalScientists=10;
	 int Scientist[ TotalScientists];
public:

	void Input()
	{
		for(int i=0;i<10;i++)
		{
			cin>>Scientist[i];
			
		}
	}
	int product()
	{
	  
		for(int i=0;i<10;i++)
		{
			Product=Product*Scientist[i];
		}
		cout<<Product<<endl;
		return Product;
	}
	void Modulus()
	{
		int div=0;
		for(int i=1;i<=Product;i++)
		{
			if(Product%i==0)
			{
				div++;
				
			}
		}
		cout<<div<<endl;
		cout<<"The Magic No is : \t"<<div%10<<endl;
	}
};
void main()
{
	TheDeadMathematician a;
	a.Input();
	a.product();
	cout<<endl;
	a.Modulus();
}