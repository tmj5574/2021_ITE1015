#include "setfunc.h"
#include <set>
#include <string>
#include <iostream>
#include<sstream>

std::set<int> parseSet(const std::string& str) {
	int loc_op = 0;
	char op = '.';
	std::set <int> set0;
	std::set <int> set1;
	std::set <int> set2;
	std::string str1;
	std::string str2;
	std::string buffer;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '*') {
			if (isdigit(str[i + 1]) != 0) {
				continue;
			}
			else {
				loc_op = i;
					op = str[i];
					break;
			}
		}
		else {
			continue;
		
		}
	}// 연산자 기준으로 나누기


	str1 = str.substr(0, loc_op);
	str2 = str.substr(loc_op+1);



	
	std::stringstream ss(str1);
	while (ss >> buffer) {
		if (buffer == "{" || buffer == "}") {
			continue;
		}
		else {
			int num = stoi(buffer);
			set0.insert(num);
		}
	}
	
	std::stringstream sss(str2);
	while (sss >> buffer) {
		if (buffer == "{" || buffer == "}") {
			continue;
		}
		else {
			int num = stoi(buffer);
			set1.insert(num);
		}
	}


		if (op == '+') {
			set2 = getUnion(set0, set1);
		}

		if (op == '-')  {
			set2 = getDifference(set0, set1);
		}

		if (op == '*') {
			set2 = getIntersection(set0, set1);
		}

	
		
return set2;
	}



void printSet(const std::set<int>& s) {
	std::cout << '{';
	for (std::set<int>::const_iterator iter = s.begin(); iter != s.end(); iter++) {
		std::cout << " " << *iter;
	}
	std::cout << " " << '}' << std::endl;
}

std::set<int> getIntersection(const std::set<int>& set0, const std::set<int>& set1) {
	std::set<int> set2;
	for (std::set<int>::iterator it1 = set0.begin(); it1 != set0.end(); it1++) {
		std::set<int>::iterator it2 = set1.find(*it1);
		if (it2 != set1.end()) {
			set2.insert(*it1);
		}
		
	}
	return set2;
}

std::set<int> getUnion(const std::set<int>& set0, const std::set<int>& set1) {
	std::set<int> set2;
	for (std::set<int>::iterator it1 = set0.begin(); it1 != set0.end(); it1++) {
		set2.insert(*it1);
	}
	for (std::set<int>::iterator it2 = set1.begin(); it2 != set1.end(); it2++) {
		set2.insert(*it2);
	}
	
	return set2;
}

std::set<int> getDifference(const std::set<int>& set0, const std::set<int>& set1) {
	std::set<int> set2;
	for (std::set<int>::iterator it1 = set0.begin(); it1 != set0.end(); it1++) {
		std::set<int>::iterator it2 = set1.find(*it1);
		if (it2 == set1.end()) {
			set2.insert(*it1);
		}
		else {
			continue;
		}
		
	}return set2;
}

