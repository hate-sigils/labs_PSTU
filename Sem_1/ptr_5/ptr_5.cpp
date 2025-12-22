#include <iostream>  
using namespace std;
int main(){
    int n, factorial = 1; 
    cin >> n; 
    int *ptr1 = &n; 
    int *ptr_fact = &factorial; 
    for (int i = 1; i <= *ptr1; i++) {
        *ptr_fact *= i;
    }
    cout << factorial; 
}