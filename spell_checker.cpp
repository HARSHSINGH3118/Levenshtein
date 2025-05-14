#include "spell_checker.h"
#include "edit_distance.h"
#include <climits>
#include <vector>
#include <string>

std::vector<std::string> SuggestWords(const std::string &input, const std::vector<std::string> &dictionary, int Ci, int Cd, int Cs)
{
    int minDist = INT_MAX;
    std::vector<std::string> suggestions;

    for (const std::string &word : dictionary)
    {
        int dist = EditDistance(input, word, Ci, Cd, Cs);
        if (dist < minDist)
        {
            minDist = dist;
            suggestions.clear();
            suggestions.push_back(word);
        }
        else if (dist == minDist)
        {
            suggestions.push_back(word);
        }
    }

    return suggestions;
}
