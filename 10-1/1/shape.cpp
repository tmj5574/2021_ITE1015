#include "shape.h"
#include <iostream>

Shape::Shape(double width_, double height_) {
	width = width_;
	height = height_;
}

Triangle::Triangle(double width_, double height_) :
	Shape(width_, height_) {}

void Triangle::getArea() {
	 
	std::cout << 0.5 * width * height << std::endl;
}

Rectangle::Rectangle(double width_, double height_) :
	Shape(width_, height_) {}

void Rectangle::getArea() {
	std::cout << width * height<< std::endl;
}
