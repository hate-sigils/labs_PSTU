#include <iostream>
using namespace std;

// Рекурсивная функция для перемещения n дисков
// с стержня from на стержень to, используя aux как вспомогательный
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        // Базовый случай: один диск просто переносим
        cout << "Move disk 1 from " << from << " to " << to << endl;
    } else {
        // Переносим n-1 дисков с from на aux, используя to как вспомогательный
        hanoi(n - 1, from, aux, to);
        // Переносим самый большой диск с from на to
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        // Переносим n-1 дисков с aux на to, используя from как вспомогательный
        hanoi(n - 1, aux, to, from);
    }
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of disks must be positive." << endl;
        return 1;
    }

    // Запускаем процесс: все диски с A перенести на C, используя B как промежуточный
    hanoi(n, 'A', 'C', 'B');

    return 0;
}