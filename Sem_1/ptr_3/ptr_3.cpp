#include <iostream> 
using namespace std;
int main(){ 
    float a, b, sum; 
    cin >> a >> b; 
    float *ptr1 = &a; 
    float *ptr2 = &b; 
    sum = *ptr1 + *ptr2; 
    cout << "a + b = " << sum << endl; 
    return 0;
}