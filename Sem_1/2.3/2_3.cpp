#include <iostream>
using namespace std;
main(){
   int s = 0, n;   
   cin >> n;
   for (int i = 1; i<= n; i++)
   {
    int q = 1;
    for (int w = i; w <= 2*i; w++){
        q = q * w;
    }
    s += q;
   }
   
   cout<<s<<endl;
}