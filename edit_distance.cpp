#include "edit_distance.h"
#include <vector>
#include <algorithm>
#include <iostream>

void printMatrix(const std::vector<std::vector<int>> &dp)
{
    for (const auto &row : dp)
    {
        for (int val : row)
            std::cout << val << " ";
        std::cout << "\n";
    }
}

int EditDistance(const std::string &s1, const std::string &s2)
{
    int m = s1.length();
    int n = s2.length();

    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1));

    for (int i = 0; i <= m; ++i)
        dp[i][0] = i;
    for (int j = 0; j <= n; ++j)
        dp[0][j] = j;

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            int cost = (s1[i - 1] == s2[j - 1]) ? 0 : 1;
            dp[i][j] = std::min({dp[i - 1][j] + 1,
                                 dp[i][j - 1] + 1,
                                 dp[i - 1][j - 1] + cost});
        }
    }

    return dp[m][n];
}

int EditDistance(const std::string &s1, const std::string &s2, int Ci, int Cd, int Cs)
{
    int m = s1.length();
    int n = s2.length();

    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1));

    for (int i = 0; i <= m; ++i)
        dp[i][0] = i * Cd;
    for (int j = 0; j <= n; ++j)
        dp[0][j] = j * Ci;

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            int cost = (s1[i - 1] == s2[j - 1]) ? 0 : Cs;
            dp[i][j] = std::min({dp[i - 1][j] + Cd,
                                 dp[i][j - 1] + Ci,
                                 dp[i - 1][j - 1] + cost});
        }
    }

    return dp[m][n];
}
