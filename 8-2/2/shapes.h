class Shape {
public:
	Shape();
	Shape(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
protected:
	int x_loc;
	int y_loc;
	int s_height;
	int s_width;
	char brush;

	// Define common properties for all shape types
};

class Rectangle : Shape {
public:
	Rectangle(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};

class Diamond : Shape {
public:
	Diamond(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);

private:
	int distance_;
};

class Square : Shape {
public:
	Square(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);

private:
	int length;
};
