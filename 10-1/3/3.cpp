#include <iostream>
#include <vector>

class B
{
public:
	virtual ~B() {}
};
class C : public B
{
public:
	void test() { std::cout << "C::test()" << std::endl; }
};
class D : public B
{
public:
	void test() { std::cout << "D::test()" << std::endl; }
};

int main() {
	std::string button;
	std::vector<B*> arr;
	std::vector<std::string> str;

	while (true) {
		std::cin >> button;

		if (button == "B") {
			arr.push_back(new B);
			str.push_back(button);
		}

		else if (button == "C") {
			arr.push_back(new C);
			str.push_back(button);
		}

		else if (button == "D") {
			arr.push_back(new D);
			str.push_back(button);
		}

		else if (button == "0") {
			break;
		}
	}

	for (int i = 0; i < arr.size(); i++) {
		if (str[i] == "B") {
			continue;
		}

		else if (str[i] == "C") {
			C* pc = dynamic_cast<C*>(arr[i]);
			pc->test();
		}

		else if (str[i] == "D") {
			D* pd = dynamic_cast<D*>(arr[i]);
			pd->test();
		}
	}


	for (int i = 0; i < arr.size(); i++) {
		delete arr[i];
		}

	return 0;


}
