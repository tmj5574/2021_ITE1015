#include <iostream>
#include "setfunc.h"
#include <set>
using namespace std;

int main() {

	string str;
	set<int> set;
	while (true) {
		
	getline(cin, str);
	if (str[0] == '0') {
			break;
		}
	

	set = parseSet(str);
	printSet(set);
	
}
return 0;
}
