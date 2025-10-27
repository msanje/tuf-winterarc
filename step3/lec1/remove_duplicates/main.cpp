#include <iostream>
using namespace std;

// Problem statement
// Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once.
// Example:
// Input: [1, 1, 2, 2, 3, 3, 4, 4, 4]
// Output: [1, 2, 3, 4]

bool exists(vector<int>& result_arr, int target) {
  // find scans through the vector from start to end, comparing each element with the target
  return find(result_arr.begin(), result_arr.end(), target) != result_arr.end();
}

void remove_duplicates(vector<int>& arr, int n) {
  vector<int> result;

  for (int i = 0; i < n; i++) {
    // cout << arr[i] << endl;
    if (exists(result, arr[i]) == 0) {
      result.push_back(arr[i]);
    } 
  }

  for (int num : result) {
    cout << num << endl;
  }
}

int main() {
  vector<int> arr = {1, 2, 2, 3, 4, 4};
  int n = 6;

  remove_duplicates(arr, n);
}
