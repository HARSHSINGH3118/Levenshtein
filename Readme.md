# 🔤 Levenshtein Distance Project

This project implements the **Levenshtein Distance Algorithm** in C++ and includes enhancements such as **weighted edit distance**, a **spell checker**, and **space-optimized dynamic programming**.

It is designed to be modular, efficient, and interactive via CLI (Command Line Interface).

---

## 🚀 Features

-  Standard Levenshtein Distance (insert, delete, substitute — cost = 1)
-  Weighted Edit Distance (custom costs for insert, delete, substitute)
-  Spell Checker using Minimum Distance Matching
-  Space-Optimized Version using only 2 rows (O(min(n, m)) space)
-  User Input Support for Interactive Testing
 

---

## 🛠 Technologies Used

- **Language**: C++17
- **Compiler**: `g++`
- **Platform**: Windows (MinGW)
- **Editor**: VS Code / Command Prompt

---

## 📁 Project Structure
```
levenshtein_project/
├── main.cpp # Main entry point with task menu
├── test_cases.cpp # Functions for each task (runTask1–4)
├── test_cases.h # Declarations for test case functions
├── edit_distance.cpp # Levenshtein distance logic
├── edit_distance.h # Headers for distance functions
├── spell_checker.cpp # Spell checker using Levenshtein
├── spell_checker.h # Headers for spell checker
├── optimized.cpp # Optimized space-saving Levenshtein
├── optimized.h # Header for optimized logic
└── README.md # You're reading it
```
---

## 🧪 How to Compile & Run (Windows - Command Prompt)

### ✅ Step 1: Compile the Full Project

```bash
g++ main.cpp test_cases.cpp edit_distance.cpp spell_checker.cpp optimized.cpp -o levenshtein.exe
```

```bash
levenshtein.exe
```

# Sample Input & Output

## Task 1
```
Enter string 1: kitten
Enter string 2: sitting
Edit Distance: 3
```
## Task 2
```
Enter string 1: flaw
Enter string 2: lawn
Ci: 2, Cd: 2, Cs: 1
Output: 4
```
## Task 3
```
Enter word: dat
Dictionary size: 8
Words: cred bet shat that brad cart brat card
Output: bet shat that cart brat
```
## Task 4
```
Enter string 1: algorithm
Enter string 2: logarithm
Optimized Edit Distance: 3
```
