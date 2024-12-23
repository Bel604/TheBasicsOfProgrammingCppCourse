#include <iostream>
#include <vector>
#include <limits>

int main() {
    int N;
    std::cout << "Enter the number of elements in the sequence: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "The size of the sequence must be a natural number!" << std::endl;
        return 1;
    }

    std::vector<int> sequence(N);
    int max_value = std::numeric_limits<int>::min();

    for (int i = 0; i < N; ++i) {
        std::cout << "a[" << (i + 1) << "]= ";
        std::cin >> sequence[i];

        if (sequence[i] > max_value) {
            max_value = sequence[i];
        }
    }

    std::cout << "MAX= " << max_value << std::endl;
    return 0;
}

