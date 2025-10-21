#include <iostream>
using namespace std;

// Problem Statement
// Given an integer N. Print the Fibonacci series up to the Nth term.

// recursive version
// time complexity of O(2^n)
int fib(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n - 1) + fib(n - 2);
}

// recursive with memoization
// get us the nth fibonacci number
// time complexity of O(n)
int fib_memo(int n, int dp[]) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  if (dp[n] != -1) return dp[n];

  dp[n] = fib_memo(n - 1, dp) + fib_memo(n - 2, dp);
  return dp[n];
}


vector<int> fib_memo_vector(int n, vector<int> &dp) {
  if (n == 0) {
    dp[0] = 0;
    return dp;
  };

  if (n == 1) {
    dp[1] = 1;
    return dp;
  };

  if (dp[n] != -1) return dp;

  // compute previous fibonacci numbers
  fib_memo_vector(n - 1, dp);
  fib_memo_vector(n - 2, dp);
  
  dp[n] = dp[n - 1] + dp[n - 2];

  return dp;
}

void fibo(int n) {
  int arr[n]; 

  for (int i = 0; i <= n; i++) {
    if (i == 0) {
      arr[i] = 0;
    } else if (i == 1) {
      arr[i] = 1;
    } else {
      int sum = arr[i-1] + arr[i-2];
      arr[i] = sum;
    }
  }
  

  for (int i = 0; i <= n; i++) {
    cout << arr[i] << endl;
  }
}


int main() {
  int n;
  cin >> n;

  // int dp[n+1];
  // for (int i = 0; i <= n; i++) {
  //   dp[i] = -1;
  // }

  vector<int> dp(n + 1, -1);

  // fibo(n);
  // fib(n);
  // int result = fib_memo(n, dp);
  // cout << "Fib(" << n << ") = " << result << endl;  

  vector<int> result = fib_memo_vector(n, dp);

  for (int i = 0; i <= n; i++) {
    cout << result[i] << endl;
  }
}

// Example
//
// Input: N = 5
// Output: 0 1 1 2 3 5
//
//
// Input: N = 6
// Output: 0 1 1 2 3 5 8
