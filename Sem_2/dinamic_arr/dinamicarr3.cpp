#include <iostream>
using namespace std;
int main(){
    int a = 2, row = 4, col = 3; 

    int* data = new int[a * row * col];
    int*** arr = new int**[a];

    for (int i = 0; i < a; i++){
        arr[i] = new int*[row];
        for (int j = 0; j < row; j++){
            arr[i][j] = data + (i*row + j) * col; 
        }
    }

    for (int i = 0; i < a; i++){
        for (int j = 0; j < row; j++){
            for (int k = 0; k < col; k++){
                arr[i][j][k] = 2*i + 3*j + 5*k + 5;
            }
        }
    }

    for (int i = 0; i < a; i++){
        for (int j =0; j< row; j++){
            for (int k =0; k < col; k++){
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    for (int i = 0; i < a; i++){
        delete[] arr[i];
    }
    delete[] arr;
    delete[] data;
    return 0;
}