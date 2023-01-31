#include "number.h"

int Square::getSquare() {
	int num = Square::getNumber();
	return num * num;
}

int Cube::getCube() {
	int num = Number::getNumber();
	return num * num * num;
}
