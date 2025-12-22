#include <iostream> 
using namespace std; 
int main(){
    int n, tmp, S=0; 
    cin >> n; 
    while(n > 0)
    {
        tmp = n%10; 
        S =  (S*10) + tmp;
        n /= 10;
    }
    cout << S << endl;
}