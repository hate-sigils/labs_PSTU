#include <iostream>  
using namespace std;
int main(){ 
    int n; 
    float a, max, min; 
    float *ptr_max = &max; 
    float *ptr_min = &min;
    cin >> n; 
    cin >> *ptr_max; 
    *ptr_min = *ptr_max; 
    for (int i = 1; i < n; i++){
        cin >> a; 
        if(a > *ptr_max) {*ptr_max = a;}
        if (a < *ptr_min) {*ptr_min = a;}
    }
    cout << "max = " << *ptr_max << " min = " << *ptr_min << endl;
}