#include <iostream>
using namespace std;

bool linear_search(int arr[][3] , int r , int c , int t) {
  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      if(arr[i][j] ==  t) {
        cout << "Element found at position: (" << i << "," << j << ")\n";
        return true;
      }
    }
  }
  cout << "Element not found" << endl;
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[3][3] = {{4, 7, 9}, {2, 5, 8}, {1, 3, 6}};
  int target;
  cin >> target;
  linear_search(arr , 3 , 3 , target);
  return 0;
}
