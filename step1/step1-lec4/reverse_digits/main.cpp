#include<iostream>
#include<cmath>
using namespace std;


void reverse(int n){
  n = abs(n);
  int rev = 0;
  
  if (n == 0) {
    cout << 1 << "\n";
    return;
  }

  while (n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
  }

  cout << rev << "\n";
}


int main() {
  int n;
  cin >> n;
  reverse(n);
}

