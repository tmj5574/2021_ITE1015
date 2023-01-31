#include <iostream>
#include <string>
#include "charlist.h"

using namespace std;

int main() {
	string str;
	while (1) {
		cin >> str;

		if (str == "quit") {
			break;
		}


		CharList c(str.c_str());

		std::cout << std::boolalpha << c.CheckPalindrome() << std::endl;


	}

	return 0;
}

