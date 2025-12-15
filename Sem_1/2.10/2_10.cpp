#include <iostream>
using namespace std;
int main(){
    int n, firstmax, number; 
    cin >> n;
    if (n <= 0) {
        cout << "Последовательность пустая" << endl; 
        return 0;
    } 
    cin >> firstmax; 
    for(int i = 2; i <= n; i++){
        cin >> number; 
        if(number > firstmax) { firstmax = number; }
    }
    cout << "Первый максимальный элемент: " << firstmax << endl; 
    return 0;
}