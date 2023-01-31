#include <iostream>
#include "my_container.h"

using namespace std;

int main() {
	int size1;
	int size2;
	int size3;

	cin >> size2;
	MyContainer<double>two(size2);
	cin >> two;
	cout << two;

	cin >> size3;
	MyContainer<string>thr(size3);
	cin >> thr;
	cout << thr;

	cin >> size1;
	MyContainer<int>one(size1);
	cin >> one;
	cout << one;

	



	return 0;
}
