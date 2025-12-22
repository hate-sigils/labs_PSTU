#include <iostream> 
using namespace std; 
int main(){
    int n, S; 
    cout << "введите количество слагаемых: "; 
    cin >> n; 
    for (int i = 1; i <= n; i++){
        if (i%2==0){
            S+=i;
        } 
        else{
            S-=i; 
        } 
    }
    cout << "S = " << S << endl; 
}