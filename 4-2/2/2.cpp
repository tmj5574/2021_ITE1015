#include <iostream>
using namespace std;

void change(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void magicSquare_even(int** arr, int size){

    for (int i = 0; i < size / 4; i++){
        int chg1 = size/4;
        int chg2 = size - size/4 -1;   
        for(int j = 0; j<size/2; j++){
            change(&arr[i][chg1],&arr[size-1-i][chg2]);
            change(&arr[chg1][i], &arr[chg2][size-1-i]);
            chg1++;
            chg2--;
        }
    }
}

int main(){
    int size;
    cin >> size;

    if (size % 4 != 0){
        return 0;
    }
    
    int** arr = new int* [size];
    for (int i = 0; i<size; i++){
        arr[i] = new int[size];
    }
    
    int num = 1;
    
     for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            arr[i][j]=num;
            num++;
        }
    }

    magicSquare_even(arr, size);

     for (int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
   
}

    for(int i = 0; i < size; i++){
    delete[] arr[i];
    }
    delete[] arr;


return 0;

    


}
