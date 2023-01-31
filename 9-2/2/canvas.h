#include <iostream>

class Canvas {
public: 
	Canvas(size_t row, size_t col);
	~Canvas();

	void Resize(size_t w, size_t h);

	//bool DrawPixel(int x, int y, char brush);

	void Print();

	void Clear();

private:
	size_t w_;
	size_t h_;
};

class Shape {
public:
	virtual ~Shape();
	Shape(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	virtual void Draw(Canvas* canvas) {};
	virtual void Draw(int canvas_width, int canvas_height) {};

protected:
	int x_loc;
	int y_loc;
	int s_height;
	int s_width;
	char brush;
};


class Rectangle : public Shape {
public:
	Rectangle(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	void Draw(int canvas_width, int canvas_height);

};

class DownTriangle : public Shape {
public:
	DownTriangle(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	void Draw(int canvas_width, int canvas_height);

private:

};


class UpTriangle : public Shape {
public:
	UpTriangle(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	void Draw(int canvas_width, int canvas_height);

private:

};

class Diamond : public Shape {
public:
	Diamond(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_);
	void Draw(int canvas_width, int canvas_height);

private:

};

