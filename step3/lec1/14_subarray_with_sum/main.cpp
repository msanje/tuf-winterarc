#include <iostream>
using namespace std;

// Problem Statement:
// Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
// Example 1:
// Input Format: N = 3, k = 5, array[] = {2,3,5}
// Result: 2
// Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

// Example 2:
// Input Format: N = 3, k = 1, array[] = {-1, 1, 1}
// Result: 3
// Explanation: The longest subarray with sum 1 is {-1, 1, 1}. And its length is 3.


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

  int n = 3;
  int k = 1;
  vector<int> arr = {-1, 1, 1};
  // vector<int> arr = {1, 1, 1};

  longest_subarray(n, k, arr);
}


