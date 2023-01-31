#include <iostream>
#include <string>
#include "my_string2.h"
#include <vector>

using namespace std;

int main() {
	string button;
	string str;
	string object;
	string object2;
	string oper;
	string option;
	

	MyString2 a;
	MyString2 b;


		cin >> button;

		if (button == "new") {
			cout << "enter a" << endl;
			cin >> a;
			cout << "enter b" << endl;
			cin >> b;
		}
	

	cin >> button;
	cin >> object;
	cin >> oper;
	cin >> object2;

	MyString2 d(a * stoi(object2));
	MyString2 c(d);

		while (true) {
			cin >> button;
		 if (button == "print") {
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
				cout << c;
				cout << endl;

			}
		}

		if (button == "set") {
			cin >> option;
		}

		if (option.length() != 0) {
			if (option == "copy") {
				if (button == "c=") {
					cin >> object;
					cin >> oper;
					cin >> object2;

					if (oper == "+") {
						if (object != object2) {
							MyString2 d(a + b);
							MyString2 c2(d);
							c = c2;


						}
						else {
							if (object == "a") {
								MyString2 d(a + a);
								MyString2 c2(d);
								c = c2;

							}
							else if (object == "b") {
								MyString2 d(b + b);
								MyString2 c2(d);
								c = c2;


							}
						}
					}

					else if (oper == "*") {
						if (object == "a") {
							MyString2 d(a * stoi(object2));
							c = d;

						}
						else if (object == "b") {
							MyString2 d(b * stoi(object2));
							c = d;

						}
					}
				}
			}

			else if (option == "assign") {
				if (button == "c=") {
					cin >> object;
					cin >> oper;
					cin >> object2;

					if (oper == "+") {
						if (object != object2) {
							c = a + b;


						}
						else {
							if (object == "a") {
								c = a + a;

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
			}
		}
		else if (option.length() == 0) {
			if (button == "c=") {
				cin >> object;
				cin >> oper;
				cin >> object2;

				if (oper == "+") {
					if (object != object2) {
						MyString2 d(a + b);
						MyString2 c(d);

					}
					else {
						if (object == "a") {
							MyString2 c(a + a);

						}
						else if (object == "b") {
							MyString2 c(b + b);

						}
					}
				}

				else if (oper == "*") {
					if (object == "a") {
						MyString2 d(a * stoi(object2));
						MyString2 c2(d);
						c2 = c;

					}
					else if (object == "b") {
						MyString2 d(a * stoi(object2));
						MyString2 c2(d);
						c2 = c;

					}
				}
			}
		}
		if (button == "quit") {
			break;
		}
		}
		return 0;
	}

	
