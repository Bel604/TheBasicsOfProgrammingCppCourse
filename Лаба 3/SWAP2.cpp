#include <iostream>
using namespace std;

int main() {
    int A, B;

    // 1. Зчитуємо значення змінних A і B з клавіатури
    cout << "Enter value for A: ";
    cin >> A;
    cout << "Enter value for B: ";
    cin >> B;

    // 2. Виводимо початкові значення змінних
    cout << "A=" << A << " B=" << B << endl;

    // 3. Міняємо місцями значення змінних
    int temp = A;
    A = B;
    B = temp;

    // 4. Виводимо нові значення змінних
    cout << "After swapping: A=" << A << " B=" << B << endl;

    return 0;
}

