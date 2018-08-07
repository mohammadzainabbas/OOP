#include <iostream>
using namespace std;

class Polygon
{
protected:
	double Length;
	double Width;
	double Radius;

	Polygon()
	{
		Length = 0;
		Width = 0;
		Radius = 0;
	}
public:

	void setLength(double a)
	{
		Length = a;
	}
	void setWidth(double a)
	{
	Width = a;
	}
	void setRadius(double a)
	{
		Radius = a;
	}
	double getLength() const
	{
		return Length;
	}
	double getWidth() const
	{
		return Width;
	}
	double getRadius() const
	{
		return Radius;
	}
	double getArea()
	{
		return Length*Width;
	}
};
class Triangle : public Polygon
{
public:
	double getArea()
	{
		return (0.5 * Length * Width);
	}
};
class Rectangle : public Polygon
{
public:
	double getArea()
	{
		return (Length * Width);
	}
};
class Circle: public Polygon
{
public:
	double getArea()
	{
		return 3.14*Radius*Radius;
	}
};

void main()
{
	Triangle a;
	a.setLength(2);
	a.setWidth(3);
	cout << "Triangle Area : " << a.getArea() << endl;

	Rectangle b;
	b.setLength(50);
	b.setWidth(45);
	cout << "Rectangle Area : " << b.getArea() << endl;

	Circle c;
	c.setRadius(85);
	cout << "Circle Area : " << c.getArea() << endl;
}