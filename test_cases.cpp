#include <iostream>
#include <vector>
#include <string>

#include "edit_distance.h"
#include "spell_checker.h"
#include "optimized.h"

void runTask1()
{
    std::string s1, s2;
    std::cout << "Task 1: Standard Edit Distance\n";
    std::cout << "Enter string 1: ";
    std::cin >> s1;
    std::cout << "Enter string 2: ";
    std::cin >> s2;
    std::cout << "Edit Distance: " << EditDistance(s1, s2) << "\n";
}

void runTask2()
{
    std::string s1, s2;
    int Ci, Cd, Cs;
    std::cout << "\nTask 2: Weighted Edit Distance\n";
    std::cout << "Enter string 1: ";
    std::cin >> s1;
    std::cout << "Enter string 2: ";
    std::cin >> s2;
    std::cout << "Enter cost of Insertion (Ci): ";
    std::cin >> Ci;
    std::cout << "Enter cost of Deletion (Cd): ";
    std::cin >> Cd;
    std::cout << "Enter cost of Substitution (Cs): ";
    std::cin >> Cs;
    std::cout << "Weighted Edit Distance: " << EditDistance(s1, s2, Ci, Cd, Cs) << "\n";
}

void runTask3()
{
    std::string input;
    int Ci, Cd, Cs, n;
    std::vector<std::string> dict;

    std::cout << "\nTask 3: Spell Checker\n";
    std::cout << "Enter the word to check: ";
    std::cin >> input;

    std::cout << "Enter number of words in dictionary: ";
    std::cin >> n;
    std::cout << "Enter dictionary words:\n";
    for (int i = 0; i < n; ++i)
    {
        std::string word;
        std::cin >> word;
        dict.push_back(word);
    }

    std::cout << "Enter cost of Insertion (Ci): ";
    std::cin >> Ci;
    std::cout << "Enter cost of Deletion (Cd): ";
    std::cin >> Cd;
    std::cout << "Enter cost of Substitution (Cs): ";
    std::cin >> Cs;

    std::vector<std::string> result = SuggestWords(input, dict, Ci, Cd, Cs);

    std::cout << "Closest matches:\n";
    for (const std::string &word : result)
        std::cout << word << " ";
    std::cout << "\n";
}

void runTask4()
{
    std::string s1, s2;
    std::cout << "\nTask 4: Optimized Edit Distance (Space Reduced)\n";
    std::cout << "Enter string 1: ";
    std::cin >> s1;
    std::cout << "Enter string 2: ";
    std::cin >> s2;
    std::cout << "Optimized Edit Distance: " << OptimizedEditDistance(s1, s2) << "\n";
}
