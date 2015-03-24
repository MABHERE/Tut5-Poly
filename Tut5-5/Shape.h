class Shape
{
public:
	Shape();// constructor
	~Shape();// deconstructor
	 virtual void name() const = 0; // print the name of the shape
	 virtual double perimeter(double,double,double,double,double); // calculate perimeter
	 virtual double area(double, double, double, double, double); // calculate area
     virtual void draw() const =0;// draws shape
	
};

class circle
{
private:
	double radius; //radius of the circle
public:
	 circle();
	~circle();
	// getting the perimeters need for calculation	
	void setradius();
	double getradius();
};

class rectangle
{
private:
	double width; // width of the rectangle
	double length; // length of the rectangle
public:
	rectangle();
	~rectangle();
	
	// setting perimeters need for calculations	
	void setwidth();
	void setlength();
	// getting the perimeters need for calculation
	double getwidth();
	double getlength();

};

class triangle
{
private:
	double base; // base of the triangle
	double height; // height of the triangle
public:
	triangle();
	~triangle();
	// setting perimeters need for calculations	
	void setbase();
	void setheight();
	// getting the perimeters need for calculation	
	double getbase();
	double getheight();
};