#include <iostream>
#include <cmath>

using namespace std;

// Функція для конвертації букви (a-h) в число (1-8)
int charToIndex(char c) {
    return c - 'a' + 1;
}

// Функція перевірки загрози клітинки королем
bool isKingThreatening(int x1, int y1, int x2, int y2) {
    // Король загрожує, якщо різниця по X і Y не більше 1
    return abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1;
}

int main() {
    string start, target;
    cout << "Input the King's start position: ";
    cin >> start;
    cout << "Input position to check: ";
    cin >> target;

    // Конвертація координат
    int x1 = charToIndex(start[0]);
    int y1 = start[1] - '0';
    int x2 = charToIndex(target[0]);
    int y2 = target[1] - '0';

    // Перевірка на коректність вводу
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
        cout << "Mistake: incorrect coordinates!" << endl;
        return 1;
    }

    // Перевірка загрози
    if (isKingThreatening(x1, y1, x2, y2)) {
        cout << "The king threatens the cage " << target << "!" << endl;
    }
    else {
        cout << "The king DOESN'T threaten the cage " << target << "." << endl;
    }

    return 0;
}

