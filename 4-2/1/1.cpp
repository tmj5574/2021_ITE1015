#include <iostream>

using namespace std;

void magicSquare(int **arr, int size){
    int i = 0;
    int j = (int)size/2;
    int num = 1;

    while(num <= size*size){


        if(num%size == 0){
            i++;
            arr[i][j] = num;
        }

        if(i<0){
            i = (size - 1);
            arr[i][j] = num;
        }

        if(j>=size){
            j = 0;
            arr[i][j] = num;
        }

        else{
            arr[i][j] = num;
        }

        i--;
        j++;
        num++;

    }
}

int main(){

    int N;
    cin >> N;

    if(N%2==0 || N<3){
        return 0;
    }

    int** arr =  new int*[N];
    for (int i = 0; i<N; i++){
        arr[i] = new int[N];
    }
    
    magicSquare(arr,N);


    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
   
}

    for(int i = 0; i < N; i++){
    delete[] arr[i];
    }
    delete[] arr;


return 0;
}
