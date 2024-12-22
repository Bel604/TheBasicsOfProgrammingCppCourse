// Програма "ABS"
#include <iostream>
using namespace std;

int main() {
    // a. Запит дійсного числа
    double x,y;
    cout << "Input real number X: ";
    cin >> x;
    cout << "Input real number Y: ";
    cin >> y;

    // b. Обчислення модуля
    double abs_x;
    if (x < 0) {
        abs_x = -x;
    }
    else {
        abs_x = x;
    }
    double abs_y;
    if (y < 0) {
        abs_y = -y;
    }
    else {
        abs_y = y;
    }

    // c. Виведення результату
    cout << "| X | = | " << x << " | = " << abs_x << endl;
    cout << "| Y | = | " << y << " | = " << abs_y << endl;

    return 0;
}

