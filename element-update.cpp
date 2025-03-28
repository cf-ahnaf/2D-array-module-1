#include <iostream>
using namespace std;

void updateElement(int arr[][3], int row, int col, int newValue) {
  arr[row][col] = newValue;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[3][3] = {{4, 7, 9}, {2, 5, 8}, {1, 3, 6}};
  int row = 1, col = 1, newValue = 99;
  cout << "Before Update : " << arr[row][col] << endl;
  updateElement(arr, row, col, newValue);
  cout << "After Update : " << arr[row][col] << endl;

  return 0;
}
