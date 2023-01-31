#include "rect.h"
#include <iostream>

Shape::Shape(int width, int height) {
	width_ = width;
	height_ = height;
}

int Shape::getArea() {
	return width_ * height_;
}

int Shape::getPerimeter() {
	return (2 * width_) + (2 * height_);
}

Square::Square(int width) :
	Shape(width, width){}

void Square::print() {
	std::cout << width_ << "x" << height_ << " " << "Square" << std::endl;
	int area = getArea();
	int perimeter = getPerimeter();
	std::cout << "Area: " << area << std::endl;
	std::cout << "Perimeter: " << perimeter << std::endl;
}

NonSquare::NonSquare(int width, int height):
	Shape(width, height){
}

void NonSquare::print() {
	std::cout << width_ << "x" << height_ << " " << "Nonsquare" << std::endl;
	int area = getArea();
	int perimeter = getPerimeter();
	std::cout << "Area: " << area << std::endl;
	std::cout << "Perimeter: " << perimeter << std::endl;
}
