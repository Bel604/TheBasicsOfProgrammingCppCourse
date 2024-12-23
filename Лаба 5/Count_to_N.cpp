#include <iostream>

int main() {
    int N;
    std::cout << "Enter a natural number N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "N must be a natural number greater than 0!" << std::endl;
        return 1;
    }

    std::cout << "I can only count to N:\n";
    for (int i = 1; i <= N; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}

