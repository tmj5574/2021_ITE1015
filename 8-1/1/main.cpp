#include <iostream>
#include "number.h"

using namespace std;

int main() {
	string button;
	int num;

	while (true) {
		cin >> button;


		if (button == "number") {
			cin >> num;
			Number number;
			number.setNumber(num);
			num = number.getNumber();
			cout << "getNumber(): " << num << endl;
		}

		else if (button == "square") {
			cin >> num;
			Square sq;
			sq.setNumber(num);
			num = sq.getNumber();
			cout << "getNumber(): " << num << endl;
			num = sq.getSquare();
			cout << "getSquare(): " << num << endl;

		}

		else if (button == "cube") {
			cin >> num;
			Cube cube;
			cube.setNumber(num);
			num = cube.getNumber();
			cout << "getNumber(): " << num << endl;
			num = cube.getSquare();
			cout << "getSquare(): " << num << endl;
			num = cube.getCube();
			cout << "getCube(): " << num << endl;


		}
		else if (button == "quit") {
			break;
		}


	}
	return 0;
}
