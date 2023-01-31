#include "shapes.h"
#include <iostream>
#include <vector>

Shape::Shape() {}
Shape::Shape(int x_loc_, int y_loc_, int s_width_, int s_height_,  char brush_) {
	x_loc = x_loc_;
	y_loc = y_loc_;
	brush = brush_;
	s_width = s_width_;
	s_height = s_height_;
}

double Shape::GetArea() {
	return s_width * s_height;
}

int Shape:: GetPerimeter() {
	return (2 * s_width) + (2 * s_height);
}

void Shape::Draw(int canvas_width, int canvas_height) {
	for (int i = 0; i < canvas_width; i++) {
		std::cout << i;
	}
	std::vector<std::vector<char>> cv(s_height, std::vector<char>(s_width, '.'));
	for (int i = 0; i < s_height; i++) {
		std::cout << i;
		for (int j = 0; j < s_width; j++) {
			std::cout << cv[i][j];
		}
		std::cout << std::endl;

	}
}

Rectangle::Rectangle(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_) :
	Shape(x_loc_, y_loc_, s_width_, s_height_, brush_) {}

double Rectangle::GetArea() {
	double result = s_width * s_height;
	return result;
}

int Rectangle::GetPerimeter() {
	return (2 * s_width) + (2 * s_height);
}

void Rectangle::Draw(int canvas_width, int canvas_height) {
	std::vector<std::vector<char>> rv(canvas_height, std::vector<char>(canvas_width, '.'));

	std::cout << " ";
	for (int i = 0; i < canvas_width; i++) {
		std::cout << i;
	}
	std::cout << std::endl;

	for (int i = 0; i < s_height; i++) {
		for (int j = 0; j < s_width; j++) {

			if ((y_loc + i + 1) > canvas_height || (x_loc + j + 1) > canvas_width) {
				continue;
			}

			rv[y_loc + i][x_loc + j] = brush;

		}
	}

	for (int i = 0; i < canvas_height; i++) {
		std::cout << i;
		for (int j = 0; j < canvas_width; j++) {
			std::cout << rv[i][j];
		}
		std::cout << std::endl;
	}
}

Diamond::Diamond(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_) :
	Shape(x_loc_, y_loc_, s_width_, s_height_, brush_) {
	Diamond::distance_ = s_width;
}

double Diamond::GetArea() {
	double result = ((2*(double)distance_+1)*(2*(double)distance_+1)) / 2;
	return result;
}

int Diamond::GetPerimeter() {
	return 4 * (distance_ + 1);
}

void Diamond::Draw(int canvas_width, int canvas_height) {
	std::cout << " ";

	for (int i = 0; i < canvas_width; i++) {
		std::cout << i;
	}
	std::cout << std::endl;

	std::vector<std::vector<char>> dv(canvas_height, std::vector<char>(canvas_width, '.'));

	for (int i = 0; i < 2 * distance_ - 1; i++) {
		for (int j = 0; j < 2 * i + 1; j++) {

			if (y_loc > canvas_height) {
				break;
			}
			else if (x_loc + j > canvas_width) {
				continue;
			}
			else if (x_loc < 0) {
				x_loc = 1;
				continue;
			}

			dv[y_loc][x_loc + j] = brush;

		}
		x_loc--;
		y_loc++;
	}
	x_loc++;
	x_loc++;

	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < 2 * i - 1; j++) {

			if (y_loc > canvas_height) {
				break;
			}
			else if (x_loc + j > canvas_width) {
				continue;
			}
			else if (x_loc < 0) {
				x_loc = 1;
				continue;
			}

			dv[y_loc][x_loc + j] = brush;

		}
		x_loc++;
		y_loc++;
	}


	for (int i = 0; i < canvas_height; i++) {
		std::cout << i;
		for (int j = 0; j < canvas_width; j++) {
			std::cout << dv[i][j];
		}
		std::cout << std::endl;
	}
}

Square::Square(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_):
	Shape(x_loc_, y_loc_, s_width_, s_height_, brush_) {
	length = s_width;
}

void Square::Draw(int canvas_width, int canvas_height) {
	std::vector<std::vector<char>> sqv(canvas_height, std::vector<char>(canvas_width, '.'));

	std::cout << " ";
	for (int i = 0; i < canvas_width; i++) {
		std::cout << i;
	}
	std::cout << std::endl;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {

			if ((y_loc + i + 1) > canvas_height || (x_loc + j + 1) > canvas_width) {
				continue;
			}

			sqv[y_loc + i][x_loc + j] = brush;

		}
	}

	for (int i = 0; i < canvas_height; i++) {
		std::cout << i;
		for (int j = 0; j < canvas_width; j++) {
			std::cout << sqv[i][j];
		}
		std::cout << std::endl;
	}
}

double Square::GetArea() {
	double result = s_width * s_height;
	return result;
}

int Square::GetPerimeter() {
	return (2 * s_width) + (2 * s_height);
}
