#include<iostream>
using namespace std;

int reverse(int n){
  n = abs(n);
  int rev = 0;
  
  if (n == 0) {
    cout << 1 << "\n";
    return 0;
  }

  while (n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
  }

  // cout << rev << "\n";
  return rev;
}

bool palindrome(int n) {
  // get the middle digit
  int rev_n = reverse(n);  

  // cout << "n: " << n << "\n";
  // cout << "rev_n: " << rev_n << "\n";

  if (n == rev_n) {
    // cout << "hello from if";
    cout << "\n";
    return true;
  } else {
    // cout << "hello from else";
    cout << "\n";
    return false;
  }
}


int main() {
  int n;
  cin >> n;
  bool palindrome_result = palindrome(n);
  cout << palindrome_result << "\n";
}
