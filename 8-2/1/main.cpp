#include <iostream>
#include "rect.h"

using namespace std;

int main() {

	int width, height;
	string button;

	while (true) {
		cin >> button;

		if (button == "square") {
			cin >> width;
			height = width;
			Square sq(width);
			sq.print();
		}

		else if (button == "nonsquare") {
			cin >> width >> height;
			NonSquare nsq(width, height);
			nsq.print();
		}

		else if (button == "quit") {
			break;
		}
	}
	return 0;
}
