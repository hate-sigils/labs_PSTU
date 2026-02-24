// первый способ - массив указателей 
#include <iostream>
using namespace std;
int main(){
    int a = 2, row = 4, col = 3; 


    int *** arr = new int**[a];
    for (int i = 0; i < a; i++){
        arr[i] = new int*[row];
    }

    for (int i = 0; i < a; i++){
        for (int j = 0; j < row; j++){
            arr[i][j] = new int[col];
        }
    }

    for (int i = 0; i < a; i++){
        for (int j = 0; j < row; j++){
            delete[] arr[i][j];
        }
    }

    for (int i = 0; i < a; i++){
        delete[] arr[i];
    }
    delete[] arr;
    
}