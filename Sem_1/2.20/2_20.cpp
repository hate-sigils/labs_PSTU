#include <iostream> 
#include <cmath>
using namespace std; 
int main(){
    int n, S, a; 
    bool flag = false;
    cin >> n >> S; 
    for(int i = 1; i <= n; i++){
        a = sin(n + (i/n));
        if (a == S){
            flag == true; 
            cout << "число существует в последовательности" << endl; 
        }
    }
    if (flag == false){
        cout << "числа не существует в последовательности" << endl; 
    }
    return 0;
}