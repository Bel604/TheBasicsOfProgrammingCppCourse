#include <iostream>
using namespace std;

int main() {
    cout << "Enter a sequence of integers. Zero is the end sign." << endl;

    int num, oddCount = 0, index = 1;

    while (true) {
        cout << "a[" << index << "]= ";
        cin >> num;

        if (num == 0) {
            break;
        }

        if (num % 2 != 0) {
            oddCount++;
        }

        index++;
    }

    cout << "Amount of odd numbers: " << oddCount << endl;

    return 0;
}

