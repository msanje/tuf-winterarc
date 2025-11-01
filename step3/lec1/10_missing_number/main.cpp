#include <iostream>
using namespace std;

// Problem Statement
// Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.
// Example: 1
// Input Format: N = 5, array[] = {1, 2, 4, 5}
// Result: 3
// Explanation: In the given array, number 3 is missing.
// So 3 is the answer.

void missingNumber(vector<int>& arr, int n) {
  for (int i = 0; i < n; i++) {
    if (i >= 1) {
      if (arr[i] == arr[i - 1] + 1) {
        continue;
      } else {
        cout << arr[i - 1] + 1 << endl;
        break;
      }
    }
  }
}

// What if the given array is not sorted.

int main() {
  vector<int> arr = {1, 2, 4, 5};
  int n = 5;

  missingNumber(arr, n);
}
