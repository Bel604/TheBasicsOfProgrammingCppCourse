#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;

    // 1. Зчитуємо значення змінних A, B, C і D з клавіатури
    cout << "Enter value for A: ";
    cin >> A;
    cout << "Enter value for B: ";
    cin >> B;
    cout << "Enter value for C: ";
    cin >> C;
    cout << "Enter value for D: ";
    cin >> D;

    // 2. Виводимо початкові значення змінних
    cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;

    // 3. Міняємо місцями значення змінних
    int temp = A;
    A = D;
    D = C;
    C = B;
    B = temp;

    // 4. Виводимо нові значення змінних
    cout << "After swapping: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;

    return 0;
}
