#include "my_string.h"
#include <iostream>

MyString MyString::operator+(const MyString& b) {
	MyString temp;
	temp.str = str + b.str;
	return temp;
}

MyString MyString::operator*(const int b) {
	MyString temp;
	for (int i = 0; i < b; i++) {
		temp.str += this->str;
	}
	return temp;
}

std::ostream& operator<<(std::ostream& out, MyString& my_string) {
	out << my_string.str;
	return out;	
}

std::istream& operator>>(std::istream& in, MyString& my_string) {
	in >> my_string.str;
	return in;
}
