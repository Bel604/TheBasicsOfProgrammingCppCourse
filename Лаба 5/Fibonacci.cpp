#include <iostream>

// Функція для обчислення числа Фібоначчі
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N;
    std::cout << "Enter the Fibonacci number index N: ";
    std::cin >> N;

    if (N < 0) {
        std::cout << "N must be a non-negative integer!" << std::endl;
        return 1;
    }

    std::cout << "Fibonacci(" << N << ") = " << fibonacci(N) << std::endl;
    return 0;
}

