#include <iostream>
#include "list.h"

using namespace std;

int main() {
	int array[5] = { 1,2,4,5,6 };
	int array2[4] = { 1,3,5,7 };
	List<int> li(array, 5);
	List<int> li2(array2, 4);

	//implement here 
	int idx_i = 0;
	int idx_j = 0;
	int idx = 0;
	int plus = 0;
	for (int i = idx_i; i < 5; i++){
		for (int j = idx_j; j < 4; j++) {
			if (array[i] > array2[j]) {
				idx = i + plus;
				li.insert_at(idx, array2[j]);
				plus++;
				idx_i = i + 1;
				idx_j = j + 1;
				break;
			}
		}
	}
	idx += 2;
	li.insert_at(idx, array2[3]);

	cout << li << endl; // 1,1,2,3,4,5,5,6,7 

	return 0;
}

