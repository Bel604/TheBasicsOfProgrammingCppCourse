#include <iostream>
using namespace std;

int main() {
    int day;

    // Запитуємо у користувача число
    cout << "Input the number from 1 to 7: ";
    cin >> day;

    // Визначаємо день тижня
    switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Wrong number! Input number from 1 to 7." << endl;
    }

    return 0;
}

