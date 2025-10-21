#include<iostream>
using namespace std;

// Problem statement
// Given an integer N, return all divisors of N.
// 
// A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

int main() {
  int n;
  cin >> n;

  vector<int> result;
  
  // for (int i = 1; i <= n; i++) {
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      result.push_back(i);
      // the magic of paired divisors
      result.push_back(n/i);
    }
  }

  sort(result.begin(), result.end());

  cout << "[";
  for (int it : result) {
    cout << it << ",";
  }
  cout << "]" << endl;
}

// Examples
//
// Input: N = 36
// Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]
// Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36
//
// Input: N = 12
// Output: [1, 2, 3, 4, 6, 12]


