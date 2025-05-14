#include "optimized.h"
#include <vector>
#include <algorithm>

int OptimizedEditDistance(const std::string &s1, const std::string &s2)
{
    int m = s1.length(), n = s2.length();

    if (n < m)
        return OptimizedEditDistance(s2, s1);

    std::vector<int> prev(n + 1), curr(n + 1);

    for (int j = 0; j <= n; ++j)
        prev[j] = j;

    for (int i = 1; i <= m; ++i)
    {
        curr[0] = i;
        for (int j = 1; j <= n; ++j)
        {
            int cost = (s1[i - 1] == s2[j - 1]) ? 0 : 1;
            curr[j] = std::min({prev[j] + 1,
                                curr[j - 1] + 1,
                                prev[j - 1] + cost});
        }
        prev = curr;
    }

    return prev[n];
}
