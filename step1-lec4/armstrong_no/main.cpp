#include<iostream>
#include<cmath>
using namespace std;


// Problem statement
// Given an integer N, return true if it is an Armstrong number otherwise return false.

// An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits 


bool armstrong(int n) {
  int total = 0;
  int count = 0;
  int temp = n;
  int input = n;

  while (temp > 0) {
    temp /= 10;
    count++;
  }

  // cout << count << endl;

  while (n > 0) {
    int digit = n % 10;
    int result = pow(digit, count);

    total += result;

    // cout << digit << endl;
    n /= 10;
  }

  if (total == input) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n;
  cin >> n;

  bool result = armstrong(n);
  cout << result << endl;
}

// Example 1:
//
// Input: N = 153
//
// Output: True
//
// Explanation: 1^3 + 7^3 + 3^3 = 1 + 125 + 27 = 153
//
// Example 2:
// Input: N = 371
//
// Output: True
//
// Explanation: 3^3 + 7^3 + 1^3 = 27 + 343 + 1 = 371
