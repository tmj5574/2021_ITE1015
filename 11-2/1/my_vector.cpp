#include "my_vector.h"
#include <vector>

	
MyVector::MyVector() {}

MyVector::~MyVector() {}

MyVector::MyVector(int length) {
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

std::ostream& operator<< (std::ostream& out, MyVector& b) {
	MyVector* p = &b;
	for (int i = 0; i < p->length; i++) {
		out << *(b.a + i) << " ";
	}
	std::cout << std::endl;
	return out;
}

std::istream& operator>> (std::istream& in, MyVector& b) {
	in >> b.length;
	return in;
}

MyVector MyVector::operator+(const MyVector& b) {
	MyVector temp;
	temp.length = this->length;
	temp.a = new double[length];
	for (int i = 0; i < length; i++) {
		*(temp.a + i) = *(a + i) + *(b.a+i);
	}

	return temp;
}

MyVector MyVector::operator-(const MyVector& b) {
	MyVector temp;
	temp.length = this->length;
	temp.a = new double[length];
	for (int i = 0; i < length; i++) {
		*(temp.a + i) = *(a + i) - *(b.a + i);
	}

	return temp;
}

MyVector MyVector::operator+(const int b) {
	MyVector temp;
	temp.length = this->length;
	temp.a = new double[length];
	for (int i = 0; i < length; i++) {
		temp.a[i] = *(this->a + i) + b ;
	}

	return temp;
}

MyVector MyVector::operator-(const int b) {
	MyVector temp;
	temp.length = this->length;
	temp.a = new double[length];
	for (int i = 0; i < length; i++) {
		*(temp.a + i) = *(a + i) - b;
	}

	return temp;
}


