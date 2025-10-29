#include <iostream>
using namespace std;

// Problem Statement
// Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
// Example One:
// Input: N = 3, k = 5, array[] = {2, 3, 5}
// Result: 2
//
// Example Two:
// Input: N = 5, k = 10, array[] = {2, 3, 5, 1, 9}
// Result: 3

void longest_subarray(int n, int k, vector<int>& arr) {
  int result = 0;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    result++;
    sum += arr[i];
    if (k == sum) {
      break;
    }
  }

  cout << "result: " << result << endl;
}

int main() {
  // int n = 3;
  // int k = 5;
  // vector<int> arr ={2, 3, 5};

  int n = 5;
  int k = 10;
  vector<int> arr = {2, 3, 5, 1, 9};

  longest_subarray(n, k, arr);
}
  

