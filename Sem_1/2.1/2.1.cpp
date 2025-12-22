#include <iostream>
using namespace std;
main(){
    int n; int sum = 0;
    cin >> n;
    if (n <= 0)
    {
        cout << "0 не натуральное число" <<endl;
    }
    else{
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
    cout << sum << endl;}
}