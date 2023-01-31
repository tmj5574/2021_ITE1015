#include "charlist.h"
#include <iostream>

CharList::CharList(const char* str) {
	int i = 0;
	while (str[i] != '\0') {
		mystring_.push_back(str[i]);
		i++;
	}
}

CharList::~CharList(){}

bool CharList::CheckPalindrome() {
	std::list<char> mystring2_ = mystring_;
	std::list<char>::iterator iter = mystring_.begin();
	mystring2_.reverse();
	std::list<char>::iterator iter2 = mystring2_.begin();
	while (iter != mystring_.end() && iter2 != mystring2_.end()){
		if (*iter == *iter2) {
			iter++;
			iter2++;
		}
		else if (*iter != *iter2) {
			return false;
		}
	}
	return true;
}
