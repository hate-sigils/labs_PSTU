#include <iostream> 
using namespace std; 
int main(){
    int n, S, pr; 
    bool flag = false;
    cin >> n >> S; 
    while (n > 0){
        pr = n % 10;  
        if(pr == S){
            flag = true;
            break;
        }
        n /= 10; 
    }
    if (flag == false){
        cout << "число S не входит в n" << endl; 
    }
    else{
        cout << "число S входит в n" << endl;
    }
    return 0;
} 