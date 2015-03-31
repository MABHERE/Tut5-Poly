#include"Shape.h"

#include<iostream>
using namespace std;


/*
*Shape base Class definitions
*/

void Shape::name()
{
	cout << "Shapes" << endl;
}

void Shape::draw()
{
	cout << "We have different Shapes" << endl;
}

double Shape::area()
{
	return 0;
}

double Shape::perimeter()
{
	return 0;
}

//88888888888888888888888888888888888888888888888888 End of Shape bASE Class Definition
/*
*Circle Class definitions
*/

void Circle::setRadius(double rds) // set radius
{
	radius = rds;
};

double Circle::getRadius() // get radius
{
	return radius;
};

 void Circle::name() // tell the name of the shape(Circle)
{
	cout << "Circle" << endl;
}


 void Circle::draw() // Draws the shape
 {
	 cout << "\t*" << endl;
	 cout << "*\t*" << endl;
	 cout << "*\t\t*" << endl;
	 cout << "*\t*" << endl;
	 cout << "\t*" << endl;
 }

 double Circle::perimeter() // calculate perimeter of a circle
 {
	 return (2 * 3.14159* radius);
 }

 double Circle::area()
 {
	 return ( 3.14159* (radius*radius)); // calculate area of a circle
 }

 //88888888888888888888888888888888888888888888888888888888888End of Circle class definition

 /*
 *Rectangle Class definitions
 */
 
 void Rectangle::setWidth(double w)
 {
	width = w;
 };

 void Rectangle::setLength(double l)
 {
	 length = l;
 }

 double Rectangle::getLength()
 {
	 return length;
 }

 double Rectangle::getWidth()
 {
	 return width;
 };

 //**************************************************************************************
 //**************************************************************************************

 void Rectangle::name()
 {
	 cout << "Rectangle" << endl;
 }

 void Rectangle::draw()
 {
	 cout << "  ";
	 for (int i = 0; i <= 4; i++)
	 {
		 for (int j = 0; j <= 10; j++)
		 {
			 cout << "*";
		 }
		 cout << endl;
	 }
 }

 double Rectangle::perimeter()
 {
	 return (2 * (length + width));
 }

 double Rectangle::area()
 {
	 return (length*width);
 }
 //8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888End of Rectangle class definitions 

 /*
 *Triangle Class definitions
 */

 // get and set funcions
 void Triangle::setSide1(double a)
 {
	 side1 = a;
 }
 void Triangle::setSide2(double c)
 {
	 side2 = c;
 }

 void Triangle::setBase(double b)
 {
	 base = b; // base  of a triangle
 }

 void Triangle::setHeight(double h)
 {
	 height = h; // height  of a triangle
 }

 double Triangle::getSide1()
 {
	 return side1; // side1 taken as 'a'  of a triangle
 }

 double Triangle::getSide2()
 {
	 return side2; // side2 taken as 'c'  of a triangle
 }

 double Triangle::getBase()
 {
	 return base; // base  of a triangle
 }

 double Triangle::getHeight()
 {
	 return height; // height  of a triangle
 }
 //**************************************************************************************
 //**************************************************************************************
 void Triangle::name()
 {
	 cout << "Triangle" << endl;
 }

 void Triangle::draw()
 {
	 cout << "    *" << endl;
	 cout << "   * *" << endl;
	 cout << "  *   *" << endl;
	 cout << " *     *" << endl;
	 cout << "*********" << endl;
 }

 double Triangle::area()
 {
	 return ((1 / 2.0)*(base*height)); // area A = 1/2(base*height) of a triangle
 }

 double Triangle::perimeter()
 {
	 return(side1 + side2 + base); //  perimeter P = a+b+c of a triangle
 }

 //88888888888888888888888888888888888888888888888888888888888888888888End of Triangle definitions