#include <iostream>
#include <vector>
#include "animal.h"

using namespace std;

int main() {
	string type;
	int age_;
	string name_;
	int stripes_;
	string toy_;
	vector<Animal*> animals;

	while (true) {
		cin >> type;

		if (type == "z") {
			cin >> name_ >> age_ >> stripes_;
			animals.push_back(new Zebra(name_, age_, stripes_));
		}

		else if (type == "c") {
			cin >> name_ >> age_ >> toy_;
			animals.push_back(new Cat(name_, age_, toy_));
		}

		else if (type == "0") {
			break;
		}
	}

	for (int i = 0; i < animals.size(); i++) {
		animals[i]->printInfo();
	}

	for (int i = 0; i < animals.size(); i++) {
		delete animals[i];
	}
	return 0;



	}

