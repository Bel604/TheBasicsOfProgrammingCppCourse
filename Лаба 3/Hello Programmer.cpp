#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    string place;

    // 1. Питаємо ім'я
    cout << "What is your name? = ";
    cin >> name;

    // 2. Питаємо вік
    cout << "How old are you? = ";
    cin >> age;
    cin.ignore(); // Очищаємо буфер для коректного зчитування рядка

    // 3. Питаємо місце навчання
    cout << "Where are you studying? = ";
    getline(cin, place);

    // 4. Виводимо вітальне повідомлення
    cout << "Hello, " << name << "!" << endl;
    cout << "Hi, you're just " << age << ", and you are talking to computer!" << endl;
    cout << place << " will be proud of you!" << endl;

    return 0;
}

