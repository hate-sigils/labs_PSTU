//1) Реализовать с использованием массива двунаправленное кольцо
//(просмотр возможен в обе стороны, от последнего элемента можно перейти к первому).
//2) Распечатать полученный массив, начиная с К-ого элемента и до К-1 ( по кольцу влево).
//3) Добавить в кольцо первый и последний элементы.
//4) Распечатать полученный массив, начиная с К-ого элемента (и до К+1 по кольцу вправо).
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int len = 50;
    srand(time(0)); // инициализация генератора случайных чисел
    int a[len];
    int range_min = -10000;
    int range_max = 10000;
    for (int i = 0; i < 50; i++)
    {
        a[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
        cout << a[i] << " ";
    }
    cout << endl;
    int k;
    cout << "Введите k: ";
    cin >> k;
    int index;
    index = k - 1;
    for (int i = 0; i < len; i++) {//влево
        cout << a[index] << " ";
        index = (index - 1 + len) % len;
    }
    int first = a[0];
    int last = a[len - 1];

    a[len] = first;//первый в конце    
    a[len + 1] = last;//последний в начало
    len+=2;          

    index = k;
    for (int i = 0; i < len; i++) {     //c катого элемента впарво
        cout << a[index] << " ";
        index = (index + 1) % len;  
    }

    return 0;
}