#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
#include<iostream>
using namespace std;

Shape::Shape(){};
Shape::~Shape(){};

Circle::Circle(double rds = 0)
{
	radius = rds;
};

Circle::~Circle(){};

void Circle::setRadius(double rds)
{
	radius = rds;
};

double Circle::getRadius()
{
	return radius;
};

 void Circle::name()
{
	cout << "Circle" << endl;
}


 void Circle::draw()
 {
	 cout << "\t*" << endl;
	 cout << "*\t*" << endl;
	 cout << "*\t\t*" << endl;
	 cout << "*\t*" << endl;
	 cout << "\t*" << endl;
 }

 double Circle::perimeter()
 {
	 return (2 * 3.14159* radius);
 }
 double Circle::area()
 {
	 return ( 3.14159* (radius*radius));
 }


 Rectangle::Rectangle(double l = 0, double w = 0)
 {
	 width = w;
	 length = l;
 };

 Rectangle::~Rectangle(){};

 void Rectangle::setWidth(double w)
 {
	width = w;
 };

 double Rectangle::getWidth()
 {
	 return width;
 };

 void Rectangle::name()
 {
	 cout << "Rectangle" << endl;
 }
