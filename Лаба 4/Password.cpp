#include <iostream>
using namespace std;

int main() {
    // Задаємо правильний пароль
    const char PASSWORD[] = { 'F', 'R', '-', '3', '3', '-', 'D', '0', 'M' };
    char input;

    cout << "To open the door input the password one by one symbol.\n";

    cout << "Input symbol 1: ";
    cin >> input;
    if (input != PASSWORD[0]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "Input symbol 2: ";
    cin >> input;
    if (input != PASSWORD[1]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "Input symbol 3: ";
    cin >> input;
    if (input != PASSWORD[2]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "Input symbol 4: ";
    cin >> input;
    if (input != PASSWORD[3]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "Input symbol 5: ";
    cin >> input;
    if (input != PASSWORD[4]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "Input symbol 6: ";
    cin >> input;
    if (input != PASSWORD[5]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "Input symbol 7: ";
    cin >> input;
    if (input != PASSWORD[6]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "Input symbol 8: ";
    cin >> input;
    if (input != PASSWORD[7]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "Input symbol 9: ";
    cin >> input;
    if (input != PASSWORD[8]) { cout << "The password is wrong, try again.\n"; return 0; }

    cout << "The door is open! You are free!\n";

    return 0;
}

