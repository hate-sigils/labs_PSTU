#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int len = 16;
	char** a = new char*[len];
    for (int i = 0; i < len; i++) {
        a[i] = new char[i + 2];//+2 потому что новый символ и еще \0
        for (int j = 0; j <= i; j++) {
            a[i][j] = 'a' + j; 
        }
        a[i][i + 1] = '\0'; 
    }
    for(int i = 0; i<len; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int max_index = 0;
    int max_len = strlen(a[0]);
    for (int i = 1; i < len; i++) {
        int tmp = strlen(a[i]);
        if (tmp > max_len) {
            max_len = tmp;
            max_index = i;
        }
    }
    delete[] a[max_index];
    for (int i = max_index; i < len - 1; i++) {//сдвиг влево
        a[i] = a[i + 1];
    }
    len--;
    char** ans = new char*[len];
    for (int i = 0; i < len; i++) {
        ans[i] = a[i];
    }
    delete[] a;
    cout << "Ответ: " << endl;
    for(int i = 0; i < len; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
     for (int i = 0; i < len; i++) {
        delete[] ans[i];
    }
    delete[] ans;
    return 0;
}