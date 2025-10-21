#include<iostream>
using namespace std;

int exponentiaton(int n, int p) {
  int result = n;
  for (int i = 2; i <= p; i++) {
    cout << "i: " << i << "\n";
    result += n * 1;
  }
  
  cout << "exponentiaton: " << result << "\n";

  return result;
}

int main() {
  int n;
  cin >> n;
  string s = to_string(n);

  for (char c : s) {
    cout << "c: " << c << "\n";
  }

  // while (n > 0) {
  //   int digit = n % 10;
  //   cout << "digit: " << digit << "\n";
  //   n /= 10; 
  // }
}
