#include <iostream> 
using namespace std; 
int main(){
    int n, S;
    cout << "Введите первое число: "; 
    cin >> n;
    cout << "Введите второе число: "; 
    cin >> S;
    int *ptr1 = &n; 
    int *ptr2 = &S; 
    int tmp = *ptr1; 
    *ptr1 = *ptr2; 
    *ptr2 = tmp;
    cout << n << S << endl;

    return 0;
}