#include <iostream>
#include "message.h"
#include <string>
using namespace std;

int main() {
	string button;
	int num;
	string str;
	MessageBook mb;

	while (button != "quit") {
		cin >> button;

		if (button == "add") {
			cin >> num, getline(cin, str);
			str.erase(0, 1);
			mb.AddMessage(num, str);
		}

		else if (button == "print") {
			cin >> num;
			cout << mb.GetMessage(num) << endl;
		}

		else if (button == "list") {
			mb.PrintList();
		}

		else if (button == "delete") {
			cin >> num;
			mb.DeleteMessage(num);
		}
	}
	return 0;
	
}
