void getMinMax(int* arr, int len, int&min, int& max){
	min = arr[0]; max = arr[0];
	for(int i = 0; i < len; i++){
		if(arr[i]>=max){
			max = arr[i];}
		else if(arr[i]<=min){
			min = arr[i];}
	}
}
		

