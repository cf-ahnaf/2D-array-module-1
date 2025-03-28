#include <iostream>
using namespace std;

void transposedMatrix(int arr[][3], int transposed[][3], int r, int c) {
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      transposed[j][i] = arr[i][j];
    }
  }
}

void printMatrix(int arr[][3], int rows, int cols) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int transposed[3][3];
  cout << "Original Matrix : " << endl;
  printMatrix(arr, 3, 3);
  transposedMatrix(arr, transposed, 3, 3);
  cout << "Transposed Matrix: " << endl;
  printMatrix(transposed, 3, 3);
  return 0;
}
