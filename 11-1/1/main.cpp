#include <iostream>
#include <string>
#include "my_string.h"

using namespace std;

int main() {
	string button;
	string str;
	string object;	
	string object2;
	string oper;

	MyString a;
	MyString b;
	MyString c;
	while (true) {
		cin >> button;

		if (button == "new") {
			cout << "enter a" << endl;
			cin >> a;
			cout << "enter b" << endl;
			cin >> b;
		}
		
		else if (button == "print") {
			cin >> object;
			if (object == "a") {
				cout << a;
				cout << endl;
			}
			else if (object == "b") {
				cout << b;
				cout << endl;
			}
			else {
				cout << c ;
				cout << endl;

			}
				}

		else if (button == "c=") {
			cin >> object;
			cin >> oper;
			cin >> object2;

			if (oper == "+") {
				if (object != object2) {
					c = a + b;
				}
				else {
					if (object == "a") {
						c = a + a ;
					}
					else if (object == "b") {
						c = b + b;
					}
				}
			}
			
			else if (oper == "*") {
				if (object == "a") {
					c = a * stoi(object2);
				}
				else if (object == "b") {
					c = b * stoi(object2);
				}
			}
		}
		else if (button == "quit"){
		break;}
			}

	return 0;
		}
