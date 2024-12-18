#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    // 1. Зчитуємо значення змінних A, B і C з клавіатури
    cout << "Enter value for A: ";
    cin >> A;
    cout << "Enter value for B: ";
    cin >> B;
    cout << "Enter value for C: ";
    cin >> C;

    // 2. Виводимо початкові значення змінних
    cout << "A=" << A << " B=" << B << " C=" << C << endl;

    // 3. Міняємо місцями значення змінних
    int temp = A;
    A = C;
    C = B;
    B = temp;

    // 4. Виводимо нові значення змінних
    cout << "After swapping: A=" << A << " B=" << B << " C=" << C << endl;

    return 0;
}

