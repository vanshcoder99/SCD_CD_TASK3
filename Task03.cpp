#include <iostream>
using namespace std;

#define N 9  // Sudoku is a 9x9 grid

// Function to print the Sudoku grid
void printBoard(int board[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
}

// Function to check if placing num at board[row][col] is valid
bool isSafe(int board[N][N], int row, int col, int num) {
    // Check row
    for (int x = 0; x < N; x++)
        if (board[row][x] == num)
            return false;

    // Check column
    for (int x = 0; x < N; x++)
        if (board[x][col] == num)
            return false;

    // Check 3x3 box
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + startRow][j + startCol] == num)
                return false;

    return true;
}

// Backtracking solver function
bool solveSudoku(int board[N][N]) {
    int row, col;
    bool emptyFound = false;

    // Find the first empty cell
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (board[row][col] == 0) {
                emptyFound = true;
                break;
            }
        }
        if (emptyFound)
            break;
    }

    // No empty cell means puzzle is solved
    if (!emptyFound)
        return true;

    // Try numbers 1 to 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;  // Place number

            if (solveSudoku(board)) // Recursion
                return true;

            board[row][col] = 0;  // Backtrack
        }
    }

    return false; // Trigger backtracking
}

int main() {
    // Sample unsolved Sudoku board
    int board[N][N] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    if (solveSudoku(board)) {
        cout << "✅ Solved Sudoku:\n";
        printBoard(board);
    } else {
        cout << "❌ No solution exists.\n";
    }

    return 0;
}
