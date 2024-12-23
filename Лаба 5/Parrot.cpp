#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Parrot2: Input text (entrance: Bye, Good Bye, Farewell)\n";

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, input);

        if (input == "Bye" || input == "Good Bye" || input == "Farewell") {
            break;
        }

        std::cout << input << std::endl;
    }

    std::cout << "The programme is over. Good Bye!" << std::endl;
    return 0;
}

