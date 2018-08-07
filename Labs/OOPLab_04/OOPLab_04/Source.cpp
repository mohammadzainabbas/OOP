#include <iostream>
using namespace std;

//class Employee
//{
//private:
//	static int count;
//	int age;
//public:
//	static void Set(int c)
//	{
//		count=c;
//	}
//	static int getCount()
//	{
//		return count;
//	}
//};
//
//int Employee::count=0;			//Compulsory

class Geometry
{
private:
	static int TriangleLength;
	static int RectangleLength;
	static int RectangleWidth;
	static int DiamondLength;
public:
	static void setTriangleLength(int a)
	{
		TriangleLength=a;
	}
	static void setRectangleLength(int a)
	{
		RectangleLength=a;
	}
	static void setRectangleWidth(int a)
	{
		RectangleWidth=a;
	}
	static void setDiamondLength(int a)
	{
		DiamondLength=a;
	}
	static void DrawTriangle()
	{
		for (int i=0;i<TriangleLength;i++)
		{
			for (int j=0;j<=i;j++)
			{
			cout<<"*";
			}
			cout<<endl;
		}
	}
	static void DrawRectangle()
	{
		for (int i=0;i<RectangleLength;i++)
		{
			for (int j=0;j<RectangleWidth;j++)
			{
			cout<<"*";
			}
			cout<<endl;
		}
	}
	static void DrawDiamond()
	{
		for (int i=0;i<DiamondLength;i++)
		{
			for (int j=DiamondLength;j>i;j--)
			{
			cout<<" ";
			}
			for (int k=0;k<i+(i-1);k++)
			{
			cout<<"*";
			}
			cout<<endl;
		}
		for (int i=DiamondLength;i>0;i--)
		{			
			for (int k=0;k<i+(i-1);k++)
			{
			cout<<"*";
			}
			for (int j=i;j>DiamondLength;j++)
			{
			cout<<" ";
			}
			cout<<endl;
		}
		





	//	int a=DiamondLength-1;

	// for(int i =0;i<DiamondLength;i++)
 //{
	// for(int j =1;j<=DiamondLength;j++)
 // {
 //  cout<<" ";
 // }
 // for(int k=1;k<=i;k++)
 // {
 //  cout<<"*";
 //  cout<<" ";
 // }
 // DiamondLength--; 
 // cout<<"\n";
 //}
	//	 for(int x =1;x<=a;x++)
 //{
 // for(int z = 1;z<=x;z++)
 // {
 //  cout<<" ";
 // } 
 // 
 // for(int y=1;y<=a;y++)
 // {
 //  cout<<" ";
 //  cout<<"*";
 // }
 // cout<<"\n";
 //a--;
 //}






	}
};

	 int Geometry::TriangleLength=0;
	 int Geometry::RectangleLength=0;
	 int Geometry::RectangleWidth=0;
	 int Geometry::DiamondLength=0;

void main()
{
	/*cout<<Employee::getCount()<<endl;
	Employee::Set(5);
	cout<<Employee::getCount()<<endl;
	Employee a,b;
	cout<<a.getCount()<<endl;
	b.Set(20);
	cout<<a.getCount()<<endl;*/
	Geometry::setTriangleLength(10);
	Geometry::DrawTriangle();
	Geometry::setRectangleLength(5);
	Geometry::setRectangleWidth(6);
	Geometry::DrawRectangle();
	Geometry::setDiamondLength(5);
	Geometry::DrawDiamond();
}