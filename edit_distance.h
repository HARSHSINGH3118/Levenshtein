#ifndef EDIT_DISTANCE_H
#define EDIT_DISTANCE_H

#include <string>

int EditDistance(const std::string &s1, const std::string &s2);
int EditDistance(const std::string &s1, const std::string &s2, int Ci, int Cd, int Cs);

#endif
