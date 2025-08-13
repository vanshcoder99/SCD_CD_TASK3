# 🧩 Sudoku Puzzle Solver – Task 03 | SkillCraft Technology Internship

## 📌 Overview
This project is part of my Software Development Internship at **SkillCraft Technology**.  
I developed a **Sudoku Puzzle Solver in C++**, focusing on **backtracking algorithms**, **logic building**, and **clean coding practices**.

---

## ✨ Features
- ✅ Solves any valid 9×9 Sudoku puzzle using **backtracking**.
- ✅ Checks for valid moves before placing numbers.
- ✅ Supports user-defined puzzles as input.
- ✅ Displays the solved Sudoku grid in a neat format.
- ✅ Handles invalid puzzles gracefully.

---

## 🛠️ Tech Stack
- **Language**: C++
- **Concepts Used**:
  - Backtracking Algorithm
  - 2D Arrays
  - Functions
  - Input Validation
  - Loops & Conditional Statements

---

## 🚀 Learning Outcomes
- Strengthened understanding of **recursion** and **backtracking**.
- Learned efficient problem-solving techniques for constraint-based problems.
- Enhanced skills in **code structuring** and **logic optimization**.
- Gained experience in **debugging complex algorithms**.

---

## 📂 Project Structure
SudokuSolver/
│── sudoku.cpp # Main source code
│── README.md # Project documentation
│── input.txt # Example Sudoku puzzle
│── output.txt # Solved Sudoku puzzle



## 📸 Sample Output
Original Sudoku Puzzle:
5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
------+-------+------
8 0 0 | 0 6 0 | 0 0 3
4 0 0 | 8 0 3 | 0 0 1
7 0 0 | 0 2 0 | 0 0 6
------+-------+------
0 6 0 | 0 0 0 | 2 8 0
0 0 0 | 4 1 9 | 0 0 5
0 0 0 | 0 8 0 | 0 7 9

Solved Sudoku Puzzle:
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
------+-------+------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
------+-------+------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9