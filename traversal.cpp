#include <array>
#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int A[4][5] = {{23, 67, 89, 12, 45},
                 {56, 90, 34, 77, 10},
                 {9, 81, 65, 43, 99},
                 {30, 71, 14, 55, 20}};
  cout << "Row wise traversal (Default) : " << endl;
  for(int i = 0; i < 4; ++i) {
    for(int j = 0; j < 5; ++j) {
      cout << "A[" << i << "][" << j << "] : " << A[i][j] << endl;
    }
  }
  cout << "Column wise traversal (Default) : " << endl;
  for(int j = 0; j < 5; ++j) {
    for(int i = 0; i < 4; ++i) {
      cout << "A[" << i << "][" << j << "] : " << A[i][j] << endl;
    }
  }
  return 0;
}
