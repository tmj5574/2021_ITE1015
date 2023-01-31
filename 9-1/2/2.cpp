#include <iostream>
#include <vector>
using namespace std;

class A {
public:
	virtual string getTypeInfo() {
		return "This is an instance of class A";
	}
};

class B : public A {
public:
	string getTypeInfo() {
		return "This is an instance of class B";
	}
};

class C : public B {
	string getTypeInfo() {
		return "This is an instance of class C";
	}
};

void printObjectTypeInfo1(A* object) {
	cout << object->getTypeInfo() << endl;
}

void printObjectTypeInfo2(A& object) {
	cout << object.getTypeInfo() << endl;
}

int main() {
	string cs;
	vector<A*> arr;
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
			printObjectTypeInfo1(arr[i]);
			printObjectTypeInfo2(*arr[i]);
		}

		for (int i = 0; i < arr.size(); i++) {
			delete arr[i];
		}
	

}
