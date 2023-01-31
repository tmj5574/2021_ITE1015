#include <iostream>
#include <cstdlib>
#include "minmax.h"

using namespace std;

int main(int argc, char **argv){
	int *arr = new int[argc];
	for(int i = 1; i < argc ; i++){
		arr[i-1] = atoi(argv[i]);
	}
	int min, max;
	getMinMax(arr,argc, min, max);
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	delete[] arr;

	return 0;
}

	
