#include "my_string2.h"
#include <iostream>

MyString2::MyString2(const MyString2& obj) {
	str = obj.str;
	std::cout << "(copy constructor)" << std::endl;
}

MyString2& MyString2::operator=(const MyString2& obj) {
	str = obj.str;
	std::cout << "(assignment operator)" << std::endl;
	return *this;
}
MyString2 MyString2::operator+(const MyString2& b) {
	MyString2 temp;
	temp.str = str + b.str;
	return temp;
}

MyString2 MyString2::operator*(const int b) {
	MyString2 temp;
	for (int i = 0; i < b; i++) {
		temp.str += this->str;
	}
	return temp;
}

std::ostream& operator<<(std::ostream& out, MyString2& my_string) {
	out << my_string.str;
	return out;
}

std::istream& operator>>(std::istream& in, MyString2& my_string) {
	in >> my_string.str;
	return in;
}
