#include <array>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // output only for 2D array
  //  array<array<int , 3> , 2> arr = {{
  //  {14 , 21 , 28},
  //  {16 , 24 , 40}
  //  }};

  // constexpr
//  constexpr int row = 2 , col = 3;
//  array<array<int, col>, row> arr = {{{14, 21, 28}, {16, 24, 40}}};
//  for (int i = 0; i < 2; ++i) {
//    for (int j = 0; j < 3; ++j) {
//      cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
//    }
//  }

  // Working with input
  // row , column input
  // constexpr int row , col; (Not Working) ---> only works on compile time
  int row , col;
  cin >> row >> col;
  int A[row][col];
  // array elements input
  for(int i = 0; i < row; ++i) {
    for(int j = 0; j < col; ++j) {
      cin >> A[i][j];
    }
  }
  cout << "Your Given array elements are : " << endl;
  for(int i = 0; i < row; ++i) {
    for(int j = 0; j < col; ++j) {
      cout << "A[" << i << "][" << j << "] = " << A[i][j] << endl;
    }
  }
  return 0;
}
