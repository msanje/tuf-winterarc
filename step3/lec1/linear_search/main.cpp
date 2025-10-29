#include <iostream>
using namespace std;

// Problem statement
// Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.
// Example: One
// Input: arr[] = 1 2 3 4 5, num = 3
// Output: 2
// Because 3 is present in the Index 2.

// Example: Two
// Input: arr[] = 1 2 3 4 5, num = 6
// Output: 3
// Because 6 doesn't exist in the given array

int linear_search(vector<int> arr, int num) {
  int result = 0;
  int n = arr.size();

  for (int i = 0; i < n; i++) {
    // cout << arr[i] << endl;
    if (arr[i] == num) {
      result = i;
      break;
    } 
  }

  return result;

  // for (int num : arr) {
  //   if (num == n) {
  //     return 
  //   }
  // }
}

int main() {
  int num = 3;
  vector<int> arr = {1, 2, 3, 4, 5};
  vector<int> arr_two = {5, 6, 7, 8, 9};

  int result = linear_search(arr_two, num);
  cout << "result: " << result << endl;
}
