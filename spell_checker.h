#ifndef SPELL_CHECKER_H
#define SPELL_CHECKER_H

#include <string>
#include <vector>

std::vector<std::string> SuggestWords(const std::string &input, const std::vector<std::string> &dictionary, int Ci, int Cd, int Cs);

#endif
