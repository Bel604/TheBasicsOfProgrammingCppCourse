#include <iostream>
using namespace std;

// Функція для малювання квадрату
void drawSquare(int size) {
    if (size < 1) {
        cout << "Size must be more 0!" << endl;
        return;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "+."; // Малюємо символ квадрату
        }
        cout << endl; // Переходимо на новий рядок після кожного рядка квадрату
    }
}

int main() {
    int size;

    cout << "Input size of square: ";
    cin >> size;

    drawSquare(size);

    return 0;
}

