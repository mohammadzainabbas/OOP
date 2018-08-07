#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	string getCourseName()
	{
		return CourseName;
	}
	void setCourseName(string a)
	{
		CourseName=a;
	}
	void Display()
	{
		cout<<CourseName<<endl;
	}

	GradeBook()
	{
		CourseName = "OOP";
	}

	~GradeBook()
	{
		
	}


private:
	string CourseName;
};

class Circle
{
public:
	double getRadius()
	{
		return Radius;
	}
	void setRadius(double a)
	{
		Radius=a;
	}
	float getArea()
	{
		return Radius*Radius*3.1416;
	}
	float getDiameter()
	{
		return 2*Radius;
	}
	void setDiameter(double a)
	{
		Radius=a/2;
	}

	Circle()
	{
		cout<<"Default Constructor Called.\n";
		Radius=0;
	}
private:
	double Radius;
};

class GPACalculator
{
public:
	void setGrades()
	{
		string a;
		
		cout<<"Enter DS Grade: \t";
		cin>>a;
		setDSGrade(a);cout<<endl;
		
		cout<<"Enter CSA Grade: \t";
		cin>>a;
		setCSAGrade(a);cout<<endl;
		
		cout<<"Enter DM Grade: \t";
		cin>>a;
		setDMGrade(a);cout<<endl;
		
		cout<<"Enter CG Grade: \t";
		cin>>a;
		setCGGrade(a);cout<<endl;
		
		cout<<"Enter EDC Grade: \t";
		cin>>a;
		setEDCGrade(a);cout<<endl;
	}
	float ConvertGrades(string a)
	{
		if (a=="A")
		{
			return 4;
		}
		else if (a=="B+")
		{
			return 3.5;
		}
		else if (a=="B")
		{
			return 3;
		}
		else if (a=="C+")
		{
			return 2.5;
		}
		else if (a=="C")
		{
			return 2;
		}
		else if (a=="D+")
		{
			return 1.5;
		}
		else if (a=="D")
		{
			return 1;
		}
		else if (a=="F")
		{
			return 0;
		}

	}
	void setDSGrade(string a)
	{
		
		DSGrade=a;
	}
	void setCSAGrade(string a)
	{
		
		CSAGrade=a;
	}
	void setDMGrade(string a)
	{
	
		DMGrade=a;
	}
	void setCGGrade(string a)
	{
	
		CGGrade=a;
	}
	void setEDCGrade(string a)
	{	
	
		EDCGrade=a;
	}
	float GPA()
	{
		return ((4*ConvertGrades(DSGrade))+(4*ConvertGrades(CSAGrade))+(4*ConvertGrades(EDCGrade))+(3*ConvertGrades(DMGrade))+(3*ConvertGrades(CGGrade)))/18;
	}
	GPACalculator()
	{
		DSGrade=CSAGrade=DMGrade=EDCGrade=CGGrade="A";
	}

private:
	string DSGrade,CSAGrade,DMGrade,EDCGrade,CGGrade;
	int CreditHours;
};

class SumOfSquare
{
public:
	void setNumbers()
	{
		int a=0;
		for (int i=0;i<5;i++)
		{
			cin>>num[i];
		}
		for (int i=0;i<5;i++)
		{
			for (int j=i+1;j<5;j++)
			{
				if (num[i]+num[j]==num[i]*num[i])
				{
					cout<<num[i]<<"\n"<<num[j];
				}
			}
		}
	}

private:
	int num[5];
	
};

void main()
{
	/*GradeBook a;
	string var;
	getline(cin,var);
	a.setCourseName(var);
	cout<<a.getCourseName()<<endl;
	a.Display();*/
	cout<<"Task No. 01\n\n\n";
	Circle a;
	double var=0;
	cout<<"Enter Radius:\n";
	cin>>var;
	a.setRadius(var);
	cout<<"Area is :\t"<<a.getArea()<<endl;
	cout<<"Diameter is :\t"<<a.getDiameter()<<endl;
	cout<<"Enter Diameter:\n";
	cin>>var;
	a.setDiameter(var);
	cout<<"Radius is :\t"<<a.getRadius()<<endl;
	cout<<"Area is :\t"<<a.getArea()<<endl;

	cout<<"\n\n\nTask No. 02\n\n\n";
	GPACalculator b;
	b.setGrades();
	cout<<"Your GPA is : \t"<<b.GPA()<<endl;

	cout<<"\n\n\nTask No. 03\n\n\n";

	SumOfSquare c;
	c.setNumbers();
}