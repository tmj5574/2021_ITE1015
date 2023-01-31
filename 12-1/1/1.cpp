#include <iostream>

using namespace std;

template <typename T>

void myswap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int num1;
	int num2;
	double d_num1;
	double d_num2;
	string str1;
	string str2;

	cin >> num1 >> num2;
	myswap<int>(num1, num2);
	cout << "After calling myswap(): " << num1 << " " << num2 << endl;
	 
	cin >> d_num1 >> d_num2;
	myswap<double>(d_num1, d_num2);
	cout << "After calling myswap(): " << d_num1 << " " << d_num2 << endl;

	cin >> str1 >> str2;
	myswap<string>(str1, str2);
	cout << "After calling myswap(): " << str1 << " " << str2 << endl;

	return 0;

}
