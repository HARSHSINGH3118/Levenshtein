# Levenshtein Distance Optimization

## Problem Overview

The Levenshtein algorithm is used to calculate the minimum number of operations (insertions, deletions, substitutions) required to convert one string into another. This is achieved through a dynamic programming (DP) approach.

However, the classic implementation becomes inefficient for very large strings due to high memory and time usage.

---

## Why Optimization is Needed

When working with long strings, the standard algorithm has the following issues:

- **Time Complexity:** O(n × m)  
  Every entry in an `n x m` DP table is filled once.

- **Space Complexity:** O(n × m)  
  The full DP matrix needs to be stored in memory.

### Example:

If both strings are 10,000 characters long, a 2D table of size `10,000 × 10,000` is required — that's 100 million cells. This can cause memory overflows and significant slowdowns.

---

## Optimization Goal

The goal is to **reduce space complexity** while keeping the algorithm correct and efficient.

---

## Our Optimization Strategy

### Key Observation:

Each DP cell `dp[i][j]` only depends on:

- `dp[i-1][j]` (above)
- `dp[i][j-1]` (left)
- `dp[i-1][j-1]` (top-left)

### Optimization:

Instead of storing the full matrix, we can use only **two rows**:

- One for the **current row**
- One for the **previous row**

At each step, we update the current row using values from the previous one, and then swap them for the next iteration.

---

## Resulting Improvements

| Feature          | Standard Approach | Optimized Approach       |
| ---------------- | ----------------- | ------------------------ |
| Time Complexity  | O(n × m)          | O(n × m)                 |
| Space Complexity | O(n × m)          | O(min(n, m))             |
| Accuracy         | Exact             | Exact                    |
| Performance      | Medium            | Improved for large input |
| Memory Usage     | High              | Significantly Lower      |

---

## Implementation Notes

- The optimized function is named: `OptimizedEditDistance`
- It uses `std::vector<int>` to represent 2 rolling rows.
- Works well even when strings are very large (e.g., 100,000+ characters)
- Does not affect correctness or output

---

## What This Achieves

- Efficiently handles large-scale string comparisons
- Makes Levenshtein distance usable in low-memory or real-time systems
- Maintains full compatibility with original results

---

## Conclusion

The optimized version of the Levenshtein algorithm is a significant improvement when working with long strings. By reducing memory usage from quadratic to linear, we preserve correctness while making the algorithm much more practical for real-world applications.
