#include <iostream>
using namespace std;

int main() {
    cout << "Enter a sequence of integers. Zero is the end sign." << endl;

    int num, sum = 0, index = 1;

    while (true) {
        cout << "a[" << index << "]= ";
        cin >> num;

        if (num == 0) {
            break;
        }

        sum += num;
        index++;
    }

    cout << "SUM=" << sum << endl;

    return 0;
}
