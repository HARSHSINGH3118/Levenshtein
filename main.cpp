#include <iostream>
#include "test_cases.h"

int main()
{
    int choice;
    do
    {
        std::cout << "\n==== Levenshtein Distance Menu ====\n";
        std::cout << "1. Task 1: Standard Edit Distance\n";
        std::cout << "2. Task 2: Weighted Edit Distance\n";
        std::cout << "3. Task 3: Spell Checker\n";
        std::cout << "4. Task 4: Optimized Edit Distance\n";
        std::cout << "0. Exit\nChoose an option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            runTask1();
            break;
        case 2:
            runTask2();
            break;
        case 3:
            runTask3();
            break;
        case 4:
            runTask4();
            break;
        case 0:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid option!\n";
            break;
        }
    } while (choice != 0);
    return 0;
}
