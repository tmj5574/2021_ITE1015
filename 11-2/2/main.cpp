#include "my_vector2.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string button;
    int len;
    string object;
    string object2;
    string oper;
	string option;

    cin >> button;
    cin >> len;
    cout << "enter a" << endl;
    MyVector2 a(len);
    cout << "enter b" << endl;
    MyVector2 b(len);
    MyVector2 c;

	while (true) {
		cin >> button;
		if (button == "print") {
			cin >> object;
			if (object == "a") {
				cout << a;
			}
			else if (object == "b") {
				cout << b;
			}
			else {
				cout << c;

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
							MyVector2 d(a + b);
							MyVector2 c2(d);
							c = c2;


						}
						else {
							if (object == "a") {
								MyVector2 d(a + a);
								MyVector2 c2(d);
								c = c2;

							}
							else if (object == "b") {
								MyVector2 d(b + b);
								MyVector2 c2(d);
								c = c2;


							}
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
						if (atoi(object2.c_str()) != 0) {
							if (object == "a") {
								MyVector2 d(a+stoi(object2));
								MyVector2 c2(d);
								c = c2;
							}
							else {
								MyVector2 d(b+stoi(object2));
								MyVector2 c2(d);
								c = c2;
							}
						}
						else {
							MyVector2 d(a + b);
							MyVector2 c2(d);
							c = c2;
						}
					}
					else {
						if (object == "a") {
							MyVector2 d(a + b);
							MyVector2 c2(d);
							c = c2;


						}
						else if (object == "b") {
							MyVector2 d(a + b);
							MyVector2 c2(d);
							c = c2;

						}
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
