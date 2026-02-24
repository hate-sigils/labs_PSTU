#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;
const int N = 10,M = 10;
void submatrix(int a[N][M], int *max, int *row, int *col) {
    *max = -99999;
    *row = 0;
    *col = 0;
    for(int i = 0; i<=N - 3; i++){
        for(int j = 0; j<=M-3; j++){
            int count = 0;
            for(int k = i; k<i+3; k++){
                for(int d = j; d<j+3; d++){
                    count += a[k][d];
                }
            }
            if(count>*max){
                *max=count; 
                *row = i;
                *col = j;}
        }
     }
}

int main()
{
    srand(time(0));
    int a[N][M];
    int range_min = -10000;
    int range_max = 10000;
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j<M; j++){
            a[i][j] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
            cout << a[i][j] << "\t";
        }
    }
    
    cout << endl;
    int max, row, col;
    submatrix(a, &max, &row, &col);
    cout << "подматрица 3x3 с максимальной суммой:" << endl;
    cout << "сумма: " << max << endl;
    for(int i = row; i < row + 3; i++) {
        for(int j = col; j < col + 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}