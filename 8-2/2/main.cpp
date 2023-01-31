

#include <iostream>
#include <iostream>
#include "shapes.h"


using namespace std;

int main() {
	int canvas_width;
	int canvas_height;
	int width;
	int height;
	int distance;
	int length;
	int x_loc;
	int y_loc;
	char brush;
	string button;
	cin >> canvas_width >> canvas_height;
	while (true) {
		
		cin >> button;

		if (button == "rect") {
			cin >> x_loc >> y_loc >> width >> height >> brush;
			Rectangle rec(x_loc, y_loc, width, height, brush);
			cout << "Area: " << rec.GetArea() << endl;
			cout << "Perimeter: " << rec.GetPerimeter() << endl;
			rec.Draw(canvas_width, canvas_height);
			cout << endl;
		}

		else if (button == "diamond") {
			cin >> x_loc >> y_loc >> distance >> brush;
			Diamond dia(x_loc, y_loc, distance, distance, brush);
			cout << "Area: " << dia.GetArea() << endl;
			cout << "Perimeter: " << dia.GetPerimeter() << endl;
			dia.Draw(canvas_width, canvas_height);
			cout << endl;
		}

		else if (button == "square") {
			cin >> x_loc >> y_loc >> length >> brush;
			Square sq(x_loc, y_loc, length, length, brush);
			cout << "Area: " << sq.GetArea() << endl;
			cout << "Perimeter: " << sq.GetPerimeter() << endl;
			sq.Draw(canvas_width, canvas_height);
			cout << endl;
		}
		
		else if (button == "quit") {
			break;
		}
	}
	return 0;
}
