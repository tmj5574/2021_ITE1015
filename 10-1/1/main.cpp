#include "shape.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	char button;
	double w, h;
	std::vector<Shape*> arr;

	while (true) {
		cin >> button;

		if (button == 't') {
			cin >> w >> h;
			arr.push_back(new Triangle(w, h));
		}

		else if (button == 'r') {
			cin >> w >> h;
			arr.push_back(new Rectangle(w, h));
		}
		
		else if (button == '0') {
			break;
		}
	}

	for (int i = 0; i < arr.size(); i++) {
		arr[i]->getArea();
	}

	for (int i = 0; i < arr.size(); i++) {
		delete arr[i];
	}

	return 0; 
}
