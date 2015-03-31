class Shape
{
public:
	 virtual void name() ; // print the name of the shape
	 virtual void draw();// draws shape
	 virtual double perimeter(); // calculate perimeter
	 virtual double area(); // calculate area
	
};

class Circle : public Shape
{
private:
	double radius; //radius of the circle
public:

	// getting the perimeters need for calculation	
	void setRadius(double);
	double getRadius();
	virtual void name();
	virtual void draw();
	virtual double perimeter(); // calculate perimeter
	virtual double area(); // calculate area
};

class Rectangle : public Shape
{
private:
	double width; // width of the rectangle
	double length; // length of the rectangle
public:
	// setting perimeters need for calculations	
	void setWidth(double);
	void setLength(double);
	// getting the perimeters need for calculation
	double getWidth();
	double getLength();

	virtual void name();
	virtual void draw();
	virtual double perimeter(); // calculate perimeter
	virtual double area(); // calculate area

};

class Triangle : public Shape
{
private:
	double base; // base of the triangle
	double height; // height of the triangle
	double side1;
	double side2;
public:
	// setting perimeters need for calculations	
	void setBase(double);
	void setHeight(double);
	void setSide1(double);
	void setSide2(double);
	// getting the perimeters need for calculation	
	double getBase();
	double getSide1();
	double getSide2();
	double getHeight();

	virtual void name();
	virtual void draw();
	virtual double perimeter(); // calculate perimeter
	virtual double area(); // calculate area
};