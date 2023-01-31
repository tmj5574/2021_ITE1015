#include "canvas.h"
#include <iostream>
#include <vector>

using namespace std;

std::vector<std::vector<char>> cv;
std::vector<char>cv2;

Canvas::~Canvas() {};

Canvas::Canvas(size_t row, size_t col) {
	h_ = row;
	w_ = col;
	
	for (int i = 0; i < w_; i++) {
		cv2.push_back('.');
	}

	for (int i = 0; i < h_; i++) {
		for (int j = 0; j < w_; j++) {
			cv.push_back(cv2);
		}
	}
	
}

void Canvas::Resize(size_t w, size_t h) {
	std::vector<std::vector<char>> temp;
	temp.assign(cv.size(), std::vector<char>(cv.size()));
	copy(cv.begin(), cv.end(), temp.begin());
	int t_w = w_;
	int t_h = h_;
	w_ = w;
	h_ = h;
	cv.clear();


	for (int i = 0; i < w_; i++) {
		cv2.push_back('.');
	}

	for (int i = 0; i < h_; i++) {
		for (int j = 0; j < w_; j++) {
			cv.push_back(cv2);
		}
	}
	

	for (int i = 0; i < h_; i++) {
		for (int j = 0; j < w_; j++) {
			if (i > t_h - 1 || j > t_w - 1) {
				continue;
			}
			else if (temp[i][j] == '.') {
				cv[i][j] = '.';
			}
			else if (temp[i][j] != '.') {
				cv[i][j] = temp[i][j];
			}
			
			}
			
		}

	}



void Canvas::Print() {
	
	std::cout << " "; 

	for (int i = 0; i < w_; i++) {
		if (i > 10) {
			std::cout << i - 10;
			continue;
		}
		std::cout << i;
	}
	std::cout << std::endl;

	for (int i = 0; i < h_; i++) {
		if (i > 10) {
			std::cout << i - 10;
		}
		else {
			std::cout << i;
		}
		for (int j = 0; j < w_; j++) {
			std::cout << cv[i][j];
		}
		std::cout << std::endl;

	}
}

void Canvas::Clear() {

	for (int i = 0; i < h_; i++) {
		for (int j = 0; j < w_; j++) {
			cv[i][j] = '.';
		}
		

	}
}
Shape:: ~Shape() {};

Shape::Shape(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_) {
	x_loc = x_loc_;
	y_loc = y_loc_;
	brush = brush_;
	s_width = s_width_;
	s_height = s_height_;
}

Rectangle::Rectangle(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_) :
	Shape(x_loc_, y_loc_, s_width_, s_height_, brush_) {}


void Rectangle::Draw(int canvas_width, int canvas_height) {


	for (int i = 0; i < s_height; i++) {
		for (int j = 0; j < s_width; j++) {

			if ((y_loc + i + 1) > canvas_height || (x_loc + j + 1) > canvas_width) {
				continue;
			}

			cv[y_loc + i][x_loc + j] = brush;

		}
	}

}

DownTriangle::DownTriangle(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_):
	Shape(x_loc_, y_loc_, s_width_, s_height_, brush_) {
	
}


void DownTriangle::Draw(int canvas_width, int canvas_height) {
	int t_x = x_loc;
	int t_y = y_loc;

	for (int i = 0; i < s_height; i++) {
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

			cv[y_loc][x_loc + j] = brush;

		}
		x_loc--;
		y_loc--;
	}

	x_loc = t_x;
	y_loc = t_y;
}

UpTriangle::UpTriangle(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_):
	Shape(x_loc_, y_loc_, s_width_, s_height_, brush_) {
	
}

void UpTriangle::Draw(int canvas_width, int canvas_height) {

	int t_x = x_loc;
	int t_y = y_loc;

	for (int i = 0; i < s_height; i++) {
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

			cv[y_loc][x_loc + j] = brush;

		}
		x_loc--;
		y_loc++;
	}

	x_loc = t_x;
	y_loc = t_y;
}

Diamond::Diamond(int x_loc_, int y_loc_, int s_width_, int s_height_, char brush_) :
	Shape(x_loc_, y_loc_, s_width_, s_height_, brush_) {

}

void Diamond::Draw(int canvas_width, int canvas_height) {

	int t_x = x_loc;
	int t_y = y_loc;

	for (int i = 0; i < 2 * s_height - 1; i++) {
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

			cv[y_loc][x_loc + j] = brush;

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

			cv[y_loc][x_loc + j] = brush;

		}
		x_loc++;
		y_loc++;
	}

	x_loc = t_x;
	y_loc = t_y;
}

