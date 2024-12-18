#include <iostream>
using namespace std;

int main() {
    int result;

    // 1. Пропонуємо задумати число
    cout << "Imagine a number." << endl;
    cin.get();

    // 2. Інструкції для арифметичних операцій
    cout << "Multiply this number by 10 and push ENTER when you are ready." << endl;
    cin.get();

    cout << "Divide the result by 2." << endl;
    cin.get();

    cout << "Add imagined number to obtained result." << endl;
    cin.get();

        // 3. Питаємо результат
    cout << "What a result? = ";
    cin >> result;

    // 4. Відгадуємо задумане число
    int guessedNumber = result/6;
    cout << "Your number imagined is: " << guessedNumber << endl;

    return 0;
}

