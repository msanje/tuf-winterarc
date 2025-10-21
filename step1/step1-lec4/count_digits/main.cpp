#include<iostream>
#include<string>
#include<typeinfo>
#include<cmath>
using namespace std;


// optimal approach
// time complexity - O(1)
void count_digits_optimal(int n) {
  n = abs(n);
  if (n == 0) {
    cout << 1 << "\n";
  } else {
    cout << floor(log10(n)) + 1 << "\n";
  }
}

// brute force approach
// time complexity O(log n)
void count_digits(int n) {
  n = abs(n);
  
  if (n == 0) {
    cout << 1 << "\n";
    return;
  }

  int count = 0;
  while (n > 0) {
    n = n / 10;
    count++;
  }

  cout << count << "\n";
}


int main() {
  int n; 
  cin >> n;
  // count_digits(n);
  count_digits_optimal(n);
}
