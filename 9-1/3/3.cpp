#include <iostream>
#include <vector>

using namespace std;

class A {
public:
	A(int num) {
		memberA = new int;
		*memberA = num;
		cout << "new memberA" << endl;
	}
	virtual ~A() {
		delete memberA;
		cout << "delete memberA" << endl;
	}
	virtual void print() {
		cout << "*memberB " << *memberA << endl;
	}

private:
	int* memberA;
};

class B : public A {
public:
	B(double num):
		A(1){
		memberB = new double;
		*memberB = num;
		cout << "new memberB" << endl;
	}

	~B() {
		delete memberB;
		cout << "delete memberB" << endl;
	}
	virtual void print() {
		A::print();
		cout <<"*memberB " << *memberB << endl;
	}
private:
	double* memberB;
};

class C : public B {
public:
	C(string str) :
		B(1.1) {
		memberC = new string;
		*memberC = str;
		cout << "new memberC" << endl;
	}

	~C() {
		delete memberC;
		cout << "delete memberC"<<endl;
	}

	virtual void print() {
		B::print();
		cout << "*memberC " << * memberC << endl;
	}
private:
	string* memberC;
};

int main() {
	string cs;
	int num1;
	double num2;
	string str;
	vector<A*> arr;

	while (true) {
		cin >> cs;

		if (cs == "A") {
			cin >> num1;
			arr.push_back(new A(num1));
		}

		else if (cs == "B") {
			cin >> num2;
			arr.push_back(new B(num2));
		}
		else if (cs == "C") {
			cin >> str;
			arr.push_back(new C(str));
		}
		else if (cs == "quit") {
			break;
		}
	}

		for (int i = 0; i < arr.size(); i++) {
			arr[i]->print();
		}

		for (int i = 0; i < arr.size(); i++) {
			delete arr[i];
		}
		return 0;
	}
