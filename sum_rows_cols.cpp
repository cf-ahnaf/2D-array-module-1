#include <iostream>
using namespace std;

void sumRowsAndCols(int arr[][3], int rows, int cols) {
  // Summing rows
  cout << "Row Sums : " << endl;
  for (int i = 0; i < rows; ++i) {
    int rowSum = 0;
    for (int j = 0; j < cols; ++j) {
      rowSum += arr[i][j];
    }
    cout << "Row " << i << " Sum: " << rowSum << endl;
  }

  // summing columns
  cout << "Columns Sums" << endl;

  for (int j = 0; j < cols; ++j) {
    int colSum = 0;
    for (int i = 0; i < rows; ++i) {
      colSum += arr[i][j];
    }
    cout << "Column " << j << " Sum: " << colSum << endl;
  }
}

int main() {
  int arr[3][3] = {{4, 7, 9}, {2, 5, 8}, {1, 3, 6}};
  sumRowsAndCols(arr, 3, 3);
  return 0;
}
