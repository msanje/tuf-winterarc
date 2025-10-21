#include<iostream>
#include<math.h>
using namespace std;

int prime_number(int n) {
  int cnt = 0;

  // this creates O(sqrt(n)) for time complexity
  // only going until sqrt(n)
  for (int i = 1; i * i <=n; i++) {
    cout << "i: " << i << endl; 

    if (n % i == 0) {
      cnt++;
    }
  }

  if (cnt == 2) {
    return true;
  } else {
    return false;
  }
}

bool isPrime(int n) {
  if (n <= 1) return false; 

  bool result = true;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      result = false;
      break;
    } 
  }

  return result;
}

int main() {
  int n;

  // Get input value
  cout << "Enter the Number : ";
  cin >> n;

  for (int i = 2; i <= n; i++) {
    // if (isPrime(i)) {
    //   cout << i << endl;
    // } 
    if (prime_number(i)) {
      cout << i << endl;
    } 

  }
}

// Example
//
// Input: n = 10
// Output: 2, 3, 5, 7
//
// Input: n = 2
// Output: 2
