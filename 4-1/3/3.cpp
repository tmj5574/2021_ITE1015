#include <iostream>

using namespace std;

void swapInt(int& n1, int& n2){
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

void swapString(std::string& s1, std::string& s2){
	std::string temp;
	temp = s1;
	s1 = s2;
	s2 = temp;
}

int main(){
	int n1, n2;
	string s1, s2;
	cin >> n1 >> n2 >> s1 >> s2;
	cout << "n1: " << n1 << ", ";
	cout << "n2: " << n2 << ", ";
	cout << "s1: " << s1 << ", ";
	cout << "s2: " << s2 << endl;

	swapInt(n1,n2);
	swapString(s1, s2);

	cout << "n1: " << n1 << ", ";
	cout << "n2: " << n2 << ", ";
	cout << "s1: " << s1 << ", ";
	cout << "s2: " << s2 << endl;


	return 0;
}

