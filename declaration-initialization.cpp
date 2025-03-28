#include <array>
#include <iostream>
using namespace std;
int main() {
  // dynamic row size
  int arr[][3] = {// Row size omitted, compiler deduces it
                  {1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};
  int rows = sizeof(arr) / sizeof(arr[0]);
  int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
  for(int i = 0;  i < rows; ++i) {
    for(int j = 0; j < cols; ++j) {
      cout << "arr [" << i << "][" << j << "] : " << arr[i][j] << endl;
    }
  }
  return 0;
}
