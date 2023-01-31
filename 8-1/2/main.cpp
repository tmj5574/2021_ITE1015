#include <iostream>
#include "drop.h"

using namespace std;

int main(void) {
	string button;
	float height;


	while (true) {
		cin >> button;

		if (button == "Earth") {
			cin >> height;
			Earth earth;
			earth.simulate(height);
		}

		else if (button == "Moon") {
			cin >> height;
			Moon moon;
			moon.simulate(height);
		}

		else if (button == "quit") {
			break;
		}
	}
	return 0;
}
