#include <iostream>
#include <atoi>

using namespace std;

int main(int argc, char** argv){
	string str="";
	int num = 0;

	for(int i = 1; i < argc; i++){
		if(atoi(argv[i])==0){
			str += argv[i];}
		else{
			num += atoi(argv[i]);
		}
	}

	cout << str << endl;
	cout << num << endl;

	return 0;
}

