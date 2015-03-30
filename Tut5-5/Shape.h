class Shape
{
public:
	Shape();// constructor
	~Shape();// deconstructor
	 virtual void name() ; // print the name of the shape
	 virtual void draw();// draws shape
	 virtual double perimeter(); // calculate perimeter
	 virtual double area(); // calculate area
	
};

class Circle
{
private:
	double radius; //radius of the circle
public:
	 Circle(double); // constructor
	~Circle();
	// getting the perimeters need for calculation	
	void setRadius(double);
	double getRadius();
	virtual void name();
	virtual void draw();
	virtual double perimeter(); // calculate perimeter
	virtual double area(); // calculate area
};

class Rectangle
{
private:
	double width; // width of the rectangle
	double length; // length of the rectangle
public:
	Rectangle(double , double);
	~Rectangle();
	
	// setting perimeters need for calculations	
	void setWidth(double);
	void setLength();
	// getting the perimeters need for calculation
	double getWidth();
	double getLength();

	virtual void name();
	virtual void draw();
	virtual double perimeter(double, double, double, double, double); // calculate perimeter
	virtual double area(double, double, double, double, double); // calculate area

};

class Triangle
{
private:
	double base; // base of the triangle
	double height; // height of the triangle
public:
	Triangle();
	~Triangle();
	// setting perimeters need for calculations	
	void setbase();
	void setheight();
	// getting the perimeters need for calculation	
	double getbase();
	double getheight();

	virtual void name();
	virtual void draw();
	virtual double perimeter(double, double, double, double, double); // calculate perimeter
	virtual double area(double, double, double, double, double); // calculate area
};