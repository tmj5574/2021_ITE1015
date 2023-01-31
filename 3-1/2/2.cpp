#include <iostream>

using namespace std;

int main(){
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	string str3 = str1+str2;
	cout << str3 << endl;
	cout << str3[0] << endl;
	cout << str3[(str3.length())-1]<<endl;
	return 0;
}
