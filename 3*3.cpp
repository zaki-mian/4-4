#include <iostream>
using namespace std;

bool isValidMatrix(int matrix[][3], int sum) {
  // Check row sums
  for (int i = 0; i < 3; ++i) {
    int rowSum = 0;
    for (int j = 0; j < 3; ++j) {
      rowSum += matrix[i][j];
    }
    if (rowSum != sum) {
      return false;
    }
  }

  // Check column sums
  for (int j = 0; j < 3; ++j) {
    int colSum = 0;
    for (int i = 0; i < 3; ++i) {
      colSum += matrix[i][j];
    }
    if (colSum != sum) {
      return false;
    }
  }

  // Check diagonals
  int diagSum1 = matrix[0][0] + matrix[1][1] + matrix[2][2];
  int diagSum2 = matrix[0][2] + matrix[1][1] + matrix[2][0];
  if (diagSum1 != sum || diagSum2 != sum) {
    return false;
  }

  return true;
}

void generateMatrix(int matrix[][3], int sum) {
  // Initialize all elements to -1
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      matrix[i][j] = -1;
    }
  }

  // Backtracking approach to fill the matrix
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (matrix[i][j] == -1) {
        // Try different values for the current element
        for (int value = 1; value <= 9; ++value) {
          matrix[i][j] = value;
          if (isValidMatrix(matrix, sum)) {
            // Found a valid solution
            // (Optionally print the matrix here)
            return;
          } else {
            matrix[i][j] = -1; // Backtrack if invalid
          }
        }
      }
    }
  }

  // No valid solution found
  cout << "No valid matrix found for the given sum." << endl;
}

int main() {
  int sum;
  cout << "Enter the desired sum: ";
  cin >> sum;

  int matrix[3][3];

  generateMatrix(matrix, sum);

  return 0;
}
