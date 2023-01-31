#include <iostream>
#include "canvas.h"
#include <vector>
#include <string>
using namespace std;

int main()
{
	int canvas_width;
	int canvas_height;
	int width;
	int height;
	int distance;
	int x_loc;
	int y_loc;
	char brush;

	string button;
	string shape;


	vector<Shape*> sh;
	vector<string> strs;
	int vec = 0;
	int vec2 = 0;
	int del;

	cin >> canvas_width >> canvas_height;
	Canvas c(canvas_height, canvas_width);
	c.Print();

	while (true) {

		cin >> button;
		if (button == "add") {
			cin >> shape;

			if (shape == "rect") {
				cin >> x_loc >> y_loc >> width >> height >> brush;

				sh.push_back(new Rectangle(x_loc, y_loc, width, height, brush));
				sh[vec]->Draw(canvas_width, canvas_height);
				string str = to_string(vec2) + " " + shape + " " + to_string(x_loc) + " " + to_string(y_loc) + " " + to_string(width) + " "
					+ to_string(height) + " " + brush;
				strs.push_back(str);
				vec++;
				vec2++;
			}

			else if (shape == "tri_down") {
				cin >> x_loc >> y_loc >> height >> brush;
				sh.push_back(new DownTriangle(x_loc, y_loc, height, height, brush));
				sh[vec]->Draw(canvas_width, canvas_height);
				string str = to_string(vec2) + " " + shape + " " + to_string(x_loc) + " " + to_string(y_loc) + " " + to_string(height) + " "
					+ brush;
				strs.push_back(str);
				vec++;
				vec2++;

			}

			else if (shape == "tri_up") {
				cin >> x_loc >> y_loc >> height >> brush;
				sh.push_back(new UpTriangle(x_loc, y_loc, height, height, brush));
				sh[vec]->Draw(canvas_width, canvas_height);
				string str = to_string(vec2) + " " + shape + " " + to_string(x_loc) + " " + to_string(y_loc) + " " + to_string(height) + " "
					+ brush;
				strs.push_back(str);
				vec++;
				vec2++;
			}

			else if (shape == "diamond") {
				cin >> x_loc >> y_loc >> distance >> brush;
				sh.push_back(new Diamond(x_loc, y_loc, distance, distance, brush));
				sh[vec]->Draw(canvas_width, canvas_height);
				string str = to_string(vec2) + " " + shape + " " + to_string(x_loc) + " " + to_string(y_loc) + " " + to_string(distance) + " "
					+ brush;
				strs.push_back(str);
				vec++;
				vec2++;
			}
		}
		else if (button == "draw") {
			c.Print();
		}
		else if (button == "dump") {
			for (int i = 0; i < strs.size(); i++) {
				cout << strs[i] << endl;
			}
		}
		else if (button == "resize") {
			cin >> canvas_width >> canvas_height;
			c.Resize(canvas_width, canvas_height);
			c.Clear();
			for (int i = 0; i < sh.size(); i++) {

				sh[i]->Draw(canvas_width, canvas_height);
			}
		}

		else if (button == "delete") {
			cin >> del;

			if (del < 0 || del >= vec2) {
				continue;
			}

			strs.erase(strs.begin() + del);
			vec2--;

			for (int i = 0; i < strs.size(); i++) {
				strs[i][0] = (char)(i + 48);
			}


			sh.erase(sh.begin() + del);

			c.Clear();


			for (int i = 0; i < sh.size(); i++) {

				sh[i];
				sh[i]-> Draw(canvas_width, canvas_height);
			}

			vec -= 2;
		}
		else if (button == "quit") {
				break;
		}

		}

		for (int i = 0; i < sh.size(); i++) {
			delete sh[i];
		}

	
	


	return 0;
}

