#include <iostream>
using namespace std;

int main() {
    cout << "Bytes Calculator: Base size in memory" << endl;

    cout << "Size of int: \t\t" << sizeof(int) << " byte(s)" << endl;
    cout << "Size of short:  \t" << sizeof(short) << " byte(s)" << endl;
    cout << "Size of long: \t\t" << sizeof(long) << " byte(s)" << endl;
    cout << "Size of long long: \t" << sizeof(long long) << " byte(s)" << endl;
    cout << "Size of float:  \t" << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: \t" << sizeof(double) << " byte(s)" << endl;
    cout << "Size of long double: \t" << sizeof(long double) << " byte(s)" << endl;
    cout << "Size of char: \t\t" << sizeof(char) << " byte(s)" << endl;
    cout << "Size of bool: \t\t" << sizeof(bool) << " byte(s)" << endl;

    return 0;
}

