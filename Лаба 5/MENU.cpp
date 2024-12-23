#include <iostream>

void showMenu() {
    std::cout << "Program MENU:\n";
    std::cout << "1. News of the Day\n";
    std::cout << "2. Joke of the Week\n";
    std::cout << "3. About Author!\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter the appropriate number and click ENTER." << std::endl;
}

int main() {
    int choice;
    do {
        showMenu();
        std::cout << "> ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "News of the Day: Today is a sunny day!\n";
            break;
        case 2:
            std::cout << "Joke of the Week: Why don't scientists trust atoms? Because they make up everything!\n";
            break;
        case 3:
            std::cout << "About Author: This program was created by a talented developer.\n";
            break;
        case 0:
            std::cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

