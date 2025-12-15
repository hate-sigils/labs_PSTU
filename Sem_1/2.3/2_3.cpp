#include <iostream>
using namespace std;
main(){
   int s = 0, n, tmp;   
   cin >> n;
   for (int i = 1; i<= n; i++)
   {
    tmp = 1;
    for (int j = i; j <= 2*i; j++){
        tmp *= j;
    }
    s += tmp;
   }
   
   cout<<s<<endl;
}