#include <iostream> 
using namespace std; 
int main(){
    int n;
    cout << "Введите изначальное число: "; 
    cin >> n;
    int *ptr = &n; 
    cout << "Введите измененное число: "; 
    cin >> *ptr; 
    cout << n << endl;
    return 0;
}