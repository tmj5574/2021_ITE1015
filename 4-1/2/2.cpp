#include <iostream>

using namespace std;

int main(){
	int num;
	cin >> num;

	int* arr = new int[num];

	for (int i = 0; i < num; i++){
		cin >> arr[i];
	}

	int user_num;
	int count = 0;
	cin >> user_num;

	for (int i = 0; i<num; i++){
		if (arr[i]==user_num){
			count++;
		}
	}

	cout << "target value: "<< user_num << endl;
	cout << "target count: "<< count << endl;

	delete[] arr;
	return 0;
}
