#include <iostream>
#include <vector>

using namespace std;

class A {
public:
	virtual string test() {
		return "A::test()";
	}
};

class B : public A {
public:
	string test() {
		return "B::test()";
	}
};

class C : public B {
public:
	string test() {
		return "C::test()";
	}
};

int main() {
	string cs;
	vector <A*> arr;

	while (true) {
		cin >> cs;
		if (cs == "A") {
			
			arr.push_back(new A);
		}

		else if (cs == "B") {
			
			arr.push_back(new B);
		}
		
		else if (cs == "C") {
			
			arr.push_back(new C);
		}

		else if (cs == "quit") {
			break;
		}
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i]->test() << endl;
	}

	for (int i = 0; i < arr.size(); i++) {
		delete arr[i];
	}
		return 0;
}
