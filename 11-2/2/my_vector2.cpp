#include "my_vector2.h"
#include <vector>
#include <iostream>


MyVector2::MyVector2() {}

MyVector2::~MyVector2() {}

MyVector2::MyVector2(const MyVector2& mv) {
	a = mv.a;
	length = mv.length;
	std::cout << "(copy constructor)" << std::endl;
}

MyVector2& MyVector2::operator=(const MyVector2& b) {
	a = b.a;
	length = b.length;
	std::cout << "(assignment operator)" << std::endl;
	return *this;
}

MyVector2::MyVector2(int length) {
	this->length = length;
	a = new double[length];
	int i = 0;
	double num;
	while (i < length) {
		std::cin >> num;
		a[i] = num;
		i++;
	}

}

std::ostream& operator<< (std::ostream& out, MyVector2& b) {
	MyVector2* p = &b;
	for (int i = 0; i < p->length; i++) {
		out << *(b.a + i) << " ";
	}
	std::cout << std::endl;
	return out;
}

std::istream& operator>> (std::istream& in, MyVector2& b) {
	in >> b.length;
	return in;
}

MyVector2 MyVector2::operator+(const MyVector2& b) {
	MyVector2 temp;
	temp.length = this->length;
	temp.a = new double[length];
	for (int i = 0; i < length; i++) {
		*(temp.a + i) = *(a + i) + *(b.a + i);
	}

	return temp;
}

MyVector2 MyVector2::operator-(const MyVector2& b) {
	MyVector2 temp;
	temp.length = this->length;
	temp.a = new double[length];
	for (int i = 0; i < length; i++) {
		*(temp.a + i) = *(a + i) - *(b.a + i);
	}

	return temp;
}

MyVector2 MyVector2::operator+(const int b) {
	MyVector2 temp;
	temp.length = this->length;
	temp.a = new double[length];
	for (int i = 0; i < length; i++) {
		temp.a[i] = *(this->a + i) + b;
	}

	return temp;
}

MyVector2 MyVector2::operator-(const int b) {
	MyVector2 temp;
	temp.length = this->length;
	temp.a = new double[length];
	for (int i = 0; i < length; i++) {
		*(temp.a + i) = *(a + i) - b;
	}

	return temp;
}


