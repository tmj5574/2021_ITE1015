class Shape {
public:
	virtual ~Shape() {};
	Shape(double width_, double height_);
	virtual void getArea() = 0;

protected:
	double width, height;
};

class Triangle : public Shape {
public:
	Triangle(double width_, double height_);
	void getArea();

};

class Rectangle : public Shape {
public:
	Rectangle(double width_, double height_);
	void getArea();
};
