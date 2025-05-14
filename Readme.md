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
HARSH_SINGH/
├── edit_distance.cpp         # Standard and weighted edit distance logic
├── edit_distance.h           # Header for edit distance functions

├── optimized.cpp             # Optimized space-efficient Levenshtein implementation
├── optimized.h               # Header for optimized logic

├── spell_checker.cpp         # Spell checker using Levenshtein distance
├── spell_checker.h           # Header for spell checker

├── test_cases.cpp            # Functions for running all 4 tasks
├── test_cases.h              # Header declarations for runTask functions

├── main.cpp                  # Main entry point, calls runTask1–4
├── Makefile                  # Optional: to automate compilation (Linux/macOS)

├── Readme.md                 # Project overview, setup, sample I/O
├── optimization_notes.md     # Detailed explanation of Task 4 optimization

├── Output/                   # Screenshots of task outputs
│   ├── Output_1.png          # Task 1 - Standard Levenshtein
│   ├── Output_2.png          # Task 2 - Weighted Edit Distance
│   ├── Output_3.png          # Task 3 - Spell Checker
│   ├── Output_4.png          # Task 4 - Optimized Version

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
![Output_1](https://github.com/user-attachments/assets/b3dba2c3-9994-47d3-9405-fa96898f4eb2)


## Task 2
 ![Output_2](https://github.com/user-attachments/assets/3eb709f2-ab2e-48fa-af7a-c55b654fd3fc)

## Task 3
 ![Output_3](https://github.com/user-attachments/assets/8d65bd7e-2d87-4165-bd39-6ae05a177a5f)

## Task 4
![Output_4](https://github.com/user-attachments/assets/04e5abb7-07f0-498f-83c0-4bea3bc44b8b)

