#include <iostream>
using namespace std;
int main(){
    int a = 2, row = 4, col = 3; 

    int *arr = new int[a*row*col];

    //допустим заполним массив значениями 2i+3j+5k 
    for (int i = 0; i < a; i++){
        for (int j = 0; j < row; j++){
            for (int k =0; k < col; k++){
                int index = (i * row + j) * col + k;
                arr[index] = 2*i + 3*j + 5*k;
            } 
        }
    }
    for (int i = 0; i < a; i++){
        for (int j =0; j< row; j++){
            for (int k =0; k < col; k++){
                int index = (i * row + j) * col + k;
                cout << arr[index] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    delete[] arr; 
    return 0;
}